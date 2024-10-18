#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int fact =1;
    int i;
    for(i=1; i<=n; i++){
        fact =fact*i;
    }
    printf("Final result pf factorial is : %d",fact);
return 0;
}
