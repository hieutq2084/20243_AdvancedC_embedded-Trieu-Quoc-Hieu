# include <stdio.h>
# include "queue.h"

int main(){
    queue*q = create_queue(5);
    display(q);

    enqueue(q,0);
    display(q);

    enqueue(q,1);
    display(q);

    enqueue(q,2);
    display(q);

    enqueue(q,3);
    display(q);
    
    enqueue(q,4);
    display(q);

    enqueue(q,5);
    display(q);

    
    

    
}