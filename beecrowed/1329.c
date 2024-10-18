#include <stdio.h>

int main() {

    int n,i,marry_point=0,jhon_point=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        int value;
    scanf("%d",&value);

    if(value==0) marry_point+=1;
    else jhon_point+=1;
    }
    printf("Mary won %d times and John won %d times",marry_point,jhon_point);

    return 0;
}
