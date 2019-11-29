#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
    int capacity;
    int top;
    int *arr;
}Stack;

Stack * createStack(int capacity){
    Stack *temp = (Stack *)malloc(sizeof(Stack));
    temp->capacity = capacity;
    temp->top = -1;
    temp->arr = (int *)calloc(capacity,sizeof(int));

    return temp;
}

void push(Stack *s,int data){
    if(s->top == s->capacity -1){
        printf("Stack Overflow\n");
        return ;
    }

    s->top++;
    s->arr[ s->top ] = data;
}

int pop(Stack *s){
    if(s->top == -1){
        printf("Stack Undeflow\n");
        return -1;
    }

    int temp = s->arr[s->top];
    s->arr[s->top] = 0;
    s->top--;

    return temp;

}



int main(){
    Stack *stack = createStack(10);
    push(stack,10);
    

    return 0;
}