#include <iostream>
#include "../include/questao_1.h"

/*!
 *
 * 
 * 
 * 
*/
int read_numbers(){
    std::cout << "Insira 5 números inteiros.\n";
    int numbers [5];
    int positive_numbers [5];
    int positive_qnt(0);
    for(int i(0); i < 5; ++i)
    {
        std::cin >>  numbers[i];
        if(numbers[i] < 0)
        {
            positive_numbers[positive_qnt] =  numbers[i];
            positive_qnt += 1;
        } 
    }
    show_positives(positive_numbers, positive_qnt);
    return 0;
}

int show_positives(int positives[], int lng){
    for(int i(0); i < lng; ++i)
    {
        std::cout << positives[i]<< " é negativo.\n";
    }
    return 0;
}
