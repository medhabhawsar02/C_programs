#include<stdio.h>
#include<stdlib.h>

//queue first come first serve
//push same add in beginning
//pop gets 1st node that was added not top of stack

//push pointer points at rear end
//pop pointer points at front end

struct node{
    int data;
    struct node *link;
};

void push();
int pop();

int main(){
    struct node *top;
    top = NULL;
    push(&top,10);
    push(&top,20);
    push(&top,30);
    push(&top,40);
    push(&top,50);

    int a = pop(top);
    printf("%d",a);
}

void push(struct node **q, int num){
    struct node *s;
    s = malloc(sizeof(struct node));
    s->data = num;
    s->link = *q;
    *q = s;
}

int pop(struct node *q){
    int item;
    while((q) != NULL){
        if((q)->link == NULL){
            item = (q)->data;
            return item;
        }
        q = q->link;
    }
    
}