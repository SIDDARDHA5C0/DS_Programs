#include<stdio.h>
#include<stdlib.h>
#define MAX 20
struct treenode {
struct treenode* left;
int data;
struct treenode* right;
};
struct treenode *insert(struct treenode *root,int k);
void inorder(struct treenode *root);
void preorder(struct treenode *root);
void postorder(struct treenode *root);
void inorder1(struct treenode *root);
void preorder1(struct treenode *root);
void postorder1(struct treenode *root);
struct treenode *que[MAX];
int front=0,rear=0;
struct treenode *insert(struct treenode *root,int k){
struct treenode *temp,*t;
temp=(struct treenode *)malloc(sizeof(struct treenode ));
temp->data=k;
temp->left=NULL;
temp->right=NULL;
if(root==NULL){
    root=temp;
    return root;
}
else{
    front=rear=0;
    que[rear++]=root;
    while(front!=rear){
        t=que[front++];
        if(t->left==NULL){
            t->left=temp;
            return root;
        }
        else{
            if(t->right==NULL){
                t->right=temp;
                return root;
            }
            else{
                que[rear++]=t->left;
                que[rear++]=t->right;
            }
        }
    }
}}
void inorder(struct treenode *root){
if(root==NULL){
    return;
}
else{
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
}
void preorder(struct treenode *root){
if(root==NULL){
    return;
}
else{
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
}
void postorder(struct treenode *root){
if(root==NULL){
    return;
}
else{
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
}
void inorder1(struct treenode *root){
struct treenode *stack[MAX],*t;
int top=-1;
t=root;
while(1){
    while(t!=NULL){
        stack[++top]=t;
            t=t->left;
    }
    if(top>=0){
        t=stack[top--];
        printf("%d",t->data);
        t=t->right;
    }
    else
        return;
}
}
void preorder1(struct treenode *root){
struct treenode *t,*stack[MAX];
int top=-1;
t=root;
while(1){
while(t!=NULL){
    stack[++top]=t;
    printf("%d",t->data);
    t=t->left;
}
    if(top>=0){
        t=stack[top--];
       // printf("%d",t->data);
        if(t->right!=NULL)
            t=t->right;
        else
            t=NULL;
    }
    else
        return;
}
}
void postorder1(struct treenode *root){
struct treenode *stack1[MAX],*stack2[MAX],*t;
int top1=-1,top2=-1;
t=root;
stack1[++top1]=t;
while(top1>=0){
    t=stack1[top1--];
    stack2[++top2]=t;
    if(t->left!=NULL)
        stack1[++top1]=t->left;
    if(t->right!=NULL)
        stack1[++top1]=t->right;
}
while(top2>=0){
    t=stack2[top2--];
    printf("%d",t->data);
}
}
void main(){
int a,b,c,d;
struct treenode *root=NULL;
label:
printf("1.create tree\n2.inorder\n3.preorder\n4.postorder\n5.inorder1\n6.preorder1\n7.postorder1\n");
printf("Enter your option");
scanf("%d",&a);
switch(a){
case 1:
    printf("Enter your number");
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        printf("Enter your number");
        scanf("%d",&c);
        root=insert(root,c);
    }
    printf("The tree created successfully");
    break;
case 2:
    inorder(root);
    break;
case 3:
    preorder(root);
    break;
case 4:
    postorder(root);
    break;
case 5:
    inorder1(root);
    break;
case 6:
    preorder1(root);
    break;
case 7:
    postorder1(root);
    break;
}
printf("\nEnter 1 to return main menu");
scanf("%d",&d);
if(d==1)
    goto label;
else
    printf("\nThe program terminated successfully");
}
