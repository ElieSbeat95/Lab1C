#include<stdio.h>
int main(){
    float e,h;
    printf("Enter a triangle edge and its height respectively, please: ");
    scanf("%f%f",&e,&h);
    printf("The triangle area is: %.3f",e*h/2);
    return 0;
}