#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node* createList();
int loopDetection(Node *);
int loopDetect(Node *);

int main(){
    Node *head=createList();

    if(loopDetection(head)){
        printf("Loop Detected\n");
    }
    else{
        printf("Loop Not Detected\n");
    }
    
    return 0;
}

int loopDetect(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return 1;
        }
    }
    return 0;
}

int loopDetection(Node *head){
    Node *temp = head->next;
    while(temp){
        temp = temp->next;
        if(temp == head){   
            return 1;
        } 
              
    }
    return 0;
    
}



Node* createList(){
    Node *head = NULL;
    Node *temp = NULL;
    int value ;
    printf("Enter the values of linked list");
    scanf("%d",&value);

    while(value != -1){
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = value;
        newNode->next = NULL;
        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }

        scanf("%d",&value);
    }
    // temp->next = head;
    return head;
}