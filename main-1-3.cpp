#include <iostream>

extern double* duplicateArray(double* array, int size); //defining a function

int main(){
    double array[5] = {1.1,2.2,3.3,4.4,5.5};
    int size = 5;

    double* new_array = duplicateArray(array,size); //calling a function duplicate array and storing the returned value in a new variable

    for(int i=0;i<size;i++){
        std::cout<<new_array[i]<<" "; //printing array after modification
    }
    std::cout<<std::endl; //printing a new line at the end
 
    delete[] new_array; //free memory
    return 0;
}