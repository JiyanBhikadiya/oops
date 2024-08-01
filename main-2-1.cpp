#include <iostream>
#include <string.h>

extern void print_binary_str(std::string decimal_num);

using namespace std;
int main(){
    string decimal_num = "75";

    print_binary_str(decimal_num);
    return 0;
}