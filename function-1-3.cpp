#include <iostream>

void count_digits(int array[4][4]){
    int result[10][2];

    for(int i=0;i<10;i++){
        result[i][0] = i; //assigning 0-9 in the first column
        result[i][1] = 0; //assigning 0 in the second column which is the count
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            switch (array[i][j]) //setting up a switch case to check for every digit
            {
            case 0:
                result[0][1]++; //increasing count value
                break;
            case 1:
                result[1][1]++;
                break; //breaking the case to prevent increment of the rest
            case 2:
                result[2][1]++;
                break;
            case 3:
                result[3][1]++;
                break;
            case 4:
                result[4][1]++;
                break;
            case 5:
                result[5][1]++;
                break;
            case 6:
                result[6][1]++;
                break;
            case 7:
                result[7][1]++;
                break;
            case 8:
                result[8][1]++;
                break;
            case 9:
                result[9][1]++;
                break;
            default:
                break;
            }
        }
    }

    for(int i=0;i<10;i++){
        std::cout<<result[i][0]<<":"<<result[i][1]<<";"; //printing the output as per requirments
    }

    std::cout<<std::endl;
}