#include<stdio.h>
void main(){

    int n=1;
    int a;
    printf("Enter first number : ");
    scanf("%d", &a);
    int b;
    printf("Enter Second number : ");
    scanf("%d", &b);
    switch(n){
        case 1 : printf("Sum = %d\n",a+b);
        case 2 : printf("Difference = %d\n",a-b);
        case 3 : printf("Multiplication = %d\n",a*b);
        case 4 : printf("Division = %d\n",a/b);
        case 5 : printf("Mod = %d\n",a%b);
        break;
        default : printf("No Case\n");
    }

}