#include <iostream>

int is_identity(int array[10][10]){
    int flag = 1; //initialising flag to 1

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(i==j){ //checking condition for diagnol
                if(array[i][j] != 1){ //checking condition for 1
                    flag = 0;
                }
            }
            else{
                if(array[i][j] != 0){ //checking condition for other elements to be zero
                    flag = 0;
                }
            }
        }
    }

    return flag;
}