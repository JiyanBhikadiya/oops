#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int num = 75,count = 0;
    string binary = "";

    while(num!=0){
        int rem = num%2;
        binary = to_string(rem) + binary;
        num /= 2;
    }

    cout<<binary<<endl;
    return 0;
}