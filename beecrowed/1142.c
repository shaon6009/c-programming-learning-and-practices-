#include<stdio.h>
int main()
{
    int n,j=1,k=2,l=3;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("%d %d %d PUM\n", j, k, l);
        j+=4;
        k+=4;
        l+=4;
    }
}
