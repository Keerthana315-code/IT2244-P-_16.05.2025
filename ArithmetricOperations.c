#include <stdio.h>

int main() {
    int a, b, sum, sub, mul, mod;
    double div;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum: %d\n", sum);

    sub = a - b;
    printf("Sub: %d\n", sub);

    mul = a * b;
    printf("Mul: %d\n", mul);

    
    div = (double)a / b;
    printf("Div: %lf\n", div);

    mod = a % b;
    printf("Mod: %d\n", mod);

    return 0;
}
