#include <iostream>

int is_identity(int array[10][10]){
    int flag = 1;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(i==j){
                if(array[i][j] != 1){
                    flag = 0;
                }
            }
            else{
                if(array[i][j] != 0){
                    flag = 0;
                }
            }
        }
    }

    return flag;
}