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
{ int n,a[10][10];
printf("Enter the number of vertices\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&a[i][j]);
}}
printf("The matrix is ");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
printf("%d",a[i][j]);
}
printf("\n");}
warshall(a,n);
printf("The adjecency matrix is");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
printf("%d",a[i][j]);
}
printf("\n");}

    return 0;
}
