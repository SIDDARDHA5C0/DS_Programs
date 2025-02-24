#include<stdio.h>
#include<stdlib.h>
int count=0,x[50];
int place(int pos){
for (int i=0;i<pos;i++){
    if(x[i]==x[pos]||(abs(x[i]-x[pos])==abs(i-pos))) return 0;
}
return 1;
}
int printboard(int n){
count++;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(x[i]==j){
            printf("Q%d\t",i);
        }
        else{
            printf("*\t");
        }

    }
    printf("\n");
}
}
void queen (int n){
int k=1;
x[k]=0;
while(k!=0){
    x[k]=x[k]+1;
    while (x[k]<=n && !place(k)) x[k]++;
    if (x[k]<=n){
        if( k==n) printboard(k);
        else{
            k++;
            x[k]=0;
        }}
        else k--;
    }
}

void main(){
printf("Enter your number");
int a;
scanf("%d",&a);
queen(a);
printf("The possible values are %d",count);
}
