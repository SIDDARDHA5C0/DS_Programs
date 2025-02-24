#include <stdio.h>
#include <string.h>
int min(int a,int b,int c){
if (a<b && a<c) return a;
else if (b<a && b<c) return b;
else  if (c<a &&c<b)return c;
if (a==b &&a<c) return a;
if (a==c && a<b) return a;
}
void main(){
printf("Enter the size of your strings\n");
int a,b;
scanf("%d %d",&a,&b);
char str1[a],str2[b];
printf("Enter your Strings\n");
scanf("%s %s",&str1,&str2);

printf("%d %d %s %s",a,b,str1,str2);
//printf(" hello %zu",strlen(str1));

//printf("%c",str1[1]);
//if( str1[0]==str2[0]){
  //  printf("hi\n");
//}
int mat[strlen(str1)+1][strlen(str2)+1];
for (int i=0;i<strlen(str1)+1;i++){
    for(int j=0;j<strlen(str2)+1;j++){
        if (i==0)
            mat[i][j]=j;
       else if (j==0)
            mat[i][j]=i;
        else if (i==0 && j==0)
            mat[i][j]=0;
        else{
            if (str1[i-1]==str2[j-1]){
                    mat[i][j]=mat[i-1][j-1];
                    printf(" \n%d %d\n",mat[i][j],mat[i-1][j-1]);}
                    //printf("hialelrsdfasdfadfasf");}
            else
                mat[i][j]= 1+min(mat[i-1][j-1],mat[i][j-1],mat[i-1][j]);
        }
    }
  //  printf("\n%d %d %d %d\n",mat[i][0],mat[i][1],mat[i][2],mat[i][3]);
}
for (int i=0;i<strlen(str1)+1;i++){
    for(int j=0;j<strlen(str2)+1;j++){
            printf("%d\t",mat[i][j]);}
    printf("\n");
    }
printf(" \n the minimum number of operations required are %d",mat[strlen(str1)][strlen(str2)]);
}
