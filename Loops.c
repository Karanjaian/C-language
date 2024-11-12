#include <stdio.h>

int main(){
    int i,sum=0;

    while(i<100){
        printf("%d\n",i);
        sum +=i;
    }
    printf("The sum is %d",sum);
}
