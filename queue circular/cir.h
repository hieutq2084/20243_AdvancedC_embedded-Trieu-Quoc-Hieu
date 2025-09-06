#ifndef CIR_H
#define CIR_H
typedef struct que_cir{ // dinh nghia queue_cir  
    int max_size;
    int front;
    int rear;
    int *item;
} cir;

cir * create_queue(int size); // tao mot hang

int isEmpty(cir *q); // kiem tra hang rong

int isFull(cir*q); // kiem tra hang day

void enqueue(cir *q, int value); // them mot phan tu vao hang

void dequeue(cir*q); // xoa 1 phan tu vao hang dau

void peek(cir*q); // xem phan tu dau tien va cuoi cung

void display(cir*q); // in ra cacphan tu trong hang



#endif