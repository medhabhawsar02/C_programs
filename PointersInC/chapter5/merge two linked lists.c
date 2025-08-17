#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void add();
void merge();
void display();

int main(){

    struct node *first;
    struct node *second;
    struct node *third;
    first = second = NULL;
    add(&first,1);
    add(&first,2);
    add(&first,3);
    add(&first,4);
    add(&first,5);
    add(&first,6);
    add(&first,7);
    add(&second,4);
    add(&second,2);
    add(&second,6);
    add(&second,8);
    add(&second,9);
    add(&second,3);
    add(&second,4);

    merge(first,second,&third);

    display(third);

}

void add(struct node **p,int num){
    struct node *q;
    if(*p == NULL){
        (*p) = malloc(sizeof(struct node));
        (*p)->data = num;
        (*p)->link = NULL;
    }
    else{
        q = *p;
        while(q->link != NULL){
            q = q->link;
        }
        q->link = malloc(sizeof(struct node));
        q= q->link;
        q->data = num;
        q->link = NULL;
    }
}

void display(struct node *q){
    while(q != NULL){
        printf("%d",q->data);
        printf("\n");
        q=q->link;
    }
}

void merge(struct node *first, struct node *second, struct node **merged){
    struct node *p = first;
    struct node *q = second;
    *merged = p;

    while(q != NULL){
        struct node *temp = p;
        while(temp != NULL){
            if(temp->data == q->data){
                break;
            }
            else{
                temp = temp->link;
            }
        }
        //two ways of getting out of while loop:
        //1. when temp reaches NULL--> merge changes then q increments
        //2. when "break" takes place --> only q increments
        
        if(temp == NULL){ // extra step when temp is NULL
            struct node *append = malloc(sizeof(struct node));
            append->data = q->data;
            append->link = *merged;
            *merged = append;
        }
        q=q->link;

    }

}












// while(q != NULL){
//         // while(p != NULL){
//             struct node *temp = p;
//             while(temp->link != NULL){
//                 if(temp->data == q->data){
//                     q = q->link; 
//                     continue; // go at the top                   
//                 }            
//             temp = temp->link;
//             }  
//             if(temp->data == q->data){
//                 q = q->link; 
//                 break;
//             }
//             else{
//                 temp->link = malloc(sizeof(struct node));
//                 temp->data = q->data;                
//             }
       
//     // }
// q = q->link;
//    } 


// // return *merged;
    