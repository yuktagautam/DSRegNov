#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
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
    temp->next = start;

    return start;
}

void display(Node *h){

    Node *temp = h;

    do{
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp != h);

}
Node *getLast(Node *head){
    Node *temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    return temp;
}

Node *insertNode(Node *head,int index,int element){
    Node *temp = head;
    Node *last = getLast(head);

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = element;
    newNode->next = NULL;

    if(index == 0){
        newNode->next = temp;
        head = newNode;
        last->next = head;
    }
    else{
        int count = 0;
        while(count <index-1){
            temp = temp->next;
            count++;
        }
        Node *temp1 = temp->next;
        temp->next = newNode;
        newNode->next = temp1;

    }

    return head;
}


int main(){
    Node *start = createList();
    display(start);
    printf("\n");
    Node *newStart = insertNode(start,3,100);
    display(newStart);
    
    return 0;
}
