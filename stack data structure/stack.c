# include <stdio.h>
# include <stdlib.h>
  typedef struct stack{ // dinh nghia stack
    int *item;
    int size_max;
    int top;
  } stack;

  stack *create_stack(int size){ // tao stack
    stack* s = (stack*)malloc(sizeof(stack));
    s->size_max = size;
    s->top = -1;
    s->item = (int*)malloc(size*sizeof(int));
    return s;
  }

int isFull(stack *s){ // kiem tra stack da day hay chua
    if (s->top == s->size_max-1 )
    return 1;
    else
    return 0;
}

int isEmpty(stack*s){ // kiem tra stack co rong hay khong
  if(s->top == -1)
  return 1;
  else
  return 0;
}


  void push(stack*s, int new_data){ //them mot phan tu vao stack
    if(isFull(s) == 1){
      printf("ERROR: Danh sach da dday\n");
    
    return ;}
    else{
    s->top++;
    s->item[s->top] = new_data;
  }
}

void display(stack *s){ // in toan bo stack
  if(isEmpty(s)==1){
    printf("Danh sach trong\n");
    return ;
  }
  else{
    int len  = s->top;
    for(int i = len; i >= 0 ; i--){
      printf("%d\n",s->item[i]);
    }
    printf("top: %d\n",s->top);
  }
}

void pop(stack*s){ // xoa phan tu dau tien trong danh sach
  if(isEmpty(s) == 1){
    printf("Danh sach rong");
    return ;
  }
  else{
    s->top--;
    
  }
}

int peek(stack*s){
  if(isEmpty(s) == 1){
    printf("Danh sach rong");
    
  }
  else{
    return s->item[s->top];

  }

}

