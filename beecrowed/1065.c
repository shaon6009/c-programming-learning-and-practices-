#include<stdio.h>
int main(){
   int i, count=0, num;
   for(i=1; i<=5; i++){
    scanf("%d",&num);
    if(num%2==0){
        count++;
    }
   }
   printf("%d valores pares\n", count);

return 0;
}
