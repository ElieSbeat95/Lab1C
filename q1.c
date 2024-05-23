#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Number\tSquare\tCube\n");
    for(int i=num;i<=num+4;i++){
        printf("  %d\t%d\t%d\n",i,(int)pow(i,2),(int)pow(i,3));
    }
    return 0;
}