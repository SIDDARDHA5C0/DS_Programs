#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//#include<cohino.h>
#define M 50
int binary_search(int [],int ,int);
void bubble_sorting(int [],int);
void selection_sorting(int [],int);
void insertion_sorting(int [],int);
void quick_sorting(int [],int,int);
void quick_sorting(int a1[M],int lb,int ub){
int temp,right=ub,left=lb,key=lb;
if(left!=right){
    while(a1[key]<a1[right]&&(left!=right))
        right--;
    if(left!=right){
        temp=a1[right];
        a1[right]=a1[key];
        a1[key]=temp;
        key=right;
    }
    while(a1[key]>a1[left]&&(left!=right))
        left++;
    if(left!=right){
        temp=a1[left];
        a1[left]=a1[key];
        a1[key]=temp;
        key=left;
    }
    if(lb<key)
        quick_sorting(a1,lb,key-1);
    if(key<ub)
        quick_sorting(a1,key+1,ub);
}
}
void insertion_sorting(int a1[M],int n){
int j,temp;
for(int i=1;i<n;i++){
    j=i-1;
    temp=a1[i];
    while(temp <a1[j]&& j>=0){
        a1[j+1]=a1[j];
        j--;
    }
    a1[j+1]=temp;
}
}
void selection_sorting(int a1[M],int n){
int temp,min;
for(int i=0;i<n;i++){
        min=i;
    for(int j=i+1;j<n;j++){
        if(a1[i]>a1[j])
        min=j;

    }
if(min!=i){
    temp=a1[min];
    a1[min]=a1[i];
    a1 [i]=temp;
}
}


}
void bubble_sorting(int a1[M],int n){
int temp;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a1[i]>a1[j]){
            temp=a1[i];
            a1[i]=a1[j];
            a1[j]=temp;
        }
    }
}
return;
}
int binary_search(int a1[M],int n,int k){
int lb,ub,mid;
lb=0;ub=n;
while(lb<=ub){
    mid=(lb+ub)/2;
    if(a1[mid]==k)
        return mid;
    else{
        if(a1[mid]<k)
            ub=mid-1;
        else
            lb=mid+1;
    }
}
return -1;
}
void main(){
printf("\n Enter your number");
int a,b,c,d,e,f;
printf("1.searching and sortings\n2.stack,queue,linkedList\n3.Trees\n4.graphs\n5.hashing");
scanf("%d",&a);
int a1[M];
switch(a){
case 1:
    printf("1.binary search\n2.bubble sorting\n3.selection sorting\n4.insertion sorting\n5.quick sorting\n6.merge sorting\n7.radix sorting\n8.heap sorting");
    printf("\n Enter your option");
    scanf("%d",&d);
    switch(d){
    case 1:
    printf("\nEnter size of your array");
    scanf("%d",&b);
  //  int a1[b];
    printf("\n Enter your values one by one");
    for(int i=0;i<b;i++){
        scanf("%d",&a1[i]);
    }
    printf("\n Enter your number");
    scanf("%d",&c);
    printf("The number is present at index %d",binary_search(a1,b,c));
        break;
    case 2:
      printf("\nEnter size of your array");
    scanf("%d",&b);
    //int a2[b];
    printf("\n Enter your values one by one");
    for(int i=0;i<b;i++){
        scanf("%d",&a1[i]);
    }
    printf("\n Array before sorting");
    for(int i=0;i<b;i++)
        printf("%d",a1[i]);
    bubble_sorting(a1,b);
    printf("\n Array after sorting");
    for(int i=0;i<b;i++)
        printf("%d",a1[i]);
    break;
case 3:
  printf("\nEnter size of your array");
    scanf("%d",&b);
    //int a2[b];
    printf("\n Enter your values one by one");
    for(int i=0;i<b;i++){
        scanf("%d",&a1[i]);
    }
    printf("\n Array before sorting");
    for(int i=0;i<b;i++)
        printf("%d",a1[i]);
    selection_sorting(a1,b);
    printf("\n Array after sorting");
    for(int i=0;i<b;i++)
        printf("%d",a1[i]);
    break;
case 4:
      printf("\nEnter size of your array");
    scanf("%d",&b);
    //int a2[b];
    printf("\n Enter your values one by one");
    for(int i=0;i<b;i++){
        scanf("%d",&a1[i]);
    }
    printf("\n Array before sorting");
    for(int i=0;i<b;i++)
        printf("%d",a1[i]);
    insertion_sorting(a1,b);
    printf("\n Array after sorting");
    for(int i=0;i<b;i++)
        printf("%d",a1[i]);
    break;
case 5:
      printf("\nEnter size of your array");
    scanf("%d",&b);
    //int a2[b];
    printf("\n Enter your values one by one");
    for(int i=0;i<b;i++){
        scanf("%d",&a1[i]);
    }
    printf("\n Array before sorting");
    for(int i=0;i<b;i++)
        printf("%d",a1[i]);
    quick_sorting(a1,0,b);
    printf("\n Array after sorting");
    for(int i=0;i<b;i++)
        printf("%d",a1[i]);
    break;

}




}
}
