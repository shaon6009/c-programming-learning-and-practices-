#include<stdio.h>

int main()
{
    double n;
    scanf("%lf", &n);
    if(0 > n >100){
        printf("Fora de intervalo\n");
    }else if(0 <= n <= 25){
    printf("Intervalo [0,25]");
    }else if(25 < n <= 50){
    printf("Intervalo [25,50]");
    }

    return 0;
}
