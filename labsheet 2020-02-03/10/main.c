#include <stdio.h>
#include <math.h>
int main()
{
    double dist=0;
    double x1=27.7172;
    double x2=85.3240;
    double y1=28.2096;
    double y2=83.9856;
    dist=sqrt(pow((y1-x1),2)+pow((y2-x2),2));
      printf("the distance between pokhara and ktm is %lf",dist);

    return 0;
}
