#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;


typedef struct Queue{
    Node *front;
    Node *rear;
}Queue;

Queue *queue = NULL;

void createQueue(){
    queue = (Queue *)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
}

void enqueue(int data){
    Node *temp = (Node *)malloc(sizeof(Node));
    
    if(temp == NULL){
        printf("Queue is FULL\n");
    }
    else if(queue->front == NULL){
        temp->data = data;
        temp->next = NULL;
        queue->front = temp;
        queue->rear = temp;   
    }
    else{
        
        temp->data = data;
        temp->next = NULL;
        queue->rear->next = temp;
        queue->rear = temp; //queue->rear =queue->rear->next
    }

}

int dequeue(){
    int data=0;
    if(queue->front == NULL){
        printf("Queue is Empty\n");
    }
    else{
        Node *temp = queue->front;
        queue->front = temp->next;
        data = temp->data;
        free(temp);
    }
    return data;
}

bool isEmpty(){
    if(queue->front == NULL){
        return true;
    }
    else{
        return false;
    }
}

int getFront(){
    int data;
    data = queue->front->data;

    return data;
}

void display(){
    Node *head = queue->front;
    while(head != NULL){
        printf("%d  ",head->data);
        head = head->next;
    }
    printf("\n");
}


int main(){
    createQueue();

    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);
    enqueue(500);
    display();


    printf("Dequeued element  = %d\n",dequeue());
    printf("Dequeued element  = %d\n",dequeue());

    display();

    printf("Front element  = %d\n",getFront());

    if(isEmpty()){
        printf("Queue is Empty\n");
    }
    else{
        printf("Queue is Not Empty\n");
    }

    return 0;
}


