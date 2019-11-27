//Insertion and Deletion in Circular Doubly Linked List.
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

Node *getLast(Node *head){
    Node *temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    return temp;
}

Node * insertNode(Node *head,int index, int element){
    Node *newNode  = (Node *)malloc(sizeof(Node));
    newNode->data = element;
    newNode->prev = NULL;
    newNode->next = NULL;

    if(index == 0){
        Node *last  = getLast(head);

        newNode->next = head;
        head->prev = newNode;

        newNode->prev = last;
        head = newNode;
        last->next = head;
    }
    else{
        Node *temp = head;
        int count =0;
        while(count < index-1){
            temp = temp->next;
            count++;
        }
        Node *temp1 = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = temp1;
        temp1->prev = newNode;

    }

    return head;
}

Node *deleteNode(Node *head,int index){
    if(index == 0){
        Node *last  = getLast(head);
        head = head->next;
        last->next = head;
    }
    else{
        Node *temp = head;
        int count =0;
        while(count < index-1){
            temp = temp->next;
            count++;
        }
        Node *temp1 = temp->next->next;
        temp->next= temp1;
        temp1->prev = temp;
    }

    return head;
}


int main(){
    Node *start = createList();
    display(start);
    printf("\n");
    Node *newStart = deleteNode(start,3);
    display(newStart);
    
    return 0;
}
