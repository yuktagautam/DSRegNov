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


void display(Node *h){

    Node *temp = h;

    do{
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp != h);

}

Node * reverse(){
    
}


int main(){
    Node *start = createList();
    display(start);
    printf("\n");
    
    
    return 0;
}
