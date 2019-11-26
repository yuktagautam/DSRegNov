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

Node * deleteNode(Node *head,int index){
    Node *temp = head;
    Node *last = getLast(head);

    if(index == 0){
        head = head->next;
        last->next = head;
    }

    return head;
}


int main(){
    Node *start = createList();
    display(start);
    printf("\n");
    Node *newStart = deleteNode(start,0);
    display(newStart);
    
    return 0;
}
