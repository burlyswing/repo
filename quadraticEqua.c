#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getNumber(char prompt[]) {
    char input[100];
    char *endptr;
    double value;

    while (1) {
        printf("%s", prompt);

        if (fgets(input, sizeof(input), stdin) == NULL) {
            printf("Error reading input. Please try again.\n");
            continue;
        }

        // Check for empty input
        if (input[0] == '\n') {
            printf("Input cannot be empty. Please enter a value.\n");
            continue;
        }

        // Convert string to double
        value = strtod(input, &endptr);

        // Check for invalid input
        if (endptr == input || (*endptr != '\n' && *endptr != '\0')) {
            printf("Invalid input. Please enter a numeric value.\n");
            // continue;
        }

        return value;
    }
}

void solveQuadratic(double a, double b, double c) {
    double discriminant, x1, x2;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("\nTwo distinct real roots:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }
    else if (discriminant == 0) {
        x1 = -b / (2 * a);

        printf("\nOne repeated real root:\n");
        printf("x = %.2lf\n", x1);
    }
    else {
        printf("\nNo real roots exist.\n");
    }
}

int main() {
    double a, b, c;

    printf("=================================\n");
    printf("   QUADRATIC EQUATION SOLVER\n");
    printf("=================================\n");
    printf("Equation form: ax^2 + bx + c = 0\n\n");

    // Input a
    while (1) {
        a = getNumber("Enter coefficient a: ");

        if (a == 0) {
            printf("Error: 'a' cannot be 0 because this would not be a quadratic equation.\n");
        } else {
            break;
        }
    }

    // Input b and c
    b = getNumber("Enter coefficient b: ");
    c = getNumber("Enter coefficient c: ");

    // Solve equation
    solveQuadratic(a, b, c);

    return 0;
}

