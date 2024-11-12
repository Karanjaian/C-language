#include <stdio.h>

int main(){
    int i,j,k;
    int marks[2][2][3] = {
    {{55,50,75},
    {40,90,20}},
    {{5,6,7},
    {1,2,3}}

    };
    for(i=0;i<2;i++){//matrices
            for(j=0;j<2;j++){//rows
                    for(k=0;k<3;k++){ //columns
                        printf("marks[%d][%d][%d] = %d\n", i, j, k, marks[i][j][k]);

    }

    }

    }
return 0;
    }

