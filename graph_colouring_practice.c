#include<stdio.h>
int g[20][20],x[10],sol,m,n,c=0;
void graphcol(int k){
int i;
while(1){
        nextnode(k); //checking for other colour
    if (x[k]==0) return; // check is color assigned or not
    if (k==n){// if all vertexes are filled
        c=1;
        for(int j=1;j<=n;j++){ //print edges
            printf("%d ",x[j]);
        }
        sol++;
        printf("\n");
    }
    else graphcol(k+1);// got for next alternative
}
}
void nextnode(int k){
    int j;
    while(1){
x[k]=(x[k]+1)%(m+1); // adding other colour
if (x[k]==0) return; //check empty or not
for(j=1;j<=n;j++) //check other vertices too
    if (g[k][j]==1 &&x[j]==x[k])
    break;
if (j==(n+1)) return; if color found
    }}
void main(){
    printf("Enter your vertices");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&g[i][j]);
        }
    }
    // scanf("%d",&n);
    for(m=1;m<=n;m++){
        if (c==1) break;
        else graphcol(1);//starting with 1 node
    }
    printf("chromatic number is%d\n",m-1);
    printf(" no of possible solutions are %d",sol);
    scanf("%d",&n);
}


