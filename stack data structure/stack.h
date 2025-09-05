# ifndef STACK_H
# define STACK_H
typedef struct stack{
    int *item;
    int size_max;
    int top;
  } stack;



stack *create_stack(int size); // tao mot stack moi

int isFull(stack *s); //kiem tra xem stack day

int isEmpty(stack*s); // kiem tra stack rong

void push(stack*s, int new_data); // them 1 phan tu vao stack

void display(stack *s); // in toan bo phan tu co trong stack

void pop(stack*s); // xoa mot phan tu o tren dau

int peek(stack*s);// xem phan tu tren cung cua stack
#endif