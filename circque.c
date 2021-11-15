#include <stdio.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x){
    if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
        queue[rear] = x;
    }else if((rear + 1) % N == front){
        printf("Queue is full. \n");
        return;
    }else {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue is empty. \n");
    }else if(front == rear){
        front = -1;
        rear = -1;
    }else{
        printf("Dequeued element is : %d \n", queue[front]);
        front = (front +1) % N;
    }
}

void display(){
    int i = front;
    if(front == -1 && rear == -1){
        printf("Queue is empty. \n");
    }else {
        printf("Current Queue: \n");
        while(i != rear){
            printf("%d ", queue[i]);
            i = (i+1) % N;
        }
        printf("%d ", queue[rear]);
    }
    printf("\n");
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
    enqueue(5);
    dequeue();
    display();
    dequeue();
    dequeue();
    display();
    return 0;
}
