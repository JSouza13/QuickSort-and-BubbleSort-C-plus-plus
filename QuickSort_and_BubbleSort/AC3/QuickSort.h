#pragma once
#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include "Teste.h"

void fazerQuickSort(int vetor[], int tam, int inicio, int fim, bool ordenacaoCrescente)
{
	int pivo, aux, i, j, meio;
	i = inicio;
	j = fim;
	meio = (int)((i + j) / 2);
	pivo = vetor[meio];
	if (ordenacaoCrescente)
	{
		do {
			while (vetor[i] < pivo) i = i + 1;
			while (vetor[j] > pivo) j = j - 1;
			if (i <= j) {
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
				i++;
				j--;
			}
		} while (j > i);
		if (inicio < j) fazerQuickSort(vetor, tam, inicio, j, ordenacaoCrescente);
		if (i < fim) fazerQuickSort(vetor, tam, i, fim, ordenacaoCrescente);
	}
	else
	{
		do {
			while (vetor[i] > pivo) i = i + 1;
			while (vetor[j] < pivo) j = j - 1;
			if (i <= j) {
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
				i++;
				j--;
			}
		} while (j > i);
		if (inicio < j) fazerQuickSort(vetor, tam, inicio, j, ordenacaoCrescente);
		if (i < fim) fazerQuickSort(vetor, tam, i, fim, ordenacaoCrescente);
	}
}
#endif 
