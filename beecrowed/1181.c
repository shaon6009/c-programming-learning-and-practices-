#include<stdio.h>
int main()
{
    int k,l,m;
    double n[12] [12],sum=0.0;
    char x[2];
    scanf("%d %s",&m,&x);

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf",&n[i][j]);
        }
    }
    for(int i=0; i<12; i++){
        sum=sum+n[m][i];
    }
    if(x[0] == 'S')
         printf("%.1lf\n", sum);
    else if(x[0] == 'M')
         printf("%.1lf\n", sum/12.0);
    return 0;
}
