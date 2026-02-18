#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different:\n");
        printf("Root1 = %.2lf\n", root1);
        printf("Root2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2lf\n", root1);
    }
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different:\n");
        printf("Root1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}