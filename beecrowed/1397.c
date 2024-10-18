#include <stdio.h>

int main() {

    int n,a,b,A=0,B=0;
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        A=0;
        B=0;
    for(int i=1; i<=n; i++){
        scanf("%d %d",&a,&b);
        if(a>b) A++;
        if(b>a) B++;
    }
    printf("%d %d\n", A,B);

    }

    return 0;
}
