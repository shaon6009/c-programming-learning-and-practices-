#include<stdio.h>
void sum(int n);
int main()
{
     printf("sum is : %d", sum(5));
return 0;
}
int sum(int n){
    if (n==1){
            return 1;
}
int sum2=sum(n-1);
int sum1=sum2+n;
return sum1;
}
