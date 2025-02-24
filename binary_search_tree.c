#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct treenode{
struct treenode* left;
int data;
struct treenode* right;
};
struct treenode* insert(struct treenode * root,int k);
int height(struct treenode *root);
int leafnode(struct treenode *root);
int nodes(struct treenode *root);
void level_order_display(struct treenode *root);
void display_top_view(struct treenode * root);
int search(struct treenode *root);
struct treenode *insert(struct treenode *root,int k){
struct treenode *temp;
if(t==NULL){
    temp=(struct treenode *)malloc(sizeof(struct treenode));
    temp->data=k
    temp->left=temp->right=0;
    return root;
}
else{
    if(t->left)
}
}
void main(){
int a,b,c,d,e,f;
struct treenode *root=NULL;
label:
printf("1.creation\n2.height\n3.nodes\n4.leafnodes\n5.levelorderdisplay\n6.displaytopview\n7.search\n");
printf("Enter your option");
scanf("%d",&a);
switch(a){
case 1:
    while(1){
        printf("Enter your number");
        scanf("%d",&a);
        if(a==0)
            printf("creation completed");
        else{
            root=insert(root,a);
            printf("Enter 0 to exit");
        }
    }
break;
case 2:
    a=height(root);
    printf("The height is %d",a);
    break;
case 3:
    a=nodes(root);
    printf("The nodes present are %d",a);
    break;
case 4:
   a=leafnodes(root);
   printf("The leafnodes present are %d",a);
   break;
case 5:
    level_order_display(root);
    break;
case 6:
    display_top_view(root);
    break;
case 7:
    printf("Enter your key element");
    scanf("%d",&b);
    a=search(root,b);
    if(a==1)
        printf("The element is present");
    else
        printf("The element is absent");
    break;
}
printf("\nPress 1 to main menu\n else press any other number to exit");
printf("\nEnter your number");
scanf("%d",&c);
if(c==1)
    goto label;
else
    printf("The program executed successfully");
}

