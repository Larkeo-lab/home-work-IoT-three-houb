#include<stdio.h>
#include<math.h>


int main() {
    int choice;
    float radius, length, width, base, height;
    float area;

    do {
        printf("\nMenu:\n");
        printf("1. Calculate area of circle\n");
        printf("2. Calculate area of rectangle\n");
        printf("3. Calculate area of triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            /////////// houb vong mon ///////////////
                printf("Enter radius of circle: ");
                scanf("%f", &radius);
                area = 3.14 * radius * radius;
                printf("Area of circle: %.2f\n", area);
                break;

             /////////// houb 4 jae ///////////////
            case 2:
                printf("Enter length of rectangle: ");
                scanf("%f", &length);
                printf("Enter width of rectangle: ");
                scanf("%f", &width);
                area = length * width;
                printf("Area of rectangle: %.2f\n", area);
                break;

             /////////// houb 3 jae ///////////////1
            case 3:
                printf("Enter base of triangle: ");
                scanf("%f", &base);
                printf("Enter height of triangle: ");
                scanf("%f", &height);
                area = 0.5 * base * height;
                printf("Area of triangle: %.2f\n", area);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
};
//////////////hello
