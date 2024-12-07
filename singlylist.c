/*Write a program that:

Creates a singly linked list of 3 nodes, where each node stores:
An integer ID.
A float representing marks.
Initialize the values for each node using scanf.
Traverse the linked list and print the ID and marks for each node.
*/
#include <stdio.h>

struct info{
    char ID[50];
    float marks;
    struct info *next;
};

int main(){
    struct info i1,i2,i3;
    struct info *p;

   printf("Student 1 enter your ID and marks: ");
    scanf("%s %f", i1.ID, &i1.marks);

    printf("Student 2 enter your ID and marks: ");
    scanf("%s %f", i2.ID, &i2.marks);

    printf("Student3 enter your ID and marks: ");
    scanf("%s %f", i3.ID, &i3.marks);
    

    i1.next = &i2;
    i2.next = &i3;
    i3.next = NULL;

    p = &i1;
    int i=1;

    while(p != NULL){
        printf(" STUDENT %d: \n ID: %s, marks: %f\n", i,p->ID, p->marks);
        p = p->next;
        i++;
    }
    }