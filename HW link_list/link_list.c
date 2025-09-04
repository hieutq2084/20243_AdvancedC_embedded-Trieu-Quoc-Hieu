# include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
     struct node *next;
};

typedef struct node node;

// tao mot node moi
node* create_node (int data){
    node *new_node ;
    new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// noi 1 node o cuoi;
void push_back(node**head,node* new_node){
    if(*head == NULL){
        *head = new_node;

    }
    else{
        node*temp;
        temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

}

//noi 1 node o truoc
void push_front(node**head,node* new_node){
    if(*head == NULL)
    *head = new_node;
    else{
        node*temp;
        temp = new_node;
        new_node->next = *head;
        *head = temp;
    }
}

// in toan bo danh sach
void display(node**head){
    if(*head == NULL){
        printf("Danh sach trong");
    }
    else{
        printf("Cac phan tu trong link list: ");
        node*temp;
        temp = *head;
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

// Xoa node dau;
void delete_last(node **head){
    if(*head == NULL){
        printf("Danh sach trong\n");
    
    return ;}
    else{
    node *temp;
    temp = *head;
    if(temp->next == NULL){
        free(temp);
        *head = NULL;
    }
    else{
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
    }
}

// Xoa node cuoi;
void delete_first(node **head){
     if(*head == NULL){
        printf("Danh sach trong\n");
    
    return ;}
    else{
    node *temp;
    temp = *head;
    if(temp->next == NULL){
        free(temp);
        *head = NULL;
    }
    else{
        *head = (*head)->next;
        free(temp);
    }
}
}

// Lay gia tri node dau
void take_first(node **head){
    if (*head == NULL){
        printf("Danh sach trong\n");
        return ;
    }
    else{
        printf("-Gia tri dau cua danh sach: %d\n",(*head)->data);
    }
}

// lay gia tri cuoi
void take_last(node **head){
   if (*head == NULL){
        printf("Danh sach trong\n");
        return ;
    }
    else{
        node *temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        printf("-Phan tu cuoi cua danh sach la %d\n",temp->data);
    } 
}

// tim so phan tu cua danh sach
int size(node**head){
if(*head == NULL){
        return 0;
    }
    
    else{
        int count = 0;
        node*temp;
        temp = *head;
        while(temp != NULL){
            count ++;
            temp = temp->next;
        }
       return count;
    }
}

// chen vao mot vi tri bat ki
void insert(node **head, int pose, node *new_node){
    int len;
    len = size(head);
    if(pose <=0 || pose > len+1){
        printf("ERROR : Khong the chen");
        return ;
    }
    else if(pose == 1)
    push_front(head,new_node);
    else if(pose == len+1)
    push_back(head,new_node);
    else{
         int count = 0;
        node*temp;
        temp = *head;
        while(temp != NULL){
            count ++;
            if(count == pose -1)
            break;
            temp = temp->next;
    }
    node *temp1 = temp->next;
    temp->next = new_node;
    new_node->next = temp1;
}
}

// xoa mot vi tri bat ki
void delete(node**head, int pose){
    int len;
    len = size(head);
    if(pose <=0 || pose > len+1){
        printf("ERROR : Khong the xoa");
        return ;
    }
    else if(pose == 1)
    delete_first(head);
    else if(pose == len)
    delete_last(head);
    else{
         int count = 0;
        node*temp;
        temp = *head;
        while(temp != NULL){
            count ++;
            if(count == pose -1)
            break;
            temp = temp->next;
    }
    node *temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
}
}

// xoa toan bo danh sach
void delete_all(node**head){
    while (*head != NULL){
        delete_first(head);
    }
}


// comment ***
// Tại sao sử dụng con trỏ cấp 2: vì các hàm làm thay đổi (giá trị) địa chỉ con trỏ head nên phải truyền tham trị