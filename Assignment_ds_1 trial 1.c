#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node *insert(struct node *head,char  k[100]);
struct node {
char   name[100];
struct node *next;
};
struct node *create(struct node *head,int k){
struct node *t;char *p;
char  name1[100];
for(int i=1;i<=k;i++){
 printf("Enter your name");
 gets(name1);
 //scanf("%d",&name1);
 p=&name1;
 head=insert(head,p);
}
t=head;
while(t->next!=NULL){
    t=t->next;
}
t->next=head;
return head;
}
struct node *insert(struct node *head,char * k){
struct node *temp,*t;
temp=(struct node *)malloc(sizeof(struct node));
temp->name=k;
temp->next=NULL;
if(head==NULL){
    head=temp;
}
else{
    t=head;
    while((t->next)!=NULL){
        t=t->next;
        }
        t->next=temp;
}
return head;
}
void display(struct node *head){
struct node *t;
t=head;
do{
    puts(t->name);
    //printf("\t%d",(t->name));
    //printf("->");
    t=t->next;
   } while(t!=head);
}

struct node*iterator_remover(struct node*head, int b){
struct node *x,*y;
x=head;
y=x->next;
//printf("%d",b);
for(int i=0;i<b-1;i++){
    x=x->next;
    y=y->next;
}
x->next=y->next;
printf("\nThe player eliminated is  ");
puts(y->name);
if(y==head){
    head=y->next;
}
free(y);

return head;
}
int count (struct node * head){
struct node *t; int c=0;
t=head;
do{
     c++;
        t=t->next;
}while(t != head);
//printf("\n%d",c);
if(c==1)
printf(" \nThe winner is %s",head->name);
return c;
}
 void main(){
     int a,b,i;
 struct node *head =NULL;
 printf("Enter no of participants");
 scanf("%d",&a);
 head=create(head,a);
 printf("The participants are");
 display(head);
 while((count(head))>1){
 printf("\nEnter your number");
 scanf("%d",&b);
 head=iterator_remover(head,b);//iterator and remover
 }
 }
