#include<stdio.h>
#include<stdlib.h>
struct node *CreatLinkedList(int arr[],int size);
void reverseLinkList(struct node *head);
struct node{
    int data;
    struct node *next;
};
int main(){
    int a[] ={5,10,30,56,57,897,324,989};
    struct node *head;
    head=CreatLinkedList(a,8);
    struct node*newhead=head;
    while(head != NULL){
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
    //revers a link list
    reverseLinkList(newhead);

return 0;
}
void reverseLinkList(struct node *head){
    struct node *prev=NULL,*current=head,*next=NULL;
    while(current != NULL){
        //store the node
        next = current->next;
        //reverse the list
        current->next = prev;
        prev=current;
        current=next;
    }
    head=prev;
    while(head != NULL){
        printf("%d->",head->data);
        head=head->next;
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
