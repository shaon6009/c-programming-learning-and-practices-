#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5

int ourqueue[CAPACITY];
int front = 0,rear = -1,totalitem = 0;
bool isfull(){
    if(totalitem == CAPACITY){
        return true;
    }
    return false;
}
bool isempty(){
    if(totalitem == 0){
        return true;
    }
    return false;
}
void enqueue(int item){
    if(isfull()){
        printf("Sorry the queue is full\n");
        return;
    }
    rear =(rear + 1) % CAPACITY;
    ourqueue[rear] = item;
    totalitem++;
}
int dequeue(){
    if(isempty()){
        printf("Sorry the queue is empty.\n");
        return-1;//it means there is no number
    }
    int frontitem = ourqueue[front];
    front = (front +1) % CAPACITY;
    totalitem--;
    return frontitem;
}

void printqueue(){
    int i;
    printf("Queue: ");
    for(i = 0; i < CAPACITY; i++){
        printf("%d\t \t",ourqueue[i]);
    }
    printf("\n");
}

int main(){

    enqueue(10);
    dequeue();
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();///remove this and the result will be 10 20 30 40 50.
    enqueue(60);

    printqueue();

return 0;
}
