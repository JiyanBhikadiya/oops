#include <iostream>

using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);
int main(){
    int binary_num[7] = {1,0,0,1,0,1,0};

    cout<<binary_to_int(binary_num,7)<<endl;    
    return 0;
}