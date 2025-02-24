#include<stdio.h>

int s[20],d,n,set[20],count=0,flag=0;
int display(int count){
printf("{");
for(int i=0;i<count;i++)
    printf("%d ",set[i]);
printf("}");
}
void subset(int sum,int i){

if (sum==d){
    flag=1;
    display(count);
    return;
}
if (sum>d|| i>=n){
    return;
}
else{

    set[count]=s[i];
    count++;
    subset(sum+s[i],i+1);
    count--; //backtracking
    subset(sum,i+1);
}

}
void main(){
printf("Enter your number");
scanf("%d",&n);
printf("Enter your sum");
scanf("%d",&d);
for(int i=0;i<n;i++)
    scanf("%d",&s[i]);
subset(0,0);
if (flag==0) printf("no subsets are there");
}
