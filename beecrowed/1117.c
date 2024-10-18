#include<stdio.h>
int main()
{

    int i,count=0;
    float n,x[3],avg;
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

    return 0;
}
