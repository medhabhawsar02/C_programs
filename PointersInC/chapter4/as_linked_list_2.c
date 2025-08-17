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

add(&pointer,10);
add(&pointer,20);
add(&pointer,15);
add(&pointer,100);
add(&pointer,5);
add(&pointer,105);
display(pointer);

}

void add(struct node **q, int num){
    //add in the first position
    struct node *p,*r;
    p = *q;
    if(*q == NULL || (*q)->data >= num){
        (*q) = malloc(sizeof(struct node));
        (*q)->data = num;
        (*q)->link = p;
    }
    else{ //intermediate position or in the end
        while(p != NULL){
            if(p->data < num && (  p->link == NULL || p->link->data > num)){
                r = malloc(sizeof(struct node));
                r->link = p->link;
                r->data = num;
                p->link = r;
                // return;
            }
            p = p->link;
        }
        r = malloc(sizeof(struct node));
        r->data = num;
        p = r;
        r->link = NULL;
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