#include <iostream>

using namespace std;

extern int sum_min_max(int integers[],int length);

int main(){
    int array[5] = {-7,0,1,45,2};

    cout<<sum_min_max(array,5)<<endl; //calling the function
    return 0;
}