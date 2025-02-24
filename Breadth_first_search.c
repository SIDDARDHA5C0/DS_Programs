#include<stdio.h>
#define MAX 50
void main(){
int a,b,c,d,e;
int a1[MAX][MAX],a2[MAX];
printf("Enter no of vertices");
scanf("%d",&a);
printf("%d",a);
for(int i=0;i<a;i++){
    a2[i]=0;
    for(int j=0;j<a;j++){
        a1[i][j]=0;
    }
}
for(int i=1;i<=a;i++){
    for(int j=1;j<=a;j++){
            printf("\nDo you have the link b\w %d and %d",i,j);
        scanf("%d",&d);
            if(d==1)
            a1[i][j]=1;
else
    a1[i][j]=0;
    }
}
for (int i=1;i<=a;i++){
    for(int j=1;j<=a;j++){
        printf("%d",a1[i][j]);
    }printf("\n");
}
printf("Enter your starting point");
scanf("%d,&b");
int que[MAX];
int front=0,rear=0;
que[rear++]= b;
while(front!=rear){
c=que[front++];
printf("\n%d",c);
a2[c]=1;
for(int i=0;i<a;i++){
if(a1[c][i]==1&&!a2[i]){
    que[rear++]=a1[i];
    a2[i]=1;
}
}
}
}
