#include "../include/questao_4.h"

int fib_b4_n(){
	unsigned int n;
	std::cout << "Digite um inteiro positivo: ";
	std::cin >> n;
	int anterior(0), anteanterior(0);
	for (unsigned int atual(1); atual <= n;){
		std::cout << atual << '\n';
		anteanterior = anterior;
		anterior = atual;
		atual = anterior + anteanterior;
	}
	return 0;
}