#include <stdio.h>

int main() {
   int row,col;

   printf("Enter row : ");
   scanf("%d",&row);

   printf("Enter col : ");
   scanf("%d",&col);

   int array[row][col];
   int transpose[row][col];

   printf("Enter elmant : \n");

   for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           printf("a[%d][%d]= ",i,j);
           scanf("%d",&array[i][j]);
       }
   }

   printf("\nThe transpose matrix of an array : \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transpose[j][i]=array[i][j];
        }
    }
