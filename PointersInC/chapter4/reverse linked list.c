#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void add();
void display();
void reverse();

int main(){
    struct node *pointer;
    pointer = NULL;

    add(&pointer,1);
    add(&pointer,9);
    add(&pointer,4);
    add(&pointer,8);
    add(&pointer,10);

    display(pointer);

    reverse(&pointer);
    display(pointer);
}

void add(struct node **ptr, int num){
    //add at end
    struct node *p;
    p = *ptr;
    if(*ptr == NULL){
        *ptr = malloc(sizeof(struct node));
        (*ptr)->data = num;
        (*ptr)->link = NULL;  
    }
    else{
        while(p->link != NULL){
            p = p->link;
        }
        p->link = malloc(sizeof(struct node));
        p = p->link;
        p ->data = num;
        p->link = NULL;
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

void reverse(struct node **ptr){ 

    struct node *curr,  *pointer, *next;
    next = *ptr;
    pointer = NULL;

    while(next != NULL){
        curr = pointer;
        pointer = next;
        next = next->link ;
        pointer->link = curr;
    }
    *ptr = pointer;
}



 // struct node *p = *ptr;
    // struct node *q;
    // struct node *temp;
    
    // q = p->link;
    // temp = q-t555>link;
    // p->link = NULL; //1st element is last now
    // while(temp != NULL){        
    //     q->link = p;
    //     p = q;
    //     q = temp;
    //     temp = q->link;
    // }
    // q->link = p;
    // *ptr = q;