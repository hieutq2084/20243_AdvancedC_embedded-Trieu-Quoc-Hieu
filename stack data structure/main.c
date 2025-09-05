# include <stdio.h>
# include "stack.h"


int main(){
    stack *s = create_stack(5);
    
    push(s,0);
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    display(s);
    pop (s);
    pop(s);
    pop(s);
    
    display(s);
    printf("Phan tu dau tien :%d", peek(s));
    
}