#include<stdio.h>
void main(){

int n;
printf("Enter a number : ");
scanf("%d", &n);
if(n>0){
    printf("Positive\n");
}
else if(n<0){
    printf("Negative\n");
}
else{
    printf("Zero\n");
}

}