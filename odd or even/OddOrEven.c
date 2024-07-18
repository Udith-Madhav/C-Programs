#include <stdio.h>
void main(){
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);

    if(n%2 == 0){
        printf("it is an even number");
    }
    else{
        printf("it is an odd number");
    }
}