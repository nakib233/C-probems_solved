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

// 11. Write a C program to print all alphabets from a to z.
#include <stdio.h>
int main() {
    char c = 'a';
    char c1 = 'z';
    while(1) {
        printf("%c \n", c);
        c++;
        if(c == c1) {
            printf("%c \n", c);
            break;
        }
    }
    
}