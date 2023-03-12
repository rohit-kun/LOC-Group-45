#include<stdio.h>
void main(){

int num;
printf("Enter number : ");
scanf("%d", &num);
int rem;
int sum=0;
do{
    rem=num%10;
    sum=sum+rem;
    num=num/10;
}while(num!=0);
printf("Sum of the digits of the number = %d\n", sum);

}