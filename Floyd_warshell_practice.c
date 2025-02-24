#include<stdio.h>
void floyd(int c[10][10],int n){
for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) c[i][j]=0;
            else c[i][j]=min(c[i][j],c[i][k]+c[k][j]);
        }
    }
}
}
int min(int a,int b){
if (a<b) return a;
else return b;
}
void main(){
int c[20][20],v,e,w,x,y;
printf("Enter no of vertices");
scanf("%d",&v);
printf("Enter no of edges");
scanf("%d",&e);
for (int i=1;i<=v;i++){
    for (int j=1;j<=v;j++) c[i][j]=999;
}
printf("Enter the edges and weights");
for(int i=1;i<=e;i++){
    scanf("%d %d %d",&x,&y,&w);
    c[x][y]=w;
}
for(int i=1;i<=v;i++){
    for(int j=1;j<=v;j++){
        printf("%d\t",c[i][j]);
    }printf("\n");
}4
floyd(c,v);
for(int i=1;i<=v;i++){
    for(int j=1;j<=v;j++){
        printf("%d\t",c[i][j]);
    }printf("\n");
}
for (int i=1;i<=v;i++){
    for(int j=1;j<=v;j++){
        if (i!=j)
            printf(" from %d to %d is %d",i,j,c[i][j]);
        printf("\n");
    }
}
}
