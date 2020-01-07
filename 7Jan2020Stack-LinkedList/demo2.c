#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
    int front,end;
    int capacity;
    int *arr;
}Queue;

Queue *queue = NULL;

void createQueue(int capacity){ 
    queue = (Queue *)malloc(sizeof(Queue));
    queue->front = -1;
    queue->end = -1;
    queue->capacity = capacity;
    queue->arr = (int *)calloc(capacity,sizeof(int));

}

void enqueue(int data){
    if(queue->end == queue->capacity-1 ){
        printf("Queue is FUll\n");
        return ;
    }
    else if(queue->front == -1 && queue->end == -1){
        queue->front++;
        queue->end++;
        queue->arr[queue->end] = data;
    }
    else{
        queue->end++;
        queue->arr[queue->end] = data;
    }

}

int dequeue(){
    int data;

    if(queue->front == -1){
        printf("Queue is Empty\n");
        return 0;
    }
    else{
        data = queue->arr[queue->front];
        int i;
        for( i =0 ; i<queue->end ; i++ ){
            queue->arr[i] = queue->arr[i+1];
        }
        queue->arr[queue->end] = 0;
        queue->end--;
    }

    return data;
}


void display(){
    int i=0;

    for( i=0 ; i<=queue->end ; i++){
        printf("%d   ",queue->arr[i]);
    }
}


int main(){
    createQueue(10);
    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);
    enqueue(500);

    display();
    printf("\n");

    dequeue();
    dequeue();

    display();
    printf("\n");


    return 0;
}
