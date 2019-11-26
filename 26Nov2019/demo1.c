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


Node * reverse(Node *head){
    Node *t = head;
    Node *n = NULL;
    Node *p = NULL;

    while (t != NULL)
    {
        n = t->next;
        t->next = p;
        p = t;
        t = n;
    }
    head = p;
    return head;
}



int main(){
    Node *start = createList();
    display(start);
    printf("\n");
    Node *revStart = reverse(start);
    display(revStart);
    return 0;
}
