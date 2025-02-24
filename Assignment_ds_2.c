#include<stdio.h>
#define MAX 20
 int dualstack[MAX];
int top1=-1,top2=MAX+1;
void push1(){
    int a;
if(isfull())
printf("\nThe stack is full\n");
else{
        printf("\nEnter your number");
scanf("%d",&a);
    dualstack[++top1]=a;}}
void pop1(){
if(isempty1())
    printf("\nThe stack is empty\n");
else
    printf("\n The poped item is %d",dualstack[top1--]);}
void push2(){
    int a;
if(isfull())
printf("\nThe stack is full\n");
else{
        printf("\nEnter your number");
scanf("%d",&a);
    dualstack[--top2]=a;}}
void pop2(){
if(isempty2())
    printf("\nThe stack is empty\n");
else
    printf("\n The poped item is %d",dualstack[top2++]);}
int isfull(){
return (top1>=top2)?1:0;}
int isempty1(){
return (top1==-1)?1:0;}
int isempty2(){
return (top2==(MAX+1))?1:0;   }
void viewstack1(){
    if(isempty1())
        printf("The stack is empty\n");
else{
int t;
t=top1;
while(t>=0){
    printf("%d\t",dualstack[t]);
    t--;}}}
void viewstack2(){
    if(isempty2())
        printf("The stack is empty\n");
    else{
int t;
t=top2;
while(t<=MAX)
    printf("%d\t",dualstack[t++]);}}
void count1(){
    if(isempty1())
        printf("\n The stack is empty");
    else{
int t,c=0;
t=top1;
while(t>=0){
    c++;t--;}
printf("The elements in stack1 are %d\n",c);}}
void search1(){
    if(isempty1())
        printf("\n The stack is empty");
    else{
int t,k;
t=top1;
printf("Enter your number");
scanf("%d",&k);
while(t>=0){
    if(dualstack[t--]==k)
        printf("The element is present in index %d\n",t+1);}}}
void count2(){
    if(isempty2())
        printf("\n The stack is empty");
    else{
int t,c=0;
t=top2;
while(t<=MAX){
    c++;t++;}
printf("The elements in stack2 are %d\n",c);}}
void search2(){
    if(isempty2())
        printf("\n The stack is empty");
    else{
int t,k;
t=top2;
printf("Enter your number");
scanf("%d",&k);
while(t<=MAX){
    if(dualstack[t++]==k)
        printf("The element is present in index %d\n",(MAX-t)+1);}}}
void main(){
int a,b,c,d,e;
label:
    printf("###### Main menu #######\n");
    printf("\n1.stack1\n2.stack2");
    printf("\nEnter your option ");
    scanf("%d",&a);
    switch(a){
case 1:
    label1:
    printf("\tStack1 activated\n");
    printf("##### Stack1 Operations #####\n");
    printf("1.push\n2.pop\n3.isfull\n4.isempty\n5.viewstack\n6.count\n7.search");
    printf("\nEnter your option ");
    scanf("%d",&b);
    switch(b){
case 1:
    push1();
    viewstack1();
    break;
case 2:
    pop1();
    viewstack1();
    break;
case 3:
    d=isfull();
    if(d==1)
        printf("\nThe stack is full\n");
    else
        printf("\n The stack is not full\n");
    break;
case 4:
    d=isempty1();
    if(d==1)
        printf("\nThe stack is empty\n");
    else
        printf("\n The stack is not empty\n");
    break;
case 5:
    viewstack1();
    break;
case 6:
    count1();
    break;
case 7:
    search1();
    break;}
    break;
case 2:
    label2:
    printf("\tStack2 activated\n");
    printf("##### Stack1 Operations #####\n");
    printf("1.push\n2.pop\n3.isfull\n4.isempty\n5.viewstack\n6.count\n7.search");
    printf("\nEnter your option \n");
    scanf("%d",&b);
    switch(b){
case 1:
    push2();
    viewstack2();
    break;
case 2:
    pop2();
    viewstack2();
    break;
case 3:
    d=isfull();
    if(d==1)
        printf("\nThe stack is full\n");
    else
        printf("\n The stack is not full \n");
    break;
case 4:
    d=isempty2();
    if(d==1)
        printf("\nThe stack is  empty \n");
    else
        printf("\n The stack is not empty\n");
    break;
case 5:
    viewstack2();
    break;
case 6:
    count2();
    break;
case 7:
    search2();
    break;}
    break;}
    printf("\npress  1 for the main menu\n press 2 for stack1 operations\n press 3 for stack2 operations");
    printf("\npress any other button except 1,2,3 to exit");
    scanf("%d",&c);
    if(c==1)
        goto label;
    else if(c==2)
        goto label1;
    else if(c==3)
        goto label2;
    else
        printf("The program terminated successfully");}
