//Grading system

#include <stdio.h>

int main(){
    int Structured_programming,Computation_logic,Basic_maths;

    printf("Enter the marks for Structured programming :  ");
    scanf("%d",&Structured_programming);

    printf("Enter the marks for Computation logic :  ");
    scanf("%d",&Computation_logic);

    printf("Enter the marks for Basic maths :  ");
    scanf("%d",&Basic_maths);
 return 0;
}
int main(){
    float Structured_programming,Computation_logic,Basic_maths,average;

    printf("Enter the marks for Structured programming :  ");
    scanf("%f",&Structured_programming);

    printf("Enter the marks for Computation logic :  ");
    scanf("%f",&Computation_logic);

    printf("Enter the marks for Basic maths :  ");
    scanf("%f",&Basic_maths);

    average = (Structured_programming+Computation_logic+Basic_maths)/3.0;

    printf("The average of %f,%f and %f is %f\n",Structured_programming,Computation_logic,Basic_maths,average)




return 0;
}
