#include <iostream>

using namespace std;

void print_binary_str(std::string decimal_num){
    int deci_num = stoi(decimal_num); //converting string to int
    string binary_num = "";

    while(deci_num!=0){ //stopping the while loop if the deci_num becomes 0
        int rem = deci_num % 2;
        binary_num = to_string(rem) + binary_num; //converting binary number from decimal
        deci_num /= 2;
    }

    cout<<binary_num<<endl;
}