#include<stdio.h>
int main()
{
    while(1){
        int H1,H2,M1,M2;
        scanf("%d %d %d %d", &H1,&M1,&H2,&M2);
        if(H1==0 && M1==0 && H2==0 && M2==0)
            break;
        int current=(H1*60)+M1;
        int alarm=(H2 * 60)+M2;
        if(alarm<current)
            alarm= alarm+(24*60);
        printf("%d\n", alarm-current);


    }

    return 0;
}
