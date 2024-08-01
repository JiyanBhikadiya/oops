#include <iostream>

using namespace std;

extern int sum_diagonal(int array[4][4]);

int main(){
    int array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};

    cout<<sum_diagonal(array)<<endl;
    return 0;
}