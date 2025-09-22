// #include <stdio.h>
// int main() {
//     int a;
//     scanf("%d", &a);
//     switch(a > 5)
//         case 1;
//         printf("The input value is 1");
//         break;
// }
// #include <stdio.h>
// void change(int *x) {
//     *x = 10000;
// }

// int main() {
//     int a = 5;
//     change(&a);
//     printf("%d\n", a);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a[10], i, sum = 0;
//     float avg;
//     printf("Enter 10 numbers: ");
//     for(i = 0; i <= 9; i++) {
//         scanf("%d", &a[i]);
//     }

//     for(i = 0; i <= 9; i++) {
//         sum = sum + a[i];
//     }

//     avg = sum / 10.0;
//     printf("Average is %f", avg);
//     return 0;


// }


// Function call by passing Values

// #include <stdio.h>
// void input(int b[]);

// void input(int b[]) {
//     int i;

//     printf("Enter 10 numbers: ");
//     for(i = 0; i <= 9; i++) {
//         scanf("%d", &b[i]);
//     }
// }


// int main() {
//     int a[10];
//     input(a);
//     printf("The 6th position of the number is: %d", a[7]);
//     return 0;
// }


// Pointer concepts

#include <stdio.h>
int main() {
int x = 5;
int *j;

j = &x;
printf("%d %d %d %d\n", j, &x, x);
printf("%d %d %d %d", *j, *&x, &j);
}