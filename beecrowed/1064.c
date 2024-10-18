#include<stdio.h>
int main(){
    float x,sum,average;
    int count=0,i;
    for(i=1; i<=6; i++)
    {
        scanf("%f", &x);
        if(x>0){
            count++;
            sum = sum + x;
        }
    }

    average=sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",average);

return 0;
}
