#include <iostream>

using namespace std;

void print_binary_str(std::string decimal_num){
    int deci_num = stoi(decimal_num);
    string binary_num = "";

    while(deci_num!=0){
        int rem = deci_num % 2;
        binary_num = to_string(rem) + binary_num;
        deci_num /= 2;
    }

    cout<<binary_num<<endl;
}