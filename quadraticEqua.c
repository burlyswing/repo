

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Error: Please enter only numbers.\n");
        return 1;
    }
    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Two real roots:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);

        printf("One real root:\n");
        printf("Root = %.2lf\n", root1);
    }
    else {
        printf("No real roots.\n");
    }

    return 0;
}