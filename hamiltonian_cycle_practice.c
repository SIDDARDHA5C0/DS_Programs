#include<stdio.h>
int g[10][10],x[10],n=0,c=0;
void main(){
    printf("Enter your vertices");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n;j++)
            scanf("%d",&g[i][j]);
    }
    for(int i=1;i<=n;i++) x[i]=0;
    x[1]=1;
    hamiltonian(2);
    if(c==0){
        printf("no such element s");
    }

}
void hamiltonian(int k){
while(1){
        nextnode(k);
    if(x[k]==0) return;
    if(k==n){
        c=c+1;
        for(int j=1;j<=n;j++)
            printf("%d",x[j]);

    }
    else hamiltonian(k+1);
}
}
void nextnode(int k){
while(1){
int j;
        while(1){
    x[k]=(x[k]+1)%(n+1);
  if (x[k]==0) return;
    if (g[x[j-1]][x[j]]!=0){
        for(int j=1;j<n;j++)
            if(x[k]==x[j]) break;
    if(j==k){
        if(k<n || (k==n)&&g[x[k]][1]!=0)
            break;
    }

    }}
}
}
