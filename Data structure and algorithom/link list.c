#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;//it means it will carry  address of another node.

};
int main(){
    struct node *a = NULL;//a is head hear.
    struct node *b = NULL;
    struct node *c = NULL;
    a = (struct node*)malloc(sizeof(struct node));//malloc gives us void type address we have to convert it struct node type thats why we use struct node poihter
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    a -> data = 10;
    b -> data = 20;
    c -> data = 30;
    a -> next = b;
    b -> next = c;
    c -> next = NULL;
    while( a != NULL){
        printf("%d ->", a->data);
        a = a-> next;
    }

return 0;
}
