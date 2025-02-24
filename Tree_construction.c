#include<stdio.h>
#include<stdlib.h>
#define MAX 20
struct treenode {
int data;
struct treenode *pre;
struct treenode *next;
};
void inorder(struct treenode *root);
void postorder(struct treenode *root);
void preorder(struct treenode *root);
struct treenode* insert(struct treenode *root,int k);
struct treenode* create(struct treenode*root ){
int data;
while(1){
    printf("Enter your data");
    scanf("%d",&data);
    if(data==0)
        return  root;
    root =insert(root,data);
}
return root;
}
struct treenode * que[MAX];
int front,rear;
struct treenode* insert(struct treenode *root,int k){
struct treenode *temp,*t;
temp=(struct treenode *)malloc(sizeof(struct treenode));
temp->pre=NULL;
temp->next=NULL;
temp->data=k;
if(root =NULL)
    root=temp;
else {
    t=root;
 front=rear=0;
 if((t->pre)!=NULL){
    while(  )
 }
}
}

 void main(){
struct treenode *root=NULL;
root=create(root);
printf("The inorder is \n");
inorder(root);
printf("The preorder is \n");
preorder(root);
printf("The postorder is \n");
postorder(root);
}
