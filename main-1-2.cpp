#include <iostream>

extern int is_identity(int array[3][3]);
int main(){
    int array[3][3] = {{1,0,02},{0,1,0},{0,0,1}};

    std::cout<<is_identity(array)<<std::endl;
    return 0;
}