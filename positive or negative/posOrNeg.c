#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n > 0){
        printf("The given %d is positive",n);
    }
    else{
        printf("The given %d is negative",n);
    }
    return 0;
}