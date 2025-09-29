#include <stdio.h>
// int main() {
//     int i;
//     for(i = 1; i <= 100; i++) {
//         printf("%d\n", i);
//     }
    
// }

// int main() {
//     int i = 1;
//     for(;;) {
//          printf("%d\n", i);
//          i++;
//     }
// }

// int main() {
//     int i;
//     int sum  = 0;
//     for(i = 1; i<= 40; i++) {
//         if(i % 3 == 0) {
//             sum = sum + i*i;

//         }
       
//     }
//      printf("The sum is : %d\n", sum);

// }

// int main() {
//     int i;
//     double mul = 1;
//     for(i = 1; i <= 50; i++) {
//         mul = mul * i;
//     }
//     printf("%lf\n", mul);
// }

// int main() {
//     int n1, n2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &n1, &n2);
//     for(int i = 1,j = i + 1; i <= n1 && j <= n2; i++, j++) {
//         printf("%d\n", i * j);
//     }
// } 

// Fibonacci Series
int main() {
    int n = 5;
    int sum = 0;
    if(n == 0 ) {
        printf("The series is : 0");
    }
    else if(n == 1) {
        printf("The series is : 0 1");
    }
    else {
        for(int i = 1; i <= n; i++) {

            sum = sum + i;
            printf("%d ", sum);
        }
        
    }
}