#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,d;
    scanf("%d %d",&a,&b);
    double c=pow(a,3);
    d=((4/3)*(3.1415*c));
    int e=b/d;
    printf("%d",e);

}
