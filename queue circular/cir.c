# include <stdio.h>
# include <stdlib.h>
typedef struct que_cir{ // dinh nghia queue_cir  
    int max_size;
    int front;
    int rear;
    int *item;
} cir;
// khoi tao mot queue xoay vong
cir* create_queue(int size){
    cir*q = (cir*)malloc(sizeof(cir));
    q->front = -1;
    q->rear = -1;
    q->item = (int*)malloc(sizeof(int)*size);
    q->max_size = size;
    return q;
}

// kiem tra xem hag co rong hay khong
// kiem tra front = rear= -1
int isEmpty(cir*q){
    if(q->front == -1 && q->rear == -1)
    return 1;
    else 
    return 0;
}


// kiem tra hang co day hay khong
// kiem tra dieu kien rear+1 % maxsize == front
// dung-> hang da day
int isFull(cir*q){
    if ((q->rear+1) % (q->max_size) == q->front){
        return 1;
    }
    else 
    return 0;
}


// them mot phan tu vao hang
// kiem tra hang da day
//cap nhap chi so rear: rear = rear+1 % max_size
void enqueue(cir*q, int new_value){
    if (isFull(q)){
        printf("ERROR: Khong the chen them\n");
        return ;
    }
    else{
        if(q->front == -1)
        q->front = 0;
    q->rear = (q->rear +1) % (q->max_size);
    q->item[q->rear] = new_value;
}
}



// xoa mot phan tu khoi hang
// kiem tra hang co rong
// cap nhap chi so front=front+1 % max_size
void dequeue(cir*q){
    if (isEmpty(q)){
        printf("ERROR: Khong the xoa them\n");
    }
    else{
        q->front = q->front+1 % q->max_size;
        if(q->front == q->rear){
            q->front = -1;
            q->front = -1;
        }
    }
}


// in toan bo danh sach
void display(cir*q){
    if (isEmpty(q)){
    printf("Hang dang trong\n");}
    else{
    if(q->front <= q->rear){
    for (int i = q->front; i <= q->rear; i++){
       if(i == q->rear)
        printf("%d - rear(%d)\n",q->item[i],q->rear);
        else if(i == q->front)
        printf("%d - front(%d)\n",q->item[i],q->front);
        else
        printf("%d\n",q->item[i]);
    }
}
else if(q->front > q->rear){
    for (int i = q->front; i < q->max_size; i++){
       
         if(i == q->front)
        printf("%d - front(%d)\n",q->item[i],q->front);
        else
        printf("%d\n",q->item[i]);}

    for (int j = 0; j <= q->rear; j++){
        if(j == q->rear)
        printf("%d - rear(%d)\n",q->item[j],q->rear);
        else if(j == q->front)
        printf("%d - front(%d)\n",q->item[j],q->front);
        else
        printf("%d\n",q->item[j]);
    }
    }

}
printf("\n");
}

