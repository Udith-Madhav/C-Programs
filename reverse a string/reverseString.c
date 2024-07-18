#include<stdio.h>
int main(){
    char str[100],temp;
    int i,j;

    printf("Enter the string : ");
    scanf("%s",str);

    //to find the length of the string
    for(j=0; str[j] != '\0'; j++);

    //reverse the string
    for (i = 0, j = j - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed String is : %s",str);

    return 0;
}