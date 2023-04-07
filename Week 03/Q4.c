#include <stdio.h>
void main(){
    int num, i, fact = 1;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    for (i = 1; i <= *ptr; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %d", *ptr, fact);

}