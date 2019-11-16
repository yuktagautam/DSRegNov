#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node * createList(){ //It will return Node type address.
    Node *start = NULL;
    Node *temp = NULL;
    int value = 0;

    printf("Enter the value\n");
    scanf("%d",&value);

    while(value != -1){
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = value;
        newNode->next = NULL;

        if(start == NULL){
            start = newNode;
            temp = newNode;
        }
        else{
           temp->next = newNode;
           temp = newNode; 
        }
        
        scanf("%d",&value);
    }
    return start;
}

void display(Node *h){

    while(h != NULL){
        printf("%d ",h->data);
        h = h->next;
    }
}


int main(){
    // struct Node s;
    // Node s;
    Node *start = createList();
    display(start);

    // int data = add();
    return 0;
}

// void add(int a,int b){
    
// }