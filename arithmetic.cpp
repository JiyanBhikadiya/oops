#include <iostream>

using namespace std;
int main(){
    long int binary = 111011101011;
    string left_shift = to_string(binary) + "0";

    cout<<left_shift<<endl;
    return 0;
}