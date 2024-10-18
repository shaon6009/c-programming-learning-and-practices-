#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=7; i++){
        if (i==5){
            break;
        }
        printf("%d\n", i);
    }
    printf("end");

return 0;
}
