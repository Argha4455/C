#include<stdio.h>
#include<conio.h>
   void main(){
       char quite;
       int a,i;
       float b,c;
       for(i=1;i<=1000000;i++){
   printf("\nUNIT CONVERTOR\n1 for Kilometer to Miles\n2 for Inches to Foot\n3 for Centimeter to Inches\n4 for Pound to Kilogram\n5 for Inches to Meter\nEnter Your Choice:");
   scanf("%d",&a);
   printf("Enter the value:");
   scanf("%f",&b);
   switch (a){
   case 1:{
      c=b*0.621;
      break;}
   case 2 :{
   c=b*0.0833;
   break;}
   case 3:{
   c=b*0.394;
   break;}
   case 4:{
   c=b*0.4536;
   break;}
   case 5:{
   c=b*0.0254;
   break;}
   default :
    printf("MATH ERROR");
    break;
   }
     printf("\nThe result is:%f",c);
    printf("\nQ for quite");
    scanf("%c",&quite);
     scanf("%c",&quite);
    if(quite=='q'){
        break;
    }
  }}
