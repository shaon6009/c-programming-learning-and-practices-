#include<stdio.h>
int main()
{

    int i,count=0;
    float n,x[3],avg;
    while(1){
            while(1){
        scanf("%f",&n);
        if(n>0 && n<10){
            x[count]=n;
            count++;
        }
        else{
            printf("nota invalida\n");
        }
        if(count>1) break;
    }
    avg=(x[0]+ x[1])/2.0;
    printf("media = %.2f\n",avg);
    count=0;
    while(1){
        scanf("%d",&i);
        printf("novo calculo (1-sim 2-nao)\n");
        if(i==1 ||i==2)break;
    }
    if(i==1)continue;
    else break;
    }
    return 0;
}
