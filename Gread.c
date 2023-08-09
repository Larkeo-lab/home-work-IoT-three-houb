#include<stdio.h>
#include<math.h>


void main(){

    int score ;
    char great;
    
    printf("Enter your score:");
    scanf("%d",&score);
  
    if(score >= 90){
        great ='A';    
    }else if(score >= 80){
        great= 'B';
    }
    else if(score >= 70){
        great ='C';
    }
    else if(score >= 60){
        great ='D';
    }
    else if(score >= 50){
        great ='F';
    }
    else{
        great ='i';
    };
    printf("Your grear is: %c",great);
    return 0;
}
