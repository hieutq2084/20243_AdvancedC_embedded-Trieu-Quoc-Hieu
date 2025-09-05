# ifndef QUEUE_H
# define QUEUE_H

typedef struct queue{
    int *item;
    int front;
    int rear;

}queue;

queue* create_queue(int size);

int isEmpty(queue*q);

int isFull(queue*q);

void enqueue(queue*q, int value);

void dequeue(queue*q);

 void display(queue*q);




# endif
