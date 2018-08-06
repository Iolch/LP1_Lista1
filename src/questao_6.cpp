#include "../include/questao_6.h"
#define size 20
int troca_interna(){
	unsigned  int vet[size];
	//unsigned int valor_temporario;
	for(unsigned int i(0); i < size; ++i){
		std::cin >> vet[i];
	}
	std::cout << "Array inserido \n";
	for(unsigned int i(0); i < size; ++i){
		std::cout << vet[i] << "\n";
	}
	unsigned int valor_temporario;
	unsigned int j;
	for(unsigned int i(0); i < size / 2; ++i){
		j = size - 1 - i;
		valor_temporario = vet[j];
		vet[j] = vet[i];
		vet[i] = valor_temporario;
	}
	std::cout << "Array modificado \n";
	for(unsigned int i(0); i < size; ++i){
		std::cout << vet[i] << "\n";
	}

	return 0;
}