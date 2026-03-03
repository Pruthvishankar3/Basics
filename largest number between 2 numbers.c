#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("Largest number is:%d\n",a);
    }
    else if(b>a){
        printf("Largest number is:%d\n",b);
    }
    else{
        printf("both numbers are equal");
    }
    return 0;
}
