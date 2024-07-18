#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter the two number : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        printf("%d is greatest",a);
    }
    else if(b>c){
        printf("%d is greatest",b);
    }
    else{
        printf("%d is greatest",c);
    }

    return 0;
}