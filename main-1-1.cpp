#include <iostream>

using namespace std;

extern int sum_diagonal(int array[4][4]);

int main(){
    int array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}}; //declaring an array

    cout<<sum_diagonal(array)<<endl; //calling sum_diagnol and printing the returned value
    return 0;
}