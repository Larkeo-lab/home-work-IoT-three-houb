#include<stdio.h>
#include<conio.h>


///////////////// inclass room.......

 float houb4jae(float width, float length){
 	float area = width * length;
 	return area;
 }
 int main(){
	
	float w;
	printf("Enter houb4jae width : ");
	scanf("%f", &w);
	
	float l;
	printf("Enter houb4jae length: ");
	scanf("%f", &l);
	
	printf("area of houb4jae %.f\n",houb4jae(w,l));

	getch();
	return 0;
}

// void hello(){
//     printf("Hellow\n");
//     printf("Hellow\n");
// }
// int main(){
//     hello();
//     hello();
//     hello();
//     hello();
//     hello();
  
// }

//////////////////lot   houb jatulut  kang x kang/////////

// float square(){
//     float area, side;

//     printf("Enter value for square: ");
//     scanf("%f",&side);

//     area= side*side;
//     printf("%.0f\n",area);
// }
// int main(){
//     square();
//     return 0;
// }

///////////////////// iot  scanf u loum
// float square(){
//     float area, side;

//     area= side*side;
//     printf("%.0f\n",area);
// }
// int main(){
//     float side;
//      printf("Enter value for square: ");
//     scanf("%f",&side);
//     square(side);
//     return 0;
// }