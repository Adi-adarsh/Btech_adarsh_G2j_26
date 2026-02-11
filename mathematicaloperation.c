#include<stdio.h>
int main() {
    int num1,num2;
    char op;
    printf("enter first number:\n");
    scanf("%d", &num1);

    printf("enter operator (=,-,*,/,%%):");
    scanf(" %c", &op);

printf("enter second number: \n");
    scanf("%d", num2);

    switch(op) {
        case'+':
        printf("addition =%d\n", num1 +num2);
        break;

        case'-':
        printf("subtration =%d\n", num1 - num2);
        break;

        case'*':
        printf("multiplication =%d\n", num1 * num2);
        break;

        case'/':
        if(num2 !=0)
        printf("divided = %d\n", num1 /num2);
        else 
        printf("divisionby zero not allowed\n");
        break;




    }
    

}