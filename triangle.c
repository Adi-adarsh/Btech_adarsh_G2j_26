#include<stdio.h>
int main() {
    float a,b,c;

    printf("enter three sides:");
    scanf("%f %f %f" , &a,&b,&c);
    if (a+b >c && a+c >b && c+b >a ) {
        printf("triangle cab be formed.\n");
    } else {
        printf("triangle can not be formed.\n");
    }
    return 0;
}
 