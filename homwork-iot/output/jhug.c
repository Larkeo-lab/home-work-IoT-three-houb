#include <stdio.h>

int main() {
    int choice;
    float radius, length, width, base, height;
    float area;

    do {
        printf("\nMenu:\n");
        printf("A. Calculate area of circle\n");
        printf("B. Calculate area of rectangle\n");
        printf("C. Calculate area of triangle\n");
        printf("D. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 'A':
            case 'a':
                printf("Enter radius of circle: ");
                scanf("%f", &radius);
                area = 3.14 * radius * radius;
                printf("Area of circle: %.2f\n", area);
                break;

            case 'B':
            case 'b':
                printf("Enter length of rectangle: ");
                scanf("%f", &length);
                printf("Enter width of rectangle: ");
                scanf("%f", &width);
                area = length * width;
                printf("Area of rectangle: %.2f\n", area);
                break;

            case 'C':
            case 'c':
                printf("Enter base of triangle: ");
                scanf("%f", &base);
                printf("Enter height of triangle: ");
                scanf("%f", &height);
                area = 0.5 * base * height;
                printf("Area of triangle: %.2f\n", area);
                break;

            case 'D':
            case 'd':
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 'D' && choice != 'd');
    
    return 0;
}