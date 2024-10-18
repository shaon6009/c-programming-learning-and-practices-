#include<stdio.h>
int main()
{
    int x,z,c=0,a=1;
    scanf("%d %d",&x,&z);
    while(x>=z)
    {
        scanf("%d",&z);
    }
    for(int i=x; i<z; i++)
    {
        c=c+i;
        if(c>z)
        {
           break;
        }
        else{
             a++;
        }
    }
    printf("%d\n",a);
}
