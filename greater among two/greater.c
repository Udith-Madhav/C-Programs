#include<stdio.h>
int main(){
    int a,b;

    printf("Enter the two number : ");
    scanf("%d%d",&a,&b);

    if(a>b){
        printf("%d is greatest among %d and %d",a,a,b);
    }
    else{
        printf("%d is greatest among %d %d",b,a,b);
    }

    return 0;
}