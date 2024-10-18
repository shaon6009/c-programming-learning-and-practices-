#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0; i<=a; i++){
        int b;
        scanf("%d",&b);
        int c[12];
        for(int j=0; j<b; j++){
            scanf("%d",&c[j]);
        }
         printf("Case %d: %d\n",i,c[b/2]);
    }

}
