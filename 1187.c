#include<stdio.h>
int main()
{
    int a=1,b=10;
    double n[12] [12],sum=0.0;
    char x[2];
    scanf("%s",&x);

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf",&n[i][j]);
        }
    }
    for(int i=0; i<5; i++){
            for(int j=a; j<=b; j++){
                sum=sum+n[i][j];
            }
            a++;
            b--;
    }
    if(x[0] == 'S')
         printf("%.1lf\n", sum);
    else if(x[0] == 'M')
         printf("%.1lf\n", sum/30.0);
    return 0;
}

