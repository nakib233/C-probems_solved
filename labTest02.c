//  #include <stdio.h>
//  int main() {
//     int marks[5] = {67, 74, 90, 83, 85};
//     for(int i = 0; i <= 4; i++) {
//         printf("%d ", marks[i]);
//     }
//  }

// #include <stdio.h>
// int main() {
//     int elements[100];
//     for(int i = 0; i < 10; i++) {
//         printf("Enter elements one by one: ");
//         scanf("%d", &elements[i]);
//     }
//      for(int i = 9; i >= 0; i--) {
//         printf("%d ", elements[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char str[6];
//     int num = 0;
//     printf("Enter a string containing a number: ");
//     scanf("%s", str);
//     for(int i = 0; str[i] != '\0'; i++) {
//         if(str[i] >= 48 && str[i] <= 57) {
//             num = num*10 + (str[i] - 48);
//         }
//         else{
//             printf("Not a valid string\n");
//         }
//     }
//     printf("The number is %d\n", num);
//     return 0;
// }

// // Matrix Multiplication

// #include <stdio.h>
// int main() {
//     int A[3][3], B[3][3], C[3][3], i,j,k,sum;
//     printf("Enter 9 numbers for first matrix: \n");
//     for(int i = 0; i <= 2; i++) {
//         for(int j = 0; j <= 2; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }
//     printf("Enter 9 numbers for second matrix: \n");
//     for(int i = 0; i <= 2; i++) {
//         for(int j = 0; j <= 2; j++) {
//             scanf("%d", &B[i][j]);
//         }
//     }
//     for(i = 0; i <= 2; i++) {
//         for(j = 0; j <= 2; j++) {
//             sum = 0;
//             for(int k = 0; k <= 2; k++) {
//                 sum = sum + A[i][k]*B[k][j];
//             }
//             C[i][j] = sum;
//         }
// }
//   for(int i = 0; i <= 2; i++) {
//         for(int j = 0; j <= 2; j++) {
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }
// }

// The sum of Diagonal Element of a matrix
