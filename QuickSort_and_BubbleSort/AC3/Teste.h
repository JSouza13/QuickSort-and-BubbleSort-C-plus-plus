#pragma once
#ifndef TESTE_H
#define TESTE_H

#include <iostream>
#include <chrono>
#include "BubbleSort.h"
#include "QuickSort.h"

#define QUICK_SORT 1
#define BUBBLE_SORT 2
#define TAM_100 100
#define TAM_1K 1000
#define TAM_10K 10000
#define TAM_100K 100000
#define TAM_200K 200000
#define TAM_500K 500000

using namespace std;
using namespace chrono;

void exibirVetor(int vetor[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		cout << vetor[i] << "|";
	}
}

long long testarAlgoritmo(int algoritmo, int vetor[], int tamanho, bool ehCrescente) {
	//define tempo inicial antes de ordenar
	steady_clock::time_point tempoInicial = steady_clock::now();
	if (algoritmo == BUBBLE_SORT) {
		fazerBubbleSort(vetor, tamanho, ehCrescente);
		cout << "Bubblesort;" << endl;
		//exibirVetor(vetor, tamanho);
	}
	else if (algoritmo == QUICK_SORT) {
		fazerQuickSort(vetor, tamanho, 0, tamanho-1, ehCrescente);
		cout << "Quicksort;" << endl;
		//exibirVetor(vetor, tamanho);
	}
	//define tempo final após ordenar
	steady_clock::time_point tempoFinal = steady_clock::now();
	//retorna a duração da ordenação, em milisegundos (tempofinal – tempo inicial)
	//1 ms = 0.001 segundos
	return duration_cast<milliseconds>(tempoFinal - tempoInicial).count();
	//retorna tempo
}
#endif 
