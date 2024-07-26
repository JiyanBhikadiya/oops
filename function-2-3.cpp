#include <iostream>

void two_five_nine(int array[],int n){
    int count2=0,count5=0,count9=0;

    for(int i=0;i<n;i++){
        switch (array[i]) //placing each element of the array in switch case 
        {
        case 2:
            count2++; 
            break; //breaking the case
        case 5:
            count5++; //increasing the count5 value by 1
            break;
        case 9:
            count9++;
            break;
        default: //placing a default if evert condition fails
            break;
        }
    }

    std::cout<<"2:"<<count2<<";5:"<<count5<<";9:"<<count9<<";"<<std::endl;
}