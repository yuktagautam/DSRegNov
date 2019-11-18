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
    return start;
}

Node * deleteNode(Node *head,int index){
    Node *temp = head;

    if(index == 0){
        head = head->next;
    }
    else{
        int count =0;
        while(count < index-1){
            count++;
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }

    return head;
}

void display(Node *h){

    while(h != NULL){
        printf("%d ",h->data);
        h = h->next;
    }
}




int main(){
    Node *start = createList();
    display(start);
    printf("\n");
    Node *newStart = deleteNode(start,0);
    display(newStart);
    
    return 0;
}
