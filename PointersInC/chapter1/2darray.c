#include <stdio.h>
// const int M = 3;
// const int N = 3;

void print(int arr[][3])
{
    int i, j;
    int M = 4;
    for (i = 0; i < M; i++){
      for (j = 0; j < 3; j++){
        printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {76,1,8}};
    // print(arr);
    printf("%u ",arr[1]);
    printf("%u ",(arr[1]+1));
    printf("%d ",*(arr[1]+1));
    return 0;
}