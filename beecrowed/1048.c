#include<stdio.h>
int main (){
    float s;
    scanf("%f", &s);
    if(s>0 && s<=400)
    {
        printf("Navo salario : %.2f\nReajuste ganho: %.2f\nEm percentual 15%", (s+(s*.15)), (s*.15));
    }else if(s<=800)
    {
        printf("Navo salario : %.2f\nReajuste ganho: %.2f\nEm percentual 12%", (s+(s*.12)), (s*.12));
    }else if(s<=1200)
    {
        printf("Navo salario : %.2f\nReajuste ganho: %.2f\nEm percentual 10%", (s+(s*.10)), (s*.10));
    }else if(s<=2000)
    {
        printf("Navo salario : %.2f\nReajuste ganho: %.2f\nEm percentual 7%", (s+(s*.07)), (s*.07));
    }else if(s>2000)
    {
        printf("Navo salario : %.2f\nReajuste ganho: %.2f\nEm percentual 4%", (s+(s*.04)), (s*.04));
    }


return 0;
}

