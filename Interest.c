#include <stdio.h>

int main(){
    float Principal,rate,time,interest;

    printf("Enter Principal:");
    scanf("%f",&Principal);

    printf("Enter rate of interest:");
    scanf("%f",&rate);

    printf("Enter time in yrs:");
    scanf("%f",&time);

    interest = (Principal * rate * time)/100;
    //Output result
    printf("Simple interest=%f\n",interest);


return 0;
}
