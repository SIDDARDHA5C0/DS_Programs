#include<stdio.h>
#include<stdlib.h>
struct node* insert(struct node*,int);
void display(struct node*);
struct node{
struct node* pre;
int data;
struct node* next;
};
struct node *create(struct node* head){
int a;
while(1){
    printf("Enter your number1");
    scanf("%d",&a);
    if(a==0)
        return head;
    head=insert(head,a);
}
return head;
}
struct node* insert(struct node *head, int a){
struct node* t,*temp;
t=(struct node*)malloc(sizeof(struct node));
t->data=a;
t->next=t->pre=NULL;
if(head==NULL){
    head=t;
}
else{
    temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    temp->next=t;
    t->pre=temp;
}
  return head;
}
void display(struct node*head){
struct node*t;
while(t!=NULL){
printf("%d",t->data);
t=t->next;
}
}
void main(){
struct node* head=NULL;
int a;
printf("1.creation\n2.display\n");
printf("Enter your number");
scanf("%d",&a);
switch(a){
case 1:
   head=create(head);
   break;
case 2:
    display(head);
    break;}}
