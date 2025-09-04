# include <stdio.h>
# include "link_list.h"

int main(){
    // khoi tao cac node
    node*node1 ,*node2 ,*node3, *node4, *node5, *node6, *node0;
    node1 = create_node(1);
    node2 = create_node(2);
    node3 = create_node(3);
    node4 = create_node(4);
    node5 = create_node(5);
    node6 = create_node(6);
    node*head = NULL;

    
    push_back(&head,node3);
    push_back(&head,node4);
    push_back(&head,node5);
    push_back(&head,node6);

   
    push_front(&head,node2);
    push_front(&head,node1);
    
   
    delete_all(&head);
    display(&head);

    
return 0;
}