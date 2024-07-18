#include<stdio.h>
int main(){
    int n1,n2,choice;

    
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");

    printf("Enter the choice number : ");
    scanf("%d",&choice);

    printf("Enter the first number : ");
    scanf("%d",&n1);

    printf("Enter the second number : ");
    scanf("%d",&n2);

    switch (choice){
        case 1 : 
                printf("%d + %d = %d",n1,n2,n1+n2);
                break;
            case 2 : 
                printf("%d - %d = %d",n1,n2,n1-n2);
                break;
            case 3 : 
                printf("%d x %d = %d",n1,n2,n1*n2);
                break;
            case 4 : 
                printf("%d / %d = %d",n1,n2,n1/n2);
                break;                
            default: printf("Enter wrong choice!!"); 
        } 
           
    return 0;
}