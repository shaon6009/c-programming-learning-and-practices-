#include<stdio.h>
int main()
{
    int a,k;
    scanf("%d",&a);
    long long int n[60];
    n[0]=0;
    n[1]=1;
    for(int i=2; i<61; i++){
        n[i]=n[i-1]+n[i-2];
    }
    for(int j=0; j<a; j++){
        scanf("%d",&k);
        printf("Fib(%d) = %lld\n",k,n[k]);
    }
}
