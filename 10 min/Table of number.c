#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf( "%d",&n );
    int i;
    for(i=1; i<=10; i++){
        printf("%d\n",n*i);
    }
 return 0;
}
