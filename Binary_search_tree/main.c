# include <stdio.h>
# include "bst.h"
int main(){
    node*root = NULL;
    insert(&root,50);
    insert(&root,100);
    insert(&root,200);
    insert(&root,300);
    insert(&root,51);
    insert(&root,52);
    insert(&root,10);
    insert(&root,48);
    insert(&root,5);
    delete_node(&root,100);
    inorder(root);
   
}