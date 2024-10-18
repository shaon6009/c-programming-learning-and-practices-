#include<stdio.h>
#include<math.h>

float squreArea(float side);
float circleArea(float rad);
float rectangkleArea(float a, float b);

int main()
{
     float a=10.0;
     float b=5.0;
     printf("Area ia: %f", rectangkleArea(a,b) );

return 0;
}
float squreArea(float side){
return side*side;
}
float circleArea(float rad){
return 3.14 * rad * rad;
}
float rectangkleArea(float a,float b){
return a*b;
}
