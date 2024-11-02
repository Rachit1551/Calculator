#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Cannot divide by zero.\n");
        return 0.0;
    }
}

double square_root(double a) {
    if (a >= 0) {
        return sqrt(a);
    } else {
        printf("Error: Cannot calculate square root of a negative number.\n");
        return 0.0;
    }
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double rectangle_area(double length, double width) {
    return length * width;
}

double circle_area(double radius) {
    return M_PI * radius * radius;
}

double triangle_area(double base, double height) {
    return 0.5 * base * height;
}

void area() {
    char shape;
    printf("Enter the shape (r for rectangle, c for circle, t for triangle): ");
    scanf(" %c", &shape);

    switch (shape) {
        case 'r': {
            double length, width;
            printf("Enter the length and width of the rectangle: ");
            scanf("%lf %lf", &length, &width);
            printf("Area of the rectangle: %.2f\n", rectangle_area(length, width));
            break;
        }
        case 'c': {
            double radius;
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            printf("Area of the circle: %.2f\n", circle_area(radius));
            break;
        }
        case 't': {
            double base, height;
            printf("Enter the base and height of the triangle: ");
            scanf("%lf %lf", &base, &height);
            printf("Area of the triangle: %.2f\n", triangle_area(base, height));
            break;
        }
        default:
            printf("Invalid shape.\n");
            break;
    }
    printf("Want to continue (y/n): ");
    char c;
    fflush(stdin);
    scanf(" %c", &c);
    if (c == 'y') {
        area();
    }
}

void calculator() {
    double operand1, operand2;
    char operator;

    printf("Enter an expression (e.g., 2 + 3): ");
    scanf("%lf %c %lf", &operand1, &operator, &operand2);

    switch (operator) {
        case '+':
            printf("Result: %.2f\n", add(operand1, operand2));
            break;
        case '-':
            printf("Result: %.2f\n", subtract(operand1, operand2));
            break;
        case '*':
            printf("Result: %.2f\n", multiply(operand1, operand2));
            break;
        case '/':
            printf("Result: %.2f\n", divide(operand1, operand2));
            break;
        case 's':
            printf("Result: %.2f\n", square_root(operand1));
            break;
        case '^':
            printf("Result: %.2f\n", power(operand1, operand2));
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }
    printf("Want to continue (y/n): ");
    char c;
    fflush(stdin);
    scanf(" %c", &c);
    if (c == 'y') {
        calculator();
    }
}

void currency() {
    float dollar, inr, rupees;
    int ch;
    do {
        printf("\n*************CURRENCY CALCULATION SECTION***************");
        printf("\n 1. Rupees -> Dollar");
        printf("\n 2. Dollar -> Rupees");
        printf("\n 3. Pound -> Rupees");
        printf("\n 4. Rupees -> Pound");
        printf("\n 5. Euro -> Rupees");
        printf("\n 6. Rupees -> Euro");
        printf("\n 7. Kuwaiti Dinar -> Rupees");
        printf("\n 8. Rupees -> Kuwaiti Dinar");
        printf("\n 9. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the currency in Rupees: ");
                scanf("%f", &rupees);
                dollar = rupees / 83.18;
                printf("The currency in dollars is: %.2f$\n", dollar);
                break;
            case 2:
                printf("Enter the currency in Dollars: ");
                scanf("%f", &rupees);
                inr = rupees * 83;
                printf("The currency in Rupees is: %.2f\n", inr);
                break;
            case 3:
                printf("Enter the currency in Pounds: ");
                scanf("%f", &rupees);
                inr = rupees * 106;
                printf("The currency in Rupees is: %.2f\n", inr);
                break;
            case 4:
                printf("Enter the currency in Rupees: ");
                scanf("%f", &rupees);
                dollar = rupees / 106;
                printf("The currency in Pounds is: %.2f$\n", dollar);
                break;
            case 5:
                printf("Enter the currency in Euros: ");
                scanf("%f", &rupees);
                inr = rupees * 91;
                printf("The currency in Rupees is: %.2f\n", inr);
                break;
            case 6:
                printf("Enter the currency in Rupees: ");
                scanf("%f", &rupees);
                dollar = rupees / 91;
                printf("The currency in Euros is: %.2f$\n", dollar);
                break;
            case 7:
                printf("Enter the currency in Kuwaiti Dinar: ");
                scanf("%f", &rupees);
                inr = rupees * 270;
                printf("The currency in Rupees is: %.2f\n", inr);
                break;
            case 8:
                printf("Enter the currency in Rupees: ");
                scanf("%f", &rupees);
                dollar = rupees / 270;
                printf("The currency in Kuwaiti Dinar is: %.2f$\n", dollar);
                break;
            case 9:
                return;
        }
        printf("Want to continue (y/n): ");
        char c;
        fflush(stdin);
        scanf(" %c", &c);
    } while (ch < 9);
}

double calculate_sine(double angle) {
    return sin(angle);
}

double calculate_cosine(double angle) {
    return cos(angle);
}

double calculate_tangent(double angle) {
    return tan(angle);
}

void ang() {
    double angle;
    char trig_function;

    printf("Enter the angle in radians: ");
    scanf("%lf", &angle);

    printf("Choose a trigonometric function (s for sine, c for cosine, t for tangent): ");
    scanf(" %c", &trig_function);

    switch (trig_function) {
        case 's':
            printf("Sine of %.2f radians: %.2f\n", angle, calculate_sine(angle));
            break;
        case 'c':
            printf("Cosine of %.2f radians: %.2f\n", angle, calculate_cosine(angle));
            break;
        case 't':
            printf("Tangent of %.2f radians: %.2f\n", angle, calculate_tangent(angle));
            break;
        default:
            printf("Invalid trigonometric function.\n");
            break;
    }
    printf("Want to continue (y/n): ");
    char c;
    fflush(stdin);
    scanf(" %c", &c);
    if (c == 'y') {
        ang();
    }
}

int and_gate(int input1, int input2) {
    return input1 && input2;
}

int or_gate(int input1, int input2) {
    return input1 || input2;
}

int not_gate(int input) {
    return !input;
}

void gates() {
    int input1, input2;
    printf("Enter the first input (0 or 1): ");
    scanf("%d", &input1);

    printf("Enter the second input (0 or 1): ");
    scanf("%d", &input2);

    printf("AND Gate Result: %d\n", and_gate(input1, input2));
    printf("OR Gate Result: %d\n", or_gate(input1, input2));
    printf("NOT Gate Result for Input 1: %d\n", not_gate(input1));
    printf("NOT Gate Result for Input 2: %d\n", not_gate(input2));

    printf("Want to continue (y/n): ");
    char c;
    fflush(stdin);
    scanf(" %c", &c);
    if (c == 'y') {
        gates();
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n*************MENU***************");
        printf("\n1. Area Calculation");
        printf("\n2. Calculator");
        printf("\n3. Currency Conversion");
        printf("\n4. Trigonometric Functions");
        printf("\n5. Logic Gates");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                area();
                break;
            case 2:
                calculator();
                break;
            case 3:
                currency();
                break;
            case 4:
                ang();
                break;
            case 5:
                gates();
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }

    return 0;
}
