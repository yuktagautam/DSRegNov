#include<stdio.h>
#include<stdlib.h>

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

    if(cqueue->front == cqueue->rear+1){
        printf("Queue Is FULL\n");
        return ;
    }
    else if(cqueue->rear == -1){
        cqueue->rear++;
        cqueue->front++;
        cqueue->arr[cqueue->rear] = data;
    }
    else{
        cqueue->rear = (cqueue->rear+1)%cqueue->capacity;
        cqueue->arr[cqueue->rear] = data;
    }

}


int dequeue(){
    int data;
    if(cqueue->front == -1 ){
        printf("QUeue is Empty\n");
        return 0;
    }
    else if(cqueue->front == cqueue->rear){
        data = cqueue->arr[cqueue->front];
        cqueue->arr[cqueue->front] = 0;
        cqueue->rear = -1;
        cqueue->front = -1;
    }
    else{
        data = cqueue->arr[cqueue->front];
        cqueue->arr[cqueue->front] = 0;
        cqueue->front++;
    }

    return data;
}

void display(){
    int i=0;

    if(cqueue->front == -1){
        printf("Queue is Empty\n");
    }

    if(cqueue->rear >= cqueue->front){
        for(i= cqueue->front ; i<=cqueue->rear ; i++){
            printf("%d  ",cqueue->arr[i]);
        }
    }
    else{
        for(i= cqueue->front ; i<cqueue->capacity ; i++){
            printf("%d  ",cqueue->arr[i]);
        }
        for(i=0 ; i<=cqueue->rear ; i++){
            printf("%d  ",cqueue->arr[i]);
        }
    }

    printf("\n\n");
    
}

int main(){
    createQueue(10);
    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);
    enqueue(500);
    enqueue(600);
    enqueue(700);
    display();
    printf("\n");
    printf("Dequeued Element = %d\n",dequeue());
    printf("Dequeued Element = %d\n",dequeue());
    printf("\n");
    display();
    printf("\n");
    enqueue(800);
    enqueue(900);
    enqueue(1000);
    enqueue(1100);
    enqueue(1200);

    display();

    enqueue(1300);


    return 0;
}