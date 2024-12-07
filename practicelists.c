
// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node *next;
// };

// struct node *head= NULL;

// void Insert(int data){
//     struct node *newNode;
//     newNode = (struct node*)malloc(sizeof(struct node));

//     if(newNode == NULL){
//         printf("MEMORY ALLOCATION FAILED");
//     }else{
//        newNode->data=data;
//        newNode->next=head;
//        head=newNode;
//        printf("SUCCESS\n");
//         }
//     }

// void display(){
//     struct node *temp = head;
//     if(head ==NULL){
//         printf("LIST IS EMPTY");
//     }else{
//         printf("LINKED LIST ELEMENTS: ");
//         while(temp != NULL){
//             printf("%d->", temp->data);
//             temp = temp->next;
//         }
//         printf("NULL");
//     }

// }

// int main(){
//     Insert(10);
//     Insert(10);
//     Insert(10);
//     Insert(10);
//     Insert(10);
//     Insert(10);

//     display();
//     return 0;

// }


#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int data){
    struct node *newNode = head;
    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL){
        printf("MEMORY ALLOCATION FAILED");
    }else{
        newNode ->data=data;
        newNode->next=head;
        head = newNode;
        printf("SUCCESSFULLY INSERTED\n");
    }
}

void display(){
    struct node *temp = head;
    if(head == NULL){
        printf("LIST IS EMPTY");
    }else{
        printf("LINKED LIST:\n ");
        while(temp!=NULL){
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }

}

int main(){
    insert(10);
    insert(10);
    insert(10);
    insert(10);
    insert(10);
    insert(10);
    insert(10);

    insert(10);
    insert(10);

    display();

    return 0;
}