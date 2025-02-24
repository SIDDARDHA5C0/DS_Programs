#include<stdio.h>
int maxer(int p1[], int n){
int max=p1[0];
for (int i=0;i<n;i++){
    if(max<p1[i])
        max=p1[i];}
for (int i=0;i<n;i++){
    if (max==p1[i]){
        p1[i]=0;
        return i;}}}
 void main(){
 printf("Enter the sack size");
 int sack=0,n;
 scanf("%d",&sack);
 printf("Enter no of weights");
 scanf("%d",&n);
 printf("Enter the weights and profits");
 int w[n],p[n],pc[n],p1[n], w1[n],p2[n];
 for (int i=0;i<n;i++){
    scanf("%d %d",&w[i],&p[i]);
    pc[i]=p[i]/w[i];
    p1[i]=p[i];
    printf(",\n");
 }

for (int i=0;i<n;i++){
    int j=maxer(pc,n);
    printf("j is %d\n",j);
   w1[i]=w[j];
   p2[i]=p[j];}
    for (int i=0;i<n;i++)
   printf("%d  %d",w1[i],p2[i]);
int key[n]; float sum=0;
for (int i=0;i<n;i++)
   printf("\n%d  %d\n",w1[i],p2[i]);
   for (int i =0;i<n;i++){
    if (sack>0 && w1[i]<=sack){
        sum+=p2[i];
        key[i]=1;
        sack-=w1[i];}
    else {
        if (sack>0){
         //    printf("%d, %d %d %d %d",sack,w1[i],p2[i],sack/w1[i],p2[i]*(sack/w1[i]));
           //  printf((float)p2[i]*((float)sack/(float)w1[i]));
            printf("%f",sum);
    sum+=((float)p2[i]*((float)sack/(float)w1[i]));
     printf("%f",sum);
    key[i]=(sack/w1[i]);
    break;}}}
   printf("the key is:-<");
  for (int i=0;i<n;i++){
    printf("%d\t",key[i]);}
printf("The sum is %f",sum);
 }
