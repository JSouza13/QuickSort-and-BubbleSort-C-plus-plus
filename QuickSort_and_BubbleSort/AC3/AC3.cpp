// AC3.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <time.h>
#include <iostream>
#include "Teste.h"

using namespace std;

//
void preencherVetor(int vetor[], int tamanho) {
	for (int i = 0; i<tamanho; i++) {
		vetor[i] = rand() % 100;
	}
}


//Pode criar mais casos de teste no main, só lembre de criar vetores novos

void teste2()
{
	cout << "teste;Bubblesort;Quicksort" << endl;
	for (int indice = 0; indice < 500; indice++)
		cout << indice << ";" << rand() % 100 << ";" << rand() % 100 << endl;
	system("pause");
}



int main() {
	srand(time(NULL));
	int vetor[TAM_1K];
	preencherVetor(vetor, TAM_1K);
	cout << "Duracao: " << testarAlgoritmo(BUBBLE_SORT, vetor, TAM_1K, true) << endl;
	return 0;
}
