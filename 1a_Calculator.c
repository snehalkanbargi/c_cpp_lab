#include <stdio.h>
// Function Definitions.
float add(int a, int b) {
    return a + b;
}
float sub(int a, int b) {
    return a - b;
}
float mul(int a, int b) {
    return a * b;
}
float div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0.00;
    }
}
void display(float d) {
    printf("\nThe answer is %f", d);
    printf("\n\n\n");
}
int main() {
    // Variables
    int a, b;               // Holding variables to calculate with.
    char opr = '+';         // The operation variable. Default is addition.
    float result;           // Result is stored here
    // Setup a display screen which displays user with beginning screen. Asks  for details
    printf("Welcome to calculator console application.\n\n");
    printf("\nChoose and operation to begin with.");
    printf("\nEnter + to choose addition.\nEnter - to choose subtraction.\nEnter * to choose multiplication.\nEnter / to choose  division.\n\nChoice is:\t");
    scanf("%s", &opr);
    printf("\n\n");
    printf("\nEnter the number with a space between them\t");
    scanf("%d %d", &a, &b);
    switch (opr) {
        case '+':
            result = add(a, b);
            break;
        case '-':
            result = sub(a, b);
            break;
        case '*':
            result = mul(a, b);
            break;
        case '/':
            result = div(a, b);
            break;
        default:
            result = add(a, b);
            break;
    }
    display(result);

    return 9;
}
