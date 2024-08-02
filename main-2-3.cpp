#include <iostream>

using namespace std;
extern int sum_array_elements(int integers[], int length);
int main(){
    int array[4] = {1,2,2,1};

    cout<<sum_array_elements(array,4)<<endl; //calling the function
    return 0;
}