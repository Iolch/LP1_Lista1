#include "../include/questao_8.h"
int filter(int first, int last){
	if(first < last){
		unsigned int numbers_qnt;
		if (first <= 0 and last >= 0){
			numbers_qnt = (first * -1) + last + 1;
		}else{
			if(first < 0 and last < 0){
				numbers_qnt = (-1)*(first + last);
			}else{
				if(first >= 0 and last >= 0){
					numbers_qnt = first + last + 1;
				}
			}
		}

		int vet[numbers_qnt];
		int j = 0;
		int k;
		for (int i = first; i <= last; ++i){
			vet[j] = i;
			std::cout << j << " - "<< vet[j] << "\n";
			++j; 
		}
		int taken_numbers = 0;
		for(unsigned int i = 0; i < numbers_qnt; ++i){
			if(vet[i] <= 0){
				taken_numbers += 1;
				vet[i] = {};
				for( unsigned int j = i; j < numbers_qnt; ++j){
					vet[j] = vet[j + 1];
				}
				k = numbers_qnt - taken_numbers;
				vet[k] = {0};

			}
			std::cout << i << " = "<< vet[i] << "\n";
		}
		
	}else{
		std::cout << "Intervalo mal definido";
	}
	
	return 0;
}