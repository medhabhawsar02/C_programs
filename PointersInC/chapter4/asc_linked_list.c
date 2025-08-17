#include<stdio.h>
#include<stdlib.h>

void add();
void display();
struct node{
    int data;
    struct node *link;
};

int main(){
struct node *pointer;
pointer = NULL;

add(&pointer,20);
add(&pointer,15);
add(&pointer,100);
display(pointer);
add(&pointer,95);
display(pointer);
add(&pointer,18);
add(&pointer,85);
add(&pointer,5);
display(pointer);
}

void add(struct node **q, int num){
    struct node *p, *old, *temp;
    p = *q;
    if(*q == NULL){
        *q = malloc(sizeof(struct node));
        //  p = *q;
         (*q)->data=num;
         (*q)->link=NULL;

    }
    else{
         while(p != NULL){
            if(num <= p->data){
                if((p == *q)){ //addition after 1st element
                p = malloc(sizeof(struct node));
                p->data=num;
                p->link=*q;
                *q=p;
                return;
                }
                else{
                temp = p;
                p = malloc(sizeof(struct node));
                p->data = num;
                p->link = temp;
                old->link = p;
                return;
                }
            }
            else{
                old = p;
                p = p->link;
            }
         }
         temp = malloc(sizeof(struct node));
         temp->data = num;
         temp->link = NULL;
         old->link = temp;
         p = temp;

    }
}

void display(struct node *q){
    printf("\n");
    while(q != NULL){           //checking if the list is empty or not
        printf("%d\n",q->data);  // if head contains the address
        q = q->link;
    }
    return 0;
}