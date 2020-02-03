#include <stdio.h>
#include <math.h>
int main()
{
    int number,digits=0,num2,sum=0;
    printf("give a number:\n");
    scanf("%d",&number);
    num2=number;
    do{
        num2/=10;
        digits++;
    }while(num2>0);
    num2=number;
    while (number>0) {
        sum=sum+pow(number%10,digits);
        number/=10;
    }
    if(num2==sum){
        printf("this number is armstrong\n");
    }else {
        printf("this is not an armstrong\n");
}
    return 0;
}
