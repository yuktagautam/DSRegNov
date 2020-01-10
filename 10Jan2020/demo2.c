#include<stdio.h>

typedef struct CircularQueue{
    int capacity;
    int front;
    int rear;
    int *arr;
}CircularQueue;

CircularQueue *cqueue = NULL;

void createQueue(int capacity){
    cqueue = (CircularQueue *)malloc(sizeof(CircularQueue));
    cqueue->front = -1;
    cqueue->rear = -1;
    cqueue->capacity = capacity;
    cqueue->arr = (int *)calloc(capacity,sizeof(int));    
}

void enqueue(int data){
    if(cqueue->rear+1 = front || )

    if(cqueue->front == -1){
        cqueue->front++;
        cqueue->rear++;
        cqueue->arr[queue->rear] = data;
    }
    else{
        
    }


}