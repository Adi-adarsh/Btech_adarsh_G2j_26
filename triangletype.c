#include<stdio.h>
int main() {
    float a,b,c;

    printf("enter three sides:");
    scanf("%f %f %f" , &a,&b,&c);
    if (a +b >c && b+c >a && a+c >b )
    {if (a == b && b==c )
        {printf( "triangle is equilateral\n" );
} else if ( a == b || b==c || a== c){
    printf("trinagle is isosceles\n");
} else {
        printf("triangle  is scalene.\n");
    } 
} else {
        printf("triangle can not be formed.\n");
    }
    return 0;
}
 