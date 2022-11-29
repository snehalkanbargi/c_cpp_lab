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
    return b != 0 ? a / b : 0.0;
}
void display(float d) {
    printf("\nThe answer is %f", d);
    printf("\n\n\n");
}
int main() {
    // Setup the required things
    // Variables
    int a, b;               // Holding variables to play with. Max limited to 99.
    char opr = '+';         // The operation variable. Default is addition.
    float result;
    // Function pointers
    float (*func)(int, int);
    void (*disp)(float f);
    disp = display;
    // Setup a display screen which displays user with beginning screen. Asks  for details
    printf("Welcome to calculator console application.\n\n");
    printf("Choose and operation to begin with.\n");
    printf(" Enter + to choose addition.\n Enter - to choose subtraction.\nEnter * to choose multiplication.\nEnter / to choose division.\n\nChoice is:\t");
    scanf("%s", &opr);
    printf("\n\n");
    printf("\nEnter the number with a space between them\t");
    scanf("%d %d", &a, &b);
    switch (opr) {
        case '+':
            func = add;
            break;
        case '-':
            func = sub;
            break;
        case '*':
            func = mul;
            break;
        case '/':
            func = div;
            break;
        default:
            func = add;
            break;
    }
    result = (*func)(a, b);
    (*disp)(result);

    return 9;
}
