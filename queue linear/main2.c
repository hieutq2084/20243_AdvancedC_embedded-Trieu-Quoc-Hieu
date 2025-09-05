# include <stdio.h>
# include "queue.h"

int main(){
    queue*q = create_queue(5);
    enqueue(q,0);
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    display(q);

    for(int i = 0; i < 5; i++){
        dequeue(q);
        display(q);
    }
    
}