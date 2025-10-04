#include <stdio.h>

int main() {
    int a, b;
    
    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("Result: %d + %d = %d\n", a, b, a + b);
    
    return 0;
}