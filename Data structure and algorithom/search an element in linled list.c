#include<stdio.h>
#include<stdlib.h>
struct node *CreatLinkedList(int arr[],int size);
int searchInLinkedList(struct node *head,int value);

struct node{
    int data;
    struct node *next;
};
int main(){
    int a[] ={5,10,30,56,57,897,324,989};
    struct node *head;
    head=CreatLinkedList(a,8);
    printf("Index:%d\n",searchInLinkedList(head,324));

return 0;
}
int searchInLinkedList(struct node *head,int value){//value means the number we are gonna search for.
    int index = 1;
    while(head != NULL){
        if(head->data == value){
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}

 struct node *CreatLinkedList(int arr[],int size){
   struct node *head=NULL,*temp=NULL,*current=NULL;
   int i;
   for(i=0; i<size; i++){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data = arr[i];
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        current = temp;
    }else{
        current->next = temp;
        current=current->next;
    }
   }
   return head;
}
