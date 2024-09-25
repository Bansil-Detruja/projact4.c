#include <stdio.h>

int main() {

    int coulam;

     printf("Enter : ");
    scanf("%d",&coulam);

    int ayyr[coulam];

    printf("Enter alimants : \n");
    for(int i=0;i<coulam;i++){
        printf("a[%d]=",i);
        scanf("%d",&ayyr[i]);

    }

    printf("Negative elements from an Array : ");

     for(int j=0;j<coulam;j++){

        if(ayyr[j] < 0){
            printf("%d ",ayyr[j]);
        }else{
        printf("none");
        break;
        }

     }

return 0;

}
