#include<stdio.h>

int main() {
    int year,result;
    printf("enter a year: " );
    scanf("%d",&year);
    result =((year % 400 == 0) || (year %4 == 0 &&  year % 100 != 0));
     switch(result) {
        case 1:
        printf("leap year\n");
        break;
        case 0:
        printf("not a leap year\n");
        break;

     }
     return 0;
 }