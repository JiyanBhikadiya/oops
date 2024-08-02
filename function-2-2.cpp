#include <iostream>
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits){
    int decimal_number = 0;
    int j = 0;
    for(int i=number_of_digits-1;i>=0;i--){
        if(binary_digits[i] != 0){ //checking condition that if the digit is 1 or 0
            decimal_number += pow(2,j); //calculating the eqvivalent decimal number for the binary one
        }
        j++;
    }


    return decimal_number;
}