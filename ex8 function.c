#include<stdio.h>
#include<conio.h>

float circle(float radius){
	float area;
	area=3.14*radius*radius;
	return area;
}
 float rectangle(float width, float length){
 	float area = width * length;
 	return area;
 }
 
int main(){
	float r;
	printf("Enter circle radius: ");
	scanf("%f", &r);
	printf("area of circle = %.2f\n", circle(r));
	
	printf("\n\n\n\n\n\n");
	float w;
	printf("Enter rectangle width= : ");
	scanf("%f", &w);
	
	float l;
	printf("Enter rectanle length: ");
	scanf("%f", &l);
	
	printf("area of rectangle %.2f\n",rectangle(w,l));
	
	
	
	
	getch();
	return 0;
}