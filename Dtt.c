 //C variables and data types
//Preprocessor directives
#include <stdio.h>
 int main(){
    //declaration and initialization
    char a ;//%c
    char name []= {};//%s
    int age ;//%d
    float area;//%f
    double Saving ;//%lf

     printf("Enter a character:");
     scanf("%c",&a);
     printf("The character is %c \n",a);

     printf("Enter your name:");
     scanf("%s",&name);
     printf("The name is %s\n",name);

     printf("Enter your age:");
     scanf("%d",&age);
     printf("The age is %d years\n ",age);

     printf("Enter your area:");
     scanf("%f",&area);
     printf("The area is %f\n",area);

     printf("Enter an amount:");
     scanf("%lf",&Saving);
     printf("The amount of savings is Ksh %lf\n",Saving);

 return 0;
 }

