#include<stdio.h>
int R = 10;
int C = 10;

int print2Darray(int row, int col, int arr[R][C]){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 1;
}
int main(){

    int arr[][2] = {{1,2},{3,4},{4,5},{5,6},{6,7}};
    print2Darray(5,2,arr);

}

