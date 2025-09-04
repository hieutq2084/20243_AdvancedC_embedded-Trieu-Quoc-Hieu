#ifndef LINK_LIST_H
#define LINK_LIST_H

struct node{
    int data;
    struct node*next;
};

typedef struct node node;
node* create_node (int data);// tao 1 node

void push_back(node**head, node*new_node); // tao 1 node o cuoi

void push_front(node**head, node*new_node); // tao 1 node o truoc

void display(node**head); // in toan bo danh sach

void delete_last(node**head); // xoa node cuoi

void delete_first(node**head); // xoa node dau

void take_first(node **head); // lay node dau

void take_last(node **head); // lay node cuoi

int  size(node**head); // tim so phan tu cua danh sach

void insert(node**head, int pose, node *new_node); // chen vao vi tri bat ki

void delete(node**head, int pose); // xoa mot vi tri bat ki

void delete_all(node**head); // xoa tat ca danh sach
#endif