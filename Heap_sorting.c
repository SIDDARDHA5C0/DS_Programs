#include<stdio.h>
#define MAX 50
void build_heap(int [],int ,int);
void heapsort(int a1[MAX],int n ){
int i,temp;
for(i=n/2;i>0;i--)
    build_heap(a1,i,n);
for(i=n;i>0;i--){
    temp=a1[1];
    a1[1]=a1[0];
    a1[0]=temp;
    build_heap(a1,1,i-1);
}
}
void build_heap(int a1[MAX],int root,int bottom){
int temp,maxc,done=0;
while(root*2<=bottom&&!done){
    if(root*2==bottom)
        maxc=root*2;
    else{
        if(a1[root*2]<a1[root*2+1])
            maxc=root*2;
        else
            maxc=root*2+1;
    }
    if(a1[maxc]>a1[root]){
     temp=a1[root];
     a1[maxc]=a1[root];
     a1[root]=temp;
     root=maxc;
    }
    else
 done=1;

 }

}
void main(){
int a,b,c,d;
printf("Enter your size");
scanf("%d",&a);
int a1[a];
printf("Enter your number one by one");
for(int i=1;i<=a;i++){
    scanf("%d",&a1[i]);
}
printf("The values before  :");
for(int i=1;i<=a;i++){
    printf("%3d",a1[i]);
}
heapsort(a1,a);
for(int i=1;i<=a;i++)
    printf("%3d",a1[i]);
}
