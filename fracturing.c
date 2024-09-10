#include <stdio.h>
#include <math.h>
#define pi 3.14149

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

double calculateDistance() {
    
    //declares local variables
    double x1, x2, y1, y2;

    //asks for user input
    printf("\n");
    printf("Enter first x-coordinate: ");
    scanf("%lf", &x1);

    printf("Enter first y-coordinate: ");
    scanf("%lf", &y1);

    printf("Enter second x-coordinate: ");
    scanf("%lf", &x2);

    printf("Enter second y-coordinate: ");
    scanf("%lf", &y2);

    //repeats points back
    printf("Point #1 entered- x1 = %.2lf, y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered- x2 = %.2lf, y2 = %.2lf\n", x2, y2);


    //prints distance
    double distance = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
    printf("The distance between the two points is: %.2lf.", distance);

    return distance;
}

double calculatePerimeter() {

    //declares local variables
    double distance = calculateDistance();
    double perimeter = pi * distance;

    //prints perimeter
    printf("\n");
    printf("The perimeter of the city encompassed by your request is %.2lf.", perimeter);

    return 3;

}

double calculateArea () {

    //declares local variables
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = pi * pow(radius, 2);
    
    //prints area
    printf("\n");
    printf("The area of the city encompassed by your request is %.2lf.", area);

    return 2;
}   

double calculateWidth() {

    //declares local variables
    double x1, x2;

    // asks for user input
    printf("\n");
    printf("Enter first x-coordinate:");
    scanf("%lf", &x1);

    printf("Enter second x-coordinate:");
    scanf("%lf", &x2);

    //repeats points back
    printf("Point #1 entered- x1 = %.2lf\n", x1);
    printf("Point #2 entered- x2 = %.2lf\n", x2);

    //calculates and prints width
    double width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return 3;

}

double calculateHeight() {

    //declares local variables
    double y1, y2;

    // asks for user input
    printf("Enter first y-coordinate:");
    scanf("%lf", &y2);

    printf("Enter second y-coordinate:");
    scanf("%lf", &y2);

    //repeats points back
    printf("Point #1 entered- y1 = %.2lf\n", y1);
    printf("Point #2 entered- y2 = %.2lf\n", y2);

    //calculates and prints height
    double height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is %.2lf\n", height);

    return 2;
}