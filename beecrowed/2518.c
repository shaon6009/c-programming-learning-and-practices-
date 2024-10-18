#include<stdio.h>
#include<math.h>
int main()
{
    int n,h,c,l,m;
    long long int o;
    scanf("%d",&n);
    scanf("%d %d %d",&h,&c,&l);
    m=sqrt((pow(h,2))+(pow(c,2)));
    //p=sqrt(m);
    o=setprecision(((n*m)*l)/10000);
    //q=o*l;
    //r=q/(10000);


    printf("%llf",o);


}
