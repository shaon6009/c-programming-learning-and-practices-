#include<stdio.h>
int main()
{
    int a,n[1000];
    scanf("%d",&a);
    n[0]=0;
    n[1]=1;
    for(int i=2; i<a; i++)
    {
        n[i] = n[i-1] + n[i-2];
    }
    printf("0");
    for(int i=1; i<a; i++){
        printf(" %d",n[i]);
    }
    printf("\n");
}
