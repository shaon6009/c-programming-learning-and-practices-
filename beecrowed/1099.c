#include<stdio.h>
int main()
{
    int x,y,N,sum=0,i,j,temp;
    scanf("%d",&N);
    for(i=0; i<=N; i++){
        scanf("%d %d", &x,&y);
        if(x>y){temp=x; x=y; y=temp;}
        if(x%2==0){x++;}
        else{x+=2;}
        for(j=x; j<y; j+=2){
            sum += j;
        }
        printf("%d\n",sum);
        sum = 0;
    }

    return 0;
}
