#include "../include/questao_7.h"
#define size 20
int troca_seguintes_vet(){
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
	for(unsigned int i(0); i < size / 2; i = i + 2){
		j = i + 1;
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