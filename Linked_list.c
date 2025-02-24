#include<stdio.h>
#include<stdlib.h>
struct node *insert(struct node *start,int k);

struct node{
int data;
struct node *next;
};
struct node *create( struct node *head){
char ch='y'; int data;
int a;while(1){
printf("Enter your data");
scanf("%d",&a); if(a==0){return head;}
head=insert(head,a);
printf("Do you have any data?");
printf("%d",head);
} return head;}
struct node *insert(struct node *start,int k){
struct node *temp, *t;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=k;
temp->next=NULL;
if(start==NULL)
    start=temp;
else{
    t=start;
    while(t->next!=NULL)
        t=t->next;
    t->next=temp;
}
return start;}
void viewlist(struct node *head){
printf("The linked list is \n");
struct node *t;
t=head;// printf("%d",t);
while(t!=NULL){
        printf("%d",t->data);
t=t->next;// printf("h");

}
printf("NuLL");
}

main(){
struct node *head=NULL;
head=create(head);
viewlist(head);
}
