#include<stdio.h>
#include<stdlib.h>

//stack 
//push on top of stack: add in the beginning
//pop from top of stack
//display
//count that gives the final count of no. of nodes in the stack

struct node{
    int data;
    struct node *link;
};

void push();
int pop();
void display();

int main(){
    struct node *top;
    top = NULL;
    push(&top,10);
    push(&top,20);
    push(&top,30);
    push(&top,40);
    // display(top);
    
    int a = pop(&top);
    printf("%d",a);
 

}

void push(struct node **q, int num){
    // struct node *temp;
    
    // if(*q == NULL){
    //     *q = malloc(sizeof(struct node));
    //     (*q)->data = num;
    //     (*q)->link = NULL;
    // }
    // else{ // if not NULL
    //     temp = *q;
    //     *q = malloc(sizeof(struct node));
    //     (*q)->data = num;
    //     (*q)->link = temp;
    // }

    struct node *s;
    s = malloc(sizeof(struct node));
    s->data=num;
    s->link = *q;
    *q = s;
}

int pop(struct node **q){
    int item;
    item = (*q)->data;
    (*q) = (*q)->link;
    return item;
}
void display(struct node *q){
    while(q != NULL){
        printf("%d",q->data);
        printf("\n");
        q=q->link;
    }
}