#include<stdio.h>
int main(){
    int a ,b;
    printf("Enter two number:");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}
