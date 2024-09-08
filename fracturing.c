// el003259
// collaboration log: used chatgpt to help with lines 28-33
#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput(const char *prompt);

int main(int argc, char **argv) {
    // Calling the required functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

// Function to calculate the distance between two points (diameter)
double calculateDistance() {
    double x1 = askForUserInput("Enter x1: ");
    double y1 = askForUserInput("Enter y1: ");
    double x2 = askForUserInput("Enter x2: ");
    double y2 = askForUserInput("Enter y2: ");

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// Function to calculate the perimeter of the circle (circumference)
double calculatePerimeter() {
    double diameter = calculateDistance();
    double perimeter = PI * diameter;

    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 3.0; // Example difficulty rating
}

// Function to calculate the area of the circle
double calculateArea() {
    double diameter = calculateDistance();
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);

    printf("The area of the city encompassed by your request is %.2f\n", area);

    return 2.0; // Example difficulty rating
}

// Function to calculate the width (same as diameter here for a circle)
double calculateWidth() {
    double width = calculateDistance();

    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 1.0; // Example difficulty rating
}

// Function to calculate the height (same as diameter here for a circle)
double calculateHeight() {
    double height = calculateDistance();

    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 1.0; // Example difficulty rating
}

// Helper function to get user input
double askForUserInput(const char *prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}
