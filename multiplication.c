// Problem 05:Write a program to determine Transpose Matrix.
// Code:
// #include <stdio.h>
// int main() {
//     int row, col;
//     int temp;
//     printf("Enter row and columns: \n");
//     scanf("%d %d", &row, &col);
//     int mat[10][10];
//     int mat2[10][10];
//     for(int i = 0; i <= row;i++) {
//         for(int j = 0; j <= col; j++) {
//             printf("mat[%d][%d] = ", i, j);
//             scanf("%d", &mat[i][j]);
//         }
//     }
//     printf("\n");
//     printf("\n");
//        for(int i = 0; i <= row;i++) {
//         for(int j = 0; j <= col; j++) {
//             printf("%d ", mat[i][j]);
//         }
//         printf("\n");
//     }
//     temp = row;
//     row = col;
//     col = temp;
//      for(int i = 0; i <= row;i++) {
//         for(int j = 0; j <= col; j++) {
//             mat2[i][j]  = mat[j][i];
//         }
//         printf("\n");
//     }
    
//     printf("The transpose matrix is : \n");
  
//        for(int i = 0; i <= row;i++) {
//         for(int j = 0; j <= col; j++) {
//             printf("%d ", mat2[i][j]);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main() {
    int sum = 0;
    int a[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(int i =
         0; i <= 2; i++) {
        for(int j = 0; j <= 2; j++) {
            if(i == j) {
                sum = sum + a[i][j];
            }
        }
    }
    printf("The summation is: %d", sum);
    return 0;
}