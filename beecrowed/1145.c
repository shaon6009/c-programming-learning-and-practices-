#include<stdio.h>
int main()
{
    int a,b,c,d=1,e;
    scanf("%d %d", &a,&b);
    c=b/a;
    e=a;
    for(int i=0; i<c; i++)
    {
        printf("%d", d);
        for(int j=d+1; j<=e; j++)
        {
            printf(" %d",j);
        }
        printf("\n");
        d +=a;
        e +=a;

    }
}
