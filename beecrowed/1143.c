#include<stdio.h>
int main()
{
    int a,l=1,j=2,k=3;
    scanf("%d",&a);

    for(int i=1; i<=a; i++)
    {
         l=i;
         j=i*i;
         k=i*i*i;
         printf("%d %d %d\n", l,j,k);
    }

}
