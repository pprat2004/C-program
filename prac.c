#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
struct node{
    int reg;
    char name[20];
    struct node *next;
};

struct node *head,*middle,*last,*temp;
head = (struct node*)malloc(sizeof(struct node));
middle = (struct node*)malloc(sizeof(struct node));
last = (struct node*)malloc(sizeof(struct node));

if(head == NULL || middle == NULL || last == NULL){
    printf("memory allocation not completed");
    return 1;
}

head->reg= 10;
strcpy(head->name,"DSU");
middle->reg= 11;
strcpy(head->name,"DSe");

head->reg= 12;
strcpy(head->name,"DSi");

head->next = middle;
middle->next=last;
last->next = NULL;

temp = head  ;
while(temp != NULL){
    printf("DATA IS : \n regno: %d \n name: %s\n", temp->reg, temp->name);
    temp = temp->next;
   
}
 printf("\n NULL");
free(head);
free(middle);
free(last);
return 0;
}