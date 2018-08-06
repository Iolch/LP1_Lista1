#include <iostream>
#include "../include/questao_2.h"
#define MIN_1 0
#define MIN_2 25
#define MIN_3 50
#define MIN_4 75
#define MIN_5 100  
int read_any_qnt_numbers(){
    
    int atualnumber(0);
    int numbers_qnt(0);
    int first_interval_qnt(0);
    int secon_interval_qnt(0);
    int third_interval_qnt(0);
    int fourt_interval_qnt(0);
    std::cout << "Entre com os valores inteiros (ctrl + d para encerrar): " << std::endl;
    while(std::cin >> atualnumber)
    {
        if(atualnumber >= MIN_1 and atualnumber < MIN_2){first_interval_qnt += 1;}
        else
        {
            if(atualnumber >= MIN_2 and atualnumber < MIN_3){secon_interval_qnt += 1;}
            else
            {
               if(atualnumber >= MIN_3 and atualnumber < MIN_4){third_interval_qnt += 1;}
               else
               {
                   if(atualnumber >= MIN_4 and atualnumber <= MIN_5){fourt_interval_qnt += 1;}
               }
               
            }
        }
        numbers_qnt += 1;
    }
    std::cout << "Dos digitados, "<<calc_prcnt(numbers_qnt, first_interval_qnt)<<"% são números do primeiro intervalo ("<<MIN_1<<", "<<MIN_2<<"[ \n";
    std::cout << "Dos digitados, "<<calc_prcnt(numbers_qnt, secon_interval_qnt)<<"% são números do segundo intervalo  ("<<MIN_2<<", "<<MIN_3<<"[ \n";
    std::cout << "Dos digitados, "<<calc_prcnt(numbers_qnt, third_interval_qnt)<<"% são números do terceiro intervalo ("<<MIN_3<<", "<<MIN_4<<"[ \n";
    std::cout << "Dos digitados, "<<calc_prcnt(numbers_qnt, fourt_interval_qnt)<<"% são números do quarto intervalo   ("<<MIN_4<<", "<<MIN_5<<"] \n";
    return 0;

}
float calc_prcnt(int total, int qnt){
    float prcnt = (100 * qnt)/ total;
    return prcnt;
}





