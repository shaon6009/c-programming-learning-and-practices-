#include<stdio.h>
int main()
{
    int x,y,sum,temp;
    while(1){
        scanf("%d %d",&x,&y);
        if(x<=0)break;
        if(y<=0)break;
        if(x>y){
            temp=x;
            x=y;
            y=temp;
        }
        sum=0;
        for(int i=x; i<=y; i++){
            printf("%d\t",i);
            sum=sum+i;
        }
        printf("sum=%d\n",sum);
    }
    return 0;
}
