#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void warshall(int a[10][10],int n){
for(int k=0;k<=n;k++){
for(int i=0;i<=n;i++){
for(int j=0;j<=n;j++){
a[i][j]=a[i][j] || a[i][k] && a[k][j];
}
}
}
}
int main()
{ int n,mat[10][10];
printf("Enter the number of vertices\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&mat[i][j]);
}}
printf("The matrix is ");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
printf("%d",mat[i][j]);
}
printf("\n");}
warshall(mat,n);
printf("The adjecency matrix is");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
printf("%d",mat[i][j]);
}
printf("\n");}

    return 0;
}
