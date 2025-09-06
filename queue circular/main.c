# include <stdio.h>
# include "cir.h"

int main(){
    cir*q = create_queue(5);
    enqueue(q,0);
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    dequeue(q);
    

    
    display(q);

    enqueue(q,6472);
    enqueue(q,200);
    
    display(q);

    dequeue(q);
    dequeue(q);
    dequeue(q);
    display(q);
}