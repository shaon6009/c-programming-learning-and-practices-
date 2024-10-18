#include<stdio.h>
#include<stdlib.h>
struct node *CreatLinkedList(int arr[],int size);
struct node{
    int data;
    struct node *next;
};
int main(){
    int a[] ={5,10,30,56,57,897,324,989};
    struct node *head;
    head=CreatLinkedList(a,8);
    while(head != NULL){
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");

return 0;
}
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
