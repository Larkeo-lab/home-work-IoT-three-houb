#include<stdio.h>


 int main(){
    char Heart;

    printf("Do you love me (y or n)");
    scanf("%c", &Heart);
    switch (Heart)
    {
    case 'n':
        printf("Broken heart\n");
        break;
    case 'y':
        printf("Yessssss\n");
        break;
    
    default:
        printf("I'll whait for an answer\n");
       
    }
    getch();
    return 0;
 }

