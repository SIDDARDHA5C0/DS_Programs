#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
};
struct node *front=0,*rear=0;
void *enqueue(struct node *front,int k);
struct node *dequeue (struct node *front);
void *viewqueue(struct node *front);
main(){
int data=1,a;
while(data!=0){
    printf("Enter your data");
    scanf("%d",&data);
    if(data==0)
        break;
    enqueue(front,data);}
while(1){
    front=dequeue(front);
    printf("enter any key to dequeue\n  enter 0 to terminate");
scanf("%d",&a);
if(a==0)
    break;
}
viewqueue(front);
}
void *enqueue(struct node *front,int k){
struct node *temp,*t;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=k;
temp->next=NULL;
 if(front==NULL){
    front=temp;
    rear=temp;
    return front;
 }
 else{

 }
}
