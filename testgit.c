#include <stdio.h>
main(){
   float salary,a;
   scanf("%f",&salary);
   if (salary < 0){
   	  printf("Error: Salary must be greater or equal to 0");
   }
   else{
   	   if(salary<=300000){
   	     	a = salary*0.05;
   	   }
       else{
   		    a = 15000+((salary-300000)*0.1);
   	   }
   	   printf("%.2f",a);
   }
}