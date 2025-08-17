#include<stdio.h>
#include<stdlib.h>


//insert binart search tree
//preorder traversal data left right
//inorder traversal left data right
//postorder traversal left right data
//20 17 10 23 8 22 9 5 6

void insert();
void preorder();
void postorder();
void inorder();
void delete();
void search();


struct treenode{
    struct treenode *leftchild;
    int data;
    struct treenode *rightchild;
};

int main(){
    struct treenode *ptr = NULL;
    int arr[] = {20,17,10, 23, 8, 22, 9, 5, 6};
    int i;

    struct treenode *key = NULL;
    struct treenode *parent = NULL;
    int found;
    
    for(i=0; arr[i] != '\0'; i++){
        insert(&ptr,arr[i]);
    }
    printf("\n");
    inorder(ptr);
     
    search(ptr,&key,&parent,10,&found);

    delete(ptr,10);
    printf("\n");
    inorder(ptr);

}

void insert(struct treenode **p,int num){
    if(*p == NULL){
        (*p) = malloc(sizeof(struct treenode));

        (*p)->data=num;
        (*p)->leftchild = NULL;
        (*p)->rightchild = NULL;
    }
    else{
        //go to left or right branch
        if(num < (*p)->data){
            insert(&((*p)->leftchild),num);
        }
        else{
            insert(&((*p)->rightchild),num);
        }

    }
    return;
}

void inorder(struct treenode *p){
    //left data right
    if(p != NULL){
        inorder(p->leftchild);
        printf(" %d ",p->data);
        inorder(p->rightchild);
    }
    else{
        return;
    }
}

void preorder(struct treenode *p){
    //data left right
    if(p!=NULL){
        printf(" %d ",p->data);
        preorder(p->leftchild);
        preorder(p->rightchild);
    }
    else
    return;
}

void postorder(struct treenode*p){
    //left right data
    if(p!=NULL){        
        postorder(p->leftchild);
        postorder(p->rightchild);
        printf(" %d ",p->data);
    }
    else
    return;
}



void search(struct treenode *root, struct treenode **key, struct treenode **parent, int num, int *found){

    //we want both the node and the parent 
    //arguments such that we dont have to return anything

    *found = 1;
    // *key = root;
    // *parent = root;
    while(root != NULL){
        if(root->data == num){
            (*key) = root;
            return;
        }
        else if(root->data > num){
            *parent = root;
            root = root->leftchild;
        }
        else{
            *parent = root;
            root = root->rightchild;
        }
        // else{
        //     *found = 0;
        //     return;
        // }
    }
    *found = 0;
    return;

}

void delete(struct treenode *root, int num){
    //search for the number
    //if found then find out which case it falls under

    //no child
    //singe child
    //2 children

    int found;
    struct treenode *key = NULL;
    struct treenode *parent = NULL;
    
   
    search(root, &key, &parent, num, &found);
    

    if(found){
        //no child
        if((key)->leftchild == NULL && (key)->rightchild == NULL){
            if((parent)->leftchild == (key)){
                (parent)->leftchild = NULL;   
            }
            else{
                (parent)->rightchild = NULL; 
            }
        }
        
        //exactly one child
        if(((key)->leftchild == NULL && (key)->rightchild != NULL)){
            //if key has right child
            if((parent)->leftchild == (key)){
                (parent)->leftchild = (key)->rightchild;   
            }
            else{
                (parent)->rightchild = (key)->rightchild; 
            }
        }
        if(((key)->leftchild != NULL && (key)->rightchild == NULL)){
            if((parent)->leftchild == (key)){
                (parent)->leftchild = (key)->leftchild;   
            }
            else{
                (parent)->rightchild = (key)->leftchild; 
            }
        }
        

        //2 children
        if(((key)->leftchild != NULL && (key)->rightchild != NULL)){
            
            //key's rightchild and then all leftchildren till we reach null
            // struct treenode *x = (key)->rightchild;
            struct treenode *xsucc = ((key)->rightchild)->leftchild;

            while(xsucc != NULL){
                // x = xsucc;
                xsucc = xsucc->leftchild;
            }
            (key)->data = xsucc->data;                      
            
        }
    }
    else{
        printf("no node present.");
    }
    return;
}