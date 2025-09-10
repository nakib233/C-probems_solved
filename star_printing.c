// Star triangle 

// #include <stdio.h>
// int main() {
//     int i, j;
//     for(i = 1; i <= 4; i++) {
//         for(j = 1; j <= 7; j++) {
//             if(j >= 5-i && j <= 3+i) {
//                 printf("%d", i);
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



// Bme'22 CT question solve 1

// pascals Triangle

// #include <stdio.h>
// int main() {
//     int i, j;
//     int number;
//     for(i = 1; i <= 4; i++) {
//         for(j = 1; j <= 7; j++) {
//             if(j >= i && j <= 2+i) {
//                 number = (j >= i && j <= 2+i);
//                 printf("%d", number);
               
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= n - i; j++) {
            printf("   ");  
        }

       
        for (j = 1; j <= i; j++) {
            printf("%d", j); 
        }

        
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

       
        printf("\n");
    }

    return 0;
}

