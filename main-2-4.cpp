#include <iostream>

using namespace std;

extern int sum_min_max(int integers[],int length);

int main(){
    int array[5] = {1,2,3,4,5};

    cout<<sum_min_max(array,5)<<endl;
    return 0;
}