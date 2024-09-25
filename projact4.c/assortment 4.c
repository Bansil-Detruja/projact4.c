#include <stdio.h>

int main() {

   int row,col;

    printf("Enter Row : ");
    scanf("%d",&row);

    printf("Enter Coulam : ");
    scanf("%d",&col);

    printf("Enter Elemantd : \n");

    int array[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    int row_num;

    printf("Enter Row number : ");
    scanf("%d",&row_num);

    if(row_num<row){

        printf("Elemants number %d: ",row_num);

        int row_sum=0;

        for(int i=0;i<row;i++){
            printf("%d, ",array[row_num][i]);
            row_sum=row_sum+array[row_num][i];
        }
        printf("\nsum of row %d: %d\n",row_num,row_sum);
    }else{
        printf("invelod number");
    }

    int colnum;

    printf("\nEnter coulam number : ");
    scanf("%d",&colnum);

    if(colnum<col){
        printf("Elemants coulam %d: ",colnum);

    int colsum=0;

        for(int j=0;j<col;j++){
            printf("%d, ",array[j][colnum]);
            colsum=colsum+array[j][colnum];

    }
    printf("\nsum of coulam %d: %d\n",colnum,colsum);

 }else{
     printf("invelad number ");
 }

}

