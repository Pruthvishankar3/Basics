#include<stdio.h>
int main(){
    int a,b,Add,Sub,Mul;
    float Div;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    Add=a+b;
    Sub=a-b;
    Mul=a*b;
    Div=(float)a/b;
    printf("Addition: %d\n",Add);
    printf("Subtraction: %d\n",Sub);
    printf("Multiplication: %d\n",Mul);
    printf("Division: %.2f",Div);
    return 0;
}
