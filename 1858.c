#include<stdio.h>
int main()
{
    int n,m,l;
    while(scanf("%d",&n) != EOF)
    {
        int k=0;
        l=20;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&m);
            if(m<l)
            {
                l=m;
                k=i+1;
            }
        }
        printf("%d\n",k);
    }
}
