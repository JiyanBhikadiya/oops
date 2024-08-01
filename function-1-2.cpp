#include <iostream>

int is_identity(int array[3][3]){
    int flag = 1;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
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