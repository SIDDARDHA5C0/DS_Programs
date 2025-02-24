
#include<stdio.h>
int void min(int a1[]){
int small=a1[0],size=sizeof(a1)/sizeof(int);
for(int i=1;i<size;i++){
if(small>a1[i])
    small=a1[i];
}
return small;
}
int index(int a1[],int x){
    int size=sizeof(a1)/sizeof(int);
for(int i=0;i<size;i++){
    if(x==a1[i])
        return i;
}
}
void main(){
int a;
printf("Enter no of process");
scanf("%d",&a);
int art[a],bt[a],st[a],ct[a],wt[a],tat[a];
for(int i=0;i<a;i++){
printf("Enter your arrival time of the process %d",i+1);
scanf("%d",&art[i]);
}
for(int i=0;i<a;i++){
printf("Enter your burst time of the process %d",i+1);
scanf("%d",&bt[i]);
}
int b1=min(art);
int c1=index(art,b1);



}
