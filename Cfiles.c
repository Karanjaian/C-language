//C file handling
#include<stdio.h>
#include<stdlib.h>//exit

int main(){
    int number ;
    FILE *fptr ;//declare pointer

    fptr = fopen("C:\\Users\\ianka\\program.txt","a");
    if (fptr == NULL){
        printf("Error opening the file");
        exit(1);

    }
    printf("Enter a number:");
    scanf("%d",&number);

fprintf(fptr, "The number entered is %d\n", number);
    fclose(fptr);
    printf("Number written succesfully");
    return 0;


}
