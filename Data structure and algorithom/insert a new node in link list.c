#include<stdio.h>
#include<stdlib.h>
struct node *CreatLinkedList(int arr[],int size);
void InsertAtBeginning(struct node *head,int data);
void printlist(struct node *head);

struct node{
    int data;
    struct node *next;
};
int main(){
    int a[] ={5,10,30,56,57,897,324,989};
    struct node *head;
    head=CreatLinkedList(a,8);
    printlist(head);
    //if I write the code to print the result that propaget the head
    //insert at the beginning
    InsertAtBeginning(head,500);

return 0;
}
void InsertAtBeginning(struct node *head,int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;

    struct node *newHead = temp;
    struct node *curent = newHead;

    newHead = temp;

    printlist(newHead);
}
void printlist(struct node *head){
    struct node *curent = head;
    while(curent != NULL){
        printf("%d->",curent->data);
        curent=curent->next;
    }
    printf("NULL\n");
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

