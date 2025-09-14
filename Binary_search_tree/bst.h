# ifndef BST_H
# define BST_H
typedef struct bst_node{
    int data;
    struct bst_node *left;
    struct bst_node *right;
} node;


node*create_node(int item);
void insert(node**root,int item);
node *find_node(node**root,int data);
node *find_parent(node**root,int data);
void delete_node_with_0_child(node*current_node,node**root);
void delete_node_with_1_child(node*current_node,node**root);
void delete_node_with_2_child(node**current_node,node**root);
void delete_node(node**root,int data);
void inorder(node*root);

#endif