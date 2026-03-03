#include<stdio.h>
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        printf("divisible by both 5 and 11");
    }
    else if( a%5==0 ){
        printf("divisible by 5");
    }
    else if(a%11==0){
        printf("divisible by 11");
    }
    else{
        printf("none");
    }
    return 0;
}
