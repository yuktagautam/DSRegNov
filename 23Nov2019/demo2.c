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
    return start;
}

void display(Node *h){

    while(h != NULL){
        printf("%d ",h->data);
        h = h->next;
    }
}

Node *insertNode(Node *head,int index,int element){
    Node *temp = head;

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = element;
    newNode->prev = NULL;
    newNode->next = NULL;

    if(index==0){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else{
        int count =0;
        while(count < index-1){
            temp = temp->next;
            count++;
        }
        Node *temp1 = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        newNode->next = temp1;
        if(temp1 != NULL){
            temp1->prev = newNode;
        }
    }

    return head;
}




int main(){
    Node *start = createList();
    display(start);
    printf("\n");
    Node *newHead = insertNode(start,3,100);
    display(newHead);
    
    return 0;
}
