#include <stdio.h>

int main(){

   //declare an array with 3 rows and 3 columns
   int i,j;
   int marks [3][3] = {
   {5,1,8},
   {6,2,9}};

   for(i=0;i<3;i++){
    for(i=0;i<3;i++){
        printf("marks[%d][%d] = %d\n",i,j,marks[i][j]);
    }
   }

return 0;
}

