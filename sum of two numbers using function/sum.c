#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    sum = add(num1, num2); // Function call
    printf("Sum: %d\n", sum);
    
    return 0;
}
