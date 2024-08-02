#include <iostream>

using namespace std;

void print_summed(int array1[3][3],int array2[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<array1[i][j]+array2[i][j]<<" ";//printing the sum of 2 matrix        
        }
        cout<<endl; //printing a new line after each row
    }
}

//Relation between both matrix:- both the matrix should have the same number of rows and columns.