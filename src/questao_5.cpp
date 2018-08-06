#include "../include/questao_5.h"

int menor_elemento(){
	unsigned  int vet[20];
	unsigned int menor_elemento(0);
	for(unsigned int i(0); i < 20; ++i){
		std::cin >> vet[i];

		if(vet[i] < vet[menor_elemento]){
			menor_elemento = i;
		}
	}
	std::cout << "menor número eh" << vet[menor_elemento] << "e ocupa a posicao" << menor_elemento+1 << "dos digitados" ;
	return 0;
}