#include<stdio.h>
int main()
{
    int a=11;
    double n[12] [12],sum=0.0;
    char x[2];
    scanf("%s",&x);

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf",&n[i][j]);
        }
    }
    for(int i=0; i<12; i++){
            for(int j=0; j<a; j++){
                sum=sum+n[i][j];
            }
            a--;
    }
    if(x[0] == 'S')
         printf("%.1lf\n", sum);
    else if(x[0] == 'M')
         printf("%.1lf\n", sum/66.0);
    return 0;
}
