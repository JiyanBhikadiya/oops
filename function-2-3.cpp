#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);

int sum_array_elements(int integers[], int length){
    int is_palin = is_palindrome(integers,length);

    if(is_palin == 1){
        int sum = sum_if_palindrome(integers,length);
        return sum;
    }
    else{
        return 2;
    }
    return is_palin;
}

bool is_palindrome(int integers[], int length){
    int mid = length/2;
    int flag = 1;
    
    int j = length-1;
    for(int i=0;i<mid;i++){
        if(integers[i] != integers[j]){
            flag = 0;
        }
        j--;
    }
    
    return flag;
}

int sum_if_palindrome(int integers[], int length){
    int sum = 0;

    for(int i=0;i<length;i++){
        sum += integers[i];
    }

    return sum;
}