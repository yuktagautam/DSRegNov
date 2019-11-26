#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;

Node * createList(){ 
    Node *start = NULL;
    Node *temp = NULL;
    int value = 0;

    printf("Enter the value\n");
    scanf("%d",&value);

    while(value != -1){
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;

        if(start == NULL){
            start = newNode;
            temp = newNode;
        }
        else{
           temp->next = newNode;
           newNode->prev = temp;
           temp = newNode; 
        }
        
        scanf("%d",&value);
    }

    temp->next = start;
    start->prev = temp;

    return start;
}

void display(Node *h){
    Node *temp=h;
    do{
        printf("%d ",h->data);
        h = h->next;
    }while(temp != h);
}


int main(){
    Node *start = createList();
    display(start);
    
    
    return 0;
}
