//need to fix the xode
#include<stdio.h>
#include<stdlib.h>
struct node *CreatLinkedList(int arr[],int size);
void print(struct node *head);
struct node *delet(struct node *head,int data);

struct node{
    int data;
    struct node *next;
};
int main(){
    int a[] ={5,10,30,56,57,897,324,989};
    struct node *head=NULL;
    head=CreatLinkedList(a,8);
    print(head);

    struct node *newHead=delet(head,30);
    print(newHead);
return 0;
}

struct node *delet(struct node *head,int data){
    struct node *dummmyHead=(struct node*)malloc(sizeof(struct node));
    dummmyHead->next=head;
    struct node *temp=dummmyHead;
    while(temp->next !=NULL){
        if(temp->next->data==data){//delete logic
            temp->next=temp->next->next;
        }
        temp=temp->next;
    }

    return dummmyHead->next;
};

 struct node *CreatLinkedList(int arr[],int size){
   struct node *head=NULL,*temp=NULL,*current=NULL;//This 3 are node type variable
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
void print(struct node *head){
    struct node *temp=head;
    while(head != NULL){
        printf("%d->",head->data);
        temp=temp->next;
    }
    printf("NULL\n");

}

