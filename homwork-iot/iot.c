#include<stdio.h>


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
            /////////// houb vong mon ///////////////
                printf("Enter radius of circle: ");
                scanf("%f", &radius);
                area = 3.14 * radius * radius;
                printf("Area of circle: %.2f\n", area);
                break;

             /////////// houb 4 jae ///////////////
            case 'B':
                printf("Enter length of rectangle: ");
                scanf("%f", &length);
                printf("Enter width of rectangle: ");
                scanf("%f", &width);
                area = length * width;
                printf("Area of rectangle: %.2f\n", area);
                break;

             /////////// houb 3 jae ///////////////
            case 'C':
                printf("Enter base of triangle: ");
                scanf("%f", &base);
                printf("Enter height of triangle: ");
                scanf("%f", &height);
                area = 0.5 * base * height;
                printf("Area of triangle: %.2f\n", area);
                break;
            case 'D':
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 'D');

    return 0;
}

// int main(){
//     char choose;
//     do{
//         printf("Enter ( A or B or C)");
//         printf("A\n");
//         printf("B\n");
//         printf("C\n");
//         scanf("%c",&choose);

//         switch (choose){
//             //////////////////// houb 4 jae sark//////////////////////
//          case 'A':

//              float houb4jae(float width, float length){
//  	                 float area = width * length;
//  	                 return area;
//             }        
//         case 'B':           
//               float circle(float radius){
// 	                 float area;
// 	                  area=3.14*radius*radius;
// 	                 return area;
//             };
//          case 'C':

//                float square(){
//                      float area, side;

//                      printf("Enter value for square: ");
//                      scanf("%f",&side);

//                      area= side*side;
//                      printf("%.0f\n",area);
//             }
           
//      /////////// houb vongmon/////////////   

//      ////////// houb kang moo////////            

// 	                getch();
// 	                return 0;
//             }
//             break;
//             //////////////////// houb vongmon/////////////////////////
        
          
//             int main(){
// 	                 float r;
// 	                printf("Enter circle radius: ");
// 	                scanf("%f", &r);
// 	                printf("area of circle = %.2f\n", circle(r));
	
// 	                getch();
//                     return 0;
//             }                     
//         break;
//       ///////////////////////// houb kang moo/////////////
       

            
//                 int main(){
//                      square();
//                       return 0;
//                 };    
//         break;
//         default:
//             break;
//         }

//     } while (choose != 3);

//      int main(){
	
//     ////////// houb 4 jae sark//////////
           
// 	                 float w;
// 	                 printf("Enter houb4jae width : ");
// 	                 scanf("%f", &w);	
// 	                float l;
// 	                printf("Enter houb4jae length: ");
// 	                scanf("%f", &l);	
// 	                printf("area of houb4jae %.f\n",houb4jae(w,l));
    
// }