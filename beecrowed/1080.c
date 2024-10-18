#include<stdio.h>
int main()
{
    int n,max=0,position;
    for(int i=1; i<=100; i++){
        scanf("%d",&n);
        if(n>max){
            max=n;
            position=i;
        }
    }
    printf("%d\n%d\n",max,position);

    return 0;
}
