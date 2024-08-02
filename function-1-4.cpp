#include <iostream>

using namespace std;
void print_scaled(int array[3][3],int scale){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            array[i][j] *= scale; //multiplying each element by scale
            cout<<array[i][j]<<" "; //printng array elements as per requiremnents
        }
        cout<<endl; //printing new line after each row
    }
}