#include<stdio.h>
int main(){
    float price;
    printf("Please enter the product price: ");
    scanf("%f",&price);
    printf("The price after 15%% discount: %.2f",price*0.85);
    return 0;
}