#include <iostream>

using namespace std;

extern int array_min(int integers[],int length);
extern int array_max(int integers[],int length);

int sum_min_max(int integers[],int length){
    if(length <= 0){
        return -1;
    }
    else{
        int min = array_min(integers,length);
        int max = array_max(integers,length);

        int sum = min + max;

        return sum;
    }
}

int array_min(int integers[],int length){
    int min = integers[0];

    for(int i=0;i<length;i++){
        if(integers[i] < min){
            min = integers[i];
        }
    }

    cout<<"Minimum = "<<min<<endl;
    
    return min;
}

int array_max(int integers[],int length){
    int max = integers[0];

    for(int i=0;i<length;i++){
        if(integers[i] > max){
            max = integers[i];
        }
    }

    cout<<"Maximum = "<<max<<endl;

    return max;
}