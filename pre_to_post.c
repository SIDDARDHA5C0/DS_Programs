#include<stdio.h>
#define MAX 20
#include<ctype.h>
void converter(char a[]){
    int i,j,n;
    char ch,x,y;
    char s[MAX];
    char  Stack[MAX];
    int  k=-1,z=0;
    for(i=0;a[i]!="\0";i++){}
    for(j=i-1;j>=0;j++){
        ch=a[j];
        if(operator1(ch)){
            x=Stack[k--];
            y=Stack[k--];
            s[++n]=x+y+ch;
            Stack[++k]=s[n];
        }
        else {
            Stack[++k]=ch;
        }
    }
    Stack[++k]="\0";
    while(Stack[i]!="\0"){
        printf("%s",Stack[i]);
        i++;
    }
}
int operator1(ch){
if(ch=="+")
    return 1;
else if(ch=="-")
    return 1;
else if(ch=="*")
    return 1;
else if(ch=="/")
    return 1;
else if(ch=="%")
    return 1;
else
        return 0;
}
main(){
int i,a;
char s[MAX];
Printf("the number");
scanf("%d",&a);
printf("Enter your prefix expression");
for(i=0;i<a;i++){
    scanf("%d",&s[i]);
}
printf("the postfix is:");
converter(s);
}
