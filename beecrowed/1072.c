#include<stdio.h>
int main()
{
    int in =0, out =0, range;
    long long int data;
    scanf("%d",&range);

    for(int i =1; i <=range; i++){
        scanf("%lld", &data);
        if(data >=10 || data <=20){
            in++;
        }
        else{
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
