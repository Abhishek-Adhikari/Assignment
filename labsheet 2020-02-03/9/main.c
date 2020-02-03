#include <stdio.h>

int main()
{
    int sum=0;
    int a;
    printf("give an integer\n");
    scanf("%d",&a);
    while(a>0){
        sum=sum + a%10;
        a=a/10;
    }
    printf("the sum is %d\n",sum);
    return 0;
}
