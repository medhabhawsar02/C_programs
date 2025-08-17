#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *link;
};
void append();
void display();
void addafter();
void addatbeg();
int count();
void delete();
int main(){
    struct node *ptr;
    ptr = NULL;
    append(&ptr,10);
    append(&ptr,20);
    append(&ptr,30);
    addatbeg(&ptr,5);
    addatbeg(&ptr,20);
    addafter(ptr,3,15);
    display(ptr);

    delete(&ptr,20);
    display(ptr);
    printf("\n%d",count(ptr));
}

void append(struct node **q, int num){ //we need to manipulate value of starting addr
    struct node *p;                     // so pointer to address is taken
    p = *q;
    if(*q == NULL){
        *q = (struct node*)malloc(sizeof(struct node));
        p = *q;
        p ->data = num;     //manipulating the values in the node
        p ->link = NULL;    //so pointer to node is used
    }
    else{
        while((p->link) != NULL){       //segmentation fault will occur if 
            p = p->link;                //p is not given proper address
        }
        
        p->link = malloc(sizeof(struct node));
        p = p->link;
        p->data = num;
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

void addatbeg(struct node **q, int num){
    struct node *p;   
    p = malloc(sizeof(struct node));
    p->data=num;
    p->link=*q;
    *q=p;
}

// void addafter(struct node **q, int num){
//     struct node *p;
//     p = *q;
//     while(p->link != NULL){
//         p = p->link;
//     }
//     p->link = malloc(sizeof(struct node));
//     p = p->link;
//     p->data = num;
//     p->link = NULL;

// }

void addafter(struct node *q,int loc, int num){
    struct node *p;

    for(int i=0; i<loc-1; i++){
        if(q == NULL){
            printf("not enough elements");
        }  
        q = q->link;             
    }

    p = malloc(sizeof(struct node));
    p->link = q->link;
    p->data = num;
    q->link = p;
}

int count(struct node *q){
    int c=0;
    while(q != NULL){
        q = q->link;
        c++;
    }
    return c;
}

void delete(struct node **q, int num){
    struct node *old, *p, *temp;
    p = *q;
    int found =0;
    while(p != NULL){
        if(p->data == num){
            found = 1;
            if(p == *q){        //data at the start of list
                *q = p->link;
                temp = p->link; //deletes all the nodes which have this data
                free(p);
                p = temp;
                continue;
            }
            else{
                old->link = p->link;
                temp = p->link;
                free(p);
                p = temp;
                continue;
            }
        }
        else{
            old = p;
            p = p->link;
        }
    }
    if(found ==0)
    printf("\ndata not found\n");
    return;
}