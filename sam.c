#include<stdio.h>

int main()
{
    int attendance,marks,roll;
    printf("enter roll no");
    scanf("%d%d%d",&roll,&attendance,&marks);
   
    else
     printf("invalid choice");
    if(attendance<75)
     printf("not able to give exam");
    else{
        if(marks>=70 && marks<=80){
         printf("grade=A");}
        else if(marks>=60 && marks<70){
         printf("grade=B");}
        else if(marks>=50 && marks<60){
         printf("grade=C");}
        else if(marks>=40 && marks<50){
         printf("grade=D");}
        else if(marks>=30 && marks<40){    
         printf("grade=E");}
        else{
         printf("you have failed with F grade");}

    } 
    

    
    return 0;
}