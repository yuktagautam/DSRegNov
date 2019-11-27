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

    // temp->next = start;
    

    return start;
}

void display(Node *h){
    Node *temp=h;
    do{
        printf("%d ",h->data);
        h = h->next;
    }while(temp != h);
}

int detectLoop(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            printf("loop Detected\n"); 
            return 1;
        }
    }
    return 0;
}


int main(){
    Node *start = createList();
    display(start);
    printf("\n");
    int result = detectLoop(start); 
    
    if(result == 0) 
        printf("Loop Not Detected\n");
    
    return 0;
}
