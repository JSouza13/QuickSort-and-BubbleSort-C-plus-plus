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
		cout << endl << "Vetor ordenado crescentemente =" << endl << endl;
		for (int i = 0; i <tamanho; ++i)
			cout << vetor[i] << " | ";
		cout << endl << endl;
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
		cout << endl << "Vetor ordenado decrescentemente =" << endl << endl;
		for (int i = 0; i < tamanho; ++i)
			cout << vetor[i] << " | ";
		cout << endl << endl;
	}
}

#endif 