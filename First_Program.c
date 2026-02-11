#include<stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4,sub5;
    float percent;

    printf("Enter the marks of subject1: ");
    scanf("%d", &sub1);
    printf("Enter the marks of subject2: ");
    scanf("%d", &sub2);
    printf("Enter the marks of subject3: ");
    scanf("%d", &sub3);
    printf("Enter the marks of subject4: ");
    scanf("%d", &sub4);
    printf("Enter the marks of subject5: ");
    scanf("%d", &sub5);

    percent = (float)(sub1 + sub2 + sub3 + sub4 + sub5)/5;

if(percent <=100 || percent >=90 )
{
    printf("Grade A");
}
else if(percent < 90 || percent >=80 ){
    printf("Grade B");
}
else if(percent < 80 || percent >=60 )
{
    printf("Grade C");
}
else
{
    printf("Grade D");
}

    return 0;
}