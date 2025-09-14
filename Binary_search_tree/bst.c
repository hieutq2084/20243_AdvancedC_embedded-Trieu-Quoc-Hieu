# include <stdio.h>
# include <stdlib.h>

typedef struct bst_node{
    int key;
    struct bst_node *left;
    struct bst_node *right;
} node;


// Function to create new BST node
node*create_node(int item){
    node* new_node = (node*)malloc(sizeof(node));
    new_node->key = item;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// Function to insert node
void insert(node**root,int item){
    if(*root == NULL){
        *root = create_node(item);
        return;
    }

    node*current_node = *root;
    while(current_node != NULL){
        if(item == current_node->key)
        return;

        else if(item < current_node -> key){
            if(current_node->left == NULL){
                current_node->left = create_node(item);
                return;
            }
            current_node = current_node->left;
        }

        else{
           if(current_node->right == NULL){
                current_node->right = create_node(item);
                return;
            }
            current_node = current_node->right;
        }
        }
    }

// FUnction to display tree
void inorder(node* root) {
    if (root == NULL) return;

    inorder(root->left);          // duyệt trái
    printf("%d ", root->key);     // in node
    inorder(root->right);         // duyệt phải
}


// Function to find parent's node with a key value
node *find_parent(node**root,int data){
    node*parent = NULL;
    node*current = *root;
    while (current != NULL && current->key != data){
        parent = current;
        if (data < current->key)
            current = current->left;
        else
            current = current->right;
    }
    if (current == NULL) return NULL; 
    return parent; 
}
    


// Function to search a node with a key value
node *find_node(node**root,int data){
    if(*root == NULL){
        return NULL;
    }


    node*current_node = *root;
    while(current_node != NULL){
        if(data == current_node->key)
        return current_node;

        else if(data < current_node -> key){
            current_node = current_node->left;
        }

        else{
            current_node = current_node->right;        
    }
}
return NULL;
}

// Function to deleta a node has 0 child;
void delete_node_with_0_child(node*current_node,node**root){
    if(current_node == NULL)
    return;


    if (current_node == *root){
        *root = NULL;
        free(current_node);
        return;}


    node*parent = find_parent(root, current_node->key);
        if(parent->left == current_node)
        parent->left = NULL;
        else
        parent->right = NULL;

        free(current_node);
        return;
    }
           
// Function to delete a node has 1 child;
void delete_node_with_1_child(node*current_node,node**root){
    if(current_node == NULL)
    return ;


    node*parent = find_parent(root,current_node->key);
    node*child;
    // find node child
    if(current_node-> left == NULL)
    child = current_node->right;
    else 
    child = current_node->left;


    if(current_node == *root){
        *root = child;
        free(current_node);
        return;
    }


    if(parent->left == current_node)
    parent->left = child;
    else
    parent->right = child;

    free(current_node);
}

// Function to delete a node has 2 child;
void delete_node_with_2_child(node*current_node,node**root){
    node*successor = (current_node)->right;
    while(successor->left!= NULL){
        successor = successor->left;
    }
        int temp;
        temp = successor->key;

      if (successor->left == NULL && successor->right == NULL) {
        delete_node_with_0_child(successor, root);
    } 
       else {
        delete_node_with_1_child(successor, root);
    }
    (current_node)->key = temp;
}   

// Function to delete a node with a specific key
void delete_node (node**root, int item){
    node* current_node = find_node(root,item);
    if (current_node == NULL) return;

    if(current_node->left == NULL && current_node->right == NULL){
        delete_node_with_0_child(current_node,root);
        return ;
    }

    else if(current_node->left== NULL || current_node->right == NULL  ){
        delete_node_with_1_child(current_node,root);
        return;
    }

    else{
        delete_node_with_2_child(current_node,root);
        return;
    }
}

    
    






    







    




