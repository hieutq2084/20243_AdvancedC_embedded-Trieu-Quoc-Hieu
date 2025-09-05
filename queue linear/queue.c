# include <stdio.h>
# include <stdlib.h>

typedef struct queue{
    int *item;
    int front; // chi so danh dau phan tu o truoc
    int rear; // chi so danh dau phan tu o cuoi
    int max_size;

}queue; // dinh nghia queue

queue* create_queue(int size){  // khoi tao mot queue

    queue *q = (queue*)malloc(sizeof(queue));
    q->max_size = size;
    q->front = -1;
    q->rear = -1;
    q->item = (int*)malloc(size*sizeof(int));
    return q;

}

int isEmpty(queue *q){ // kiem tra xem hang co trong
    if(q->front == -1 && q->rear == -1)
    return 1;
    else return 0;
}

int isFull(queue *q){ // kiem tra hang co day
    if(q->front == 0 && q->rear == q->max_size -1)
    return 1;
    else 
    return 0;
}

void enqueue(queue*q, int value){ // them mot phan tu vao cuoi hang
    if( isFull(q) ){
        printf("ERROR: Khong the chen them them phan tu %d\n",value);
        return ;
    }

    else{
     if( isEmpty(q) ){
        q->front = 0;}

        q->rear++;
        q->item[q->rear] = value;
    
}
}

void dequeue(queue*q){  // xoa mot phan tu dang truoc
    if ( isEmpty(q) ){
        printf("ERROR: Khong the xoa\n");
    }
    else{
        q->front++;
        if(q->front > q->rear){ // neu hang khong con phan tu nao se reset front va rear
            q->front = -1;
            q->rear = -1;
        }

    }
}

void display(queue*q){ // in cac phan tu trong hang
    if( isEmpty(q) ){
        printf("Hang trong\n");
    }
    else{
        for(int i = q->front; i <= q->rear; i++){
            printf("%d ", q->item[i]);
        }
        printf("\n");
        
    }
    printf("Front: %d\n",q->front);
    printf("Rear: %d\n\n",q->rear);
}

