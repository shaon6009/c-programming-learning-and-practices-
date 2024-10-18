#include<stdio.h>
int main()
{
    int i,n,j;
    int arr[20];

    for(i=0;i<=19;i++){
            scanf("%d",&arr[i]);
    }

    for(j=0;j<=19;j++){
        n=arr[j];
        arr[i]=arr[19-j];
        arr[19-j]=n;
        printf("N[%d] = %d\n",j,arr[i]);
    }

    return 0;

}
