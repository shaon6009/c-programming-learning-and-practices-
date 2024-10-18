#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int x;
    for(int i=0; i< n; i++){
        scanf("%d",&x);
        k=0;
    if(x<4) printf("%d eh primo\n",x);
    else{
        for(int j=2; j< x; j++)
        {
           if(x%j==0){
             k=1;
             break;
           }
           else{
            k=2;
           }
        }
    }
        if(k==1) printf("%d nao eh primo\n",x);
        else if(k==2) printf("%d eh primo\n",x);

        }
}
