#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    int result=(a*2)+(b*b)+c;
    printf("y=a*2+b^2+c=<%d>*2+<%d>^2+%d=%d",a,b,c,result);
    return 0;
}