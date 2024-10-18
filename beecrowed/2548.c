#include <stdio.h>

int main() {

    int n=0,m=0, i=0, result=0;
    while(scanf("%d %d", &n, &m) != EOF){

    for(i=1; i<=n; i++){
        int value;
        scanf("%d",&value);

        if(i > (n-m)){
            result += value;
        }
    }
    printf("%d\n",result);

    }
    return 0;
}
