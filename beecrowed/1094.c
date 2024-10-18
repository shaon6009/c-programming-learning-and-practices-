#include<stdio.h>
int main()
{
    int x,N,i,rat=0,rabbit=0,frog=0,total;
    char v;
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%c %d",&v,&x);
        if(v=='C'){rabbit+=x;}
        if(v=='R'){rat+=x;}
        if(v=='S'){frog+=x;}
    }
    total = rabbit + rat + frog;

    double rat_p = (rat*100.00)/total;
    double rabbit_p = (rabbit*100.00)/total;
    double frog_p = (frog*100.00)/total;


    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %.2lf %%\n",rabbit_p);
    printf("Percentual de ratos: %.2lf %%\n",rat_p);
    printf("Percentual de sapos: %.2lf %%\n",frog_p);


    return 0;
}
