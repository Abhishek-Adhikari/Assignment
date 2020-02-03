#include <stdio.h>
#include <limits.h>
int main()
{
   int number,min=INT_MAX,max=0,sum=0,positive=0;
   do {
       printf("enter a number:\n");
       scanf("%d",&number);

       if (number>0){
           if (number<min){
               min=number;
           }
           if (number>max){
               max=number;
           }
           sum+=number;
           positive++;
       }
    }while(number>0);
   printf("the maximum value is %d\n",max);
   printf("the minimum value is %d\n",min);
   printf("the average value is %lf\n",(double)sum/positive);

   return 0;
}
