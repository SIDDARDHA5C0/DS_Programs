#include<stdio.h>
#include<stdlib.h>
struct node *insert(struct node *head,int k);
struct node {
struct node *pre;
int data;
struct node *next;
};
struct node *create(struct node *head){
int a; char c='y';
while(c=='y'){
printf("Enter your data");
scanf("%d",&a);
fflush(stdin);
head=insert(head,a);
printf("Do you have any data");
scanf("%c",&c);
}return head;}
struct node *insert(struct node *head,int k){
struct node *temp,*t;
temp=(struct node *)malloc(sizeof(struct node));
temp->pre=NULL;
temp->data=k;
temp->next=NULL;
if(head==NULL)
    head=temp;
else{
    t=head;
    while(t!=NULL)
        t=t->next;
    t->next=temp;
    temp->pre=t;
}return head;
};
void viewdoublelist(struct node *head){
struct node *t;
printf("The elements in list \n");
t=head;
while(t!=NULL){
    t=t->next;
    printf("%d",t->data);
}printf("NULL");
}
main(){
struct node *head=NULL;
head=create(head);
viewdoublelist(head);
}
