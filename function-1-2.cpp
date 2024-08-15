#include <iostream>
#include <string.h>

int* readNumbers(){
    int *numbers = new int[10];

    for(int i=0;i<10;i++){
        std::cin >> numbers[i];
    }

    return numbers;
}

void hexDigits(int *numbers,int length){
    
    int hexaDecimal[16] = {48,49,50,51,52,53,54,55,56,57,65,66,67,68,69,70};

    for(int i=0;i<length;i++){
        char z[10] = {};
        if(numbers[i] < 10){
            z[i] = numbers[i] + 48;            
        }
        else{
            z[i] = numbers[i] + 55;
        }
        std::cout<<i<<" "<<numbers[i]<<" "<<z[i]<<std::endl;
    }
}