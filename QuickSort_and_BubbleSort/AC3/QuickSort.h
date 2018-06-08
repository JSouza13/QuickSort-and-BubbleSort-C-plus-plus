#pragma once
#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include "Teste.h"

int dividir(int vetor[], int esq, int dir)
{
	int aux; //troca de posições
	int cont = esq;

	for (int i = esq + 1; i <= dir; i++)
	{
		if (vetor[i] < vetor[esq])
		{
			cont++;
			aux = vetor[i];
			vetor[i] = vetor[cont];
			vetor[cont] = aux;
		}
	}
	aux = vetor[esq];
	vetor[esq] = vetor[cont];
	vetor[cont] = aux;

	return cont;
}

void fazerQuickSort(int vetor[], int esq, int dir)
{
	int pos;
	if (esq < dir)
	{
		pos = dividir(vetor, esq, dir);
		fazerQuickSort(vetor,esq, pos - 1);
		fazerQuickSort(vetor,pos + 1, dir);
	}
}




#endif 
