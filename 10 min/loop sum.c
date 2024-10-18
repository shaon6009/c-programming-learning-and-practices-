#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of : ");
    scanf("%d",&x);

    int sum=0;
    for(int i=1; i<=x; i++){
        sum=sum+i;
        printf("Values are: %d\n", i);
    }
    printf("value of sum %d", sum);
    return 0;

}
