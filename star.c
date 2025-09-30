// #include <stdio.h>
// int main() {
//   for(int i = 1;i <= 5; i++) {
//     for(int j = 1; j <= 5; j++) {
//         if( j >= 6-i) {
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
//     }
//     printf("\n");
//   }
// }

// #include <stdio.h>
// int main() {
//     for(int i = 1; i <=5; i++) {
//         int k = 1;
//         for(int j = 1; j <= 9; j++) {
//             if(j >= 6-i && j <= 4 + i && k) {
//                 printf("*");
//                 k = 0;
//             }
//             else{
//                 printf(" ");
//                 k = 1;
//             }
//         }
//         printf("\n");
//     }

// }

// #include <stdio.h>
// int main() {
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= 9; j++) {
//             if(j <= 6-i || j >= 4 + i) {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

// }


// #include <stdio.h>
// int main() {
//     int i, j;
//     char k;
//     for(i = 1; i <= 4; i++) {
//         k = 'A';
//         for(j = 1; j <= 7; j++) {
//             if(j <= 5 - i || j >= 3 + i) {
//                 printf("%c", k);
//                 j < 4? k++ : k--;
//             }
//             else{
//                 printf(" ");
//                 if(j==4)
//                     k--;
//             }
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main() {
//     int i, j;
//     char k;
//     for(i = 1; i <= 4; i++) {
//         k = 'A';
//         for(j = 1; j <= 7;j++) {
//             if(j <= 5-i || j >= 3 + i) {
//                 printf("%c", k);
//                 j < 4? k++ : k--;
//             }
//             else{
//                 printf(" ");
//                 if(j == 4) {
//                     k--;
//                 }
//             }
//         }
//         printf("\n");
//     }
// }

// Star pattern 10
// #include <stdio.h>
// int main() {
//     for(int i = 1; i <= 4; i++) {
//         for(int j = 1; j <= 7; j++) {
//             if(j >= 5 - i && j <= 3 + i) {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//      for(int k = 5; k <= 7; k++) {
//         for(int l = 1; l <= 7; l++) {
//             if(l >= k - 3 && l <= 11-k) {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }
   

// Another Option

// #include <stdio.h>
// int main() {
//     for(int i = 1; i <= 7; i++) {
//         for(int j = 1; j <= 7; j++) {
//             if(i < 5) {
//                 if(j >= 5 - i && j <= 3 + i)
//                     printf("*");
//                 else{
//                     printf(" ");
//                 }
//             }
//                 else if(j >= i - 3 && j <= 11-i) {
//                     printf("*");
//                 }
//                 else{
//                     printf(" ");
//                 } 
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main() {
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= 8; j++) {
//             if(i == 1 || i == 5) {
//                 printf("*");
//             }
//             else if(i >= 2 && i <= 4 && (j == 1 || j == 8)){
//                 printf("*");
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>
// int main() {
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= 5; j++) {
//             if((i == 5) || (j == 1) || (i == j)) {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main() {
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= 5; j++) {
//             if(i == 5 || j == 5 || j == 6-i) {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main() {
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= 5; j++) {
//             if(i == 1 || j == 1 || j == 6-i) {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main() {
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= 10; j++) {
//             if(i == 5 || i == 1 || j == 1|| j== 10) {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main() {
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= 5; j++) {
//             if(i == 1 || j == 5 || i == j) {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

// Problem No.13

// #include <stdio.h>
// int main() {
//     int k = 1;
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= 5; j++) {
//             if(j <= i) {
//                 printf("%d", k);    
//             }
//             else{
//                 printf(" ");   
//             }
//         }
//         printf("\n");
//         k++;
//     }
// }

// Problem No.14
// #include <stdio.h>
// int main() {
//     int k = 1;
//     for(int i = 1; i <= 4; i++) {
//         for(int j = 1; j <= 4; j++) {
//             if(j <= i) {
//                 printf("%d ", k);
//                 k++;  
//             }
//             else{
//                 printf(" ");   
//             }
//         }
//         printf("\n");
        
//     }
// }

// Problem No.16

#include <stdio.h>
int main() {
    int l = 1;
    for(int i = 1; i <= 5; i++) {
        int k = 1;
        for(int j = 1; j <= 9; j++) {
            if(j >= 6-i && j <= 4 + i && k) {
                printf("%d", l);
                k = 0;
            }
            else{
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
        l++;
    }
}

// Problem 15:
// #include <stdio.h>
// int main() {
//     int l = 1;
//     for(int i = 1; i <= 4; i++) {
//         int k = 1;
//         for(int j = 1; j <= 9; j++) {
//             if(j >= 6-i && j <= 4 + i && k) {
//                 printf("%d", l);
//                 k = 0;
//                 l++;
//             }
//             else{
//                 printf(" ");
//                 k = 1;
//             }
//         }
//         printf("\n");
//     }
    
// }