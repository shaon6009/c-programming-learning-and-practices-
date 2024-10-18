#include<stdio.h>
int main(){
    int a[]={-3,4,5,55,88,6};
    int searchitem=5;
    int i;
    //Time complexity:(It depends on how many time the loop worked)=0(n)-spelling big o of N.
    //space complexity:0(1)-big o of 1(constant  space)
    for(i=0; i<6; i++){
        if(a[i]==searchitem){
            printf("Item found at index: %d\n",i);
            return 0;
        }
    }
    printf("Item not fount.\n");

return 0;
}
//This is how linear search work
