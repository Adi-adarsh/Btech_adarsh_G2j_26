 #include<stdio.h>
 int main() { 
    float num1,num2,num3;

     printf("enter first number");
    scanf("%f",&num1);

    printf("enter second number");
    scanf("%f",&num2);

    printf("enter third number");
    scanf("%f",&num3);

    if ( num1 >= num2 && num2 >= num3) {
        printf("greatest number is: %f\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("greatest number is: %f\n", num2);
    } else {
        printf("greates number is: %f\n", num3);
    }
 
return 0;

    }