#pragma once
#ifndef BUBBLESORT_H
#define BUBBLESORT_H

void fazerBubbleSort(int vetor[], int tamanho, bool ordenacaoCrescente)
{
	if (ordenacaoCrescente)
	{
		for (int i = 1; i < tamanho; ++i)
		{
			for (int j = 0; j < tamanho - i; ++j)
			{
				if (vetor[j] > vetor[j + 1])
				{
					int temp = vetor[j];
					vetor[j] = vetor[j + 1];
					vetor[j + 1] = temp;
				}
			}
		}
	}
	else
	{
		for (int i = 1; i < tamanho; ++i)
		{
			for (int j = 0; j < (tamanho - i); ++j)
			{
				if (vetor[j] < vetor[j + 1])
				{
					int temp = vetor[j];
					vetor[j] = vetor[j + 1];
					vetor[j + 1] = temp;
				}
			}
		}
	}
}

#endif 