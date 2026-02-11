#include<stdio.h>
int main(){
    float num1,num2;

    printf("enter first number");
    scanf("%f",&num1);

    printf("enter second number");
    scanf("%f", &num2);

    if (num1 == num2) {
        printf("both number are equal.\n");
    } else {
        printf("both number are not equal.\n");
    }
    
    return 0;

}