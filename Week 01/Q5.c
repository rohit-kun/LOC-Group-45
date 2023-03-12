#include<stdio.h>
void main(){

float n;
printf("Enter radius of circle : ");
scanf("%f", &n);
float d=n*2;
printf("Diameter = %f\n", d);
float c=2*3.14*n;
printf("Circumference = %f\n", c);
float a=3.14*n*n;
printf("Area = %f\n", a);

}