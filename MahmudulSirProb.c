// 11. Write a C program to print all alphabets from a to z.
// #include <stdio.h>
// int main() {
//     char c = 'a';
//     char c1 = 'z';
//     while(1) {
//         printf("%c \n", c);
//         c++;
//         if(c == c1) {
//             printf("%c \n", c);
//             break;
//         }
//     }
    
// }

// 12. Write a C program to count the number of digits in a number.
// #include <stdio.h>
// int main() {
//     int n = 1000,count = 0;
//     while(n) {
//         n = n / 10;
//         count = count + 1;
//     }
//     printf("the digit is %d", count);
// }

// 13. Write a C program to find the last digit of a given number.

// #include <stdio.h>
// int main() {
//     int n = 123423232;
//     printf("The last digit of a given number: %d", n % 10);
//     return 0;
// }
// 14. Write a C program to find the first digit of a given number.
// #include <stdio.h>
// int main() {
//     int n = 82232;
//     int n1;
//     while(n) {
//         n1 = n % 10;
//         n = n / 10;
//         if(n == 0) {
//             printf("%d", n1);
//         }
//     }
// }

// 15. Write a C program to find the sum of the first and last digits of a number.
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int n1 = n % 10;
//     int n2;
//     while(n) {
//         n2 = n % 10;
//         n = n / 10;
//         if(n == 0) {
//             break;
//         }
//     }
//     printf("The sum of the first and last digit of a number is: %d", n1 + n2);
// }

// 16. Write a C program to swap the first and last digits of a number.
// #include <stdio.h>
// int main() {
//     int n = 1234, d1, d2, d3, d4;
//     int newNum;
//     d1 = n % 10;
//     n = n / 10;
//     d2 = n % 10;
//     n = n / 10;
//     d3 = n % 10;
//     n = n / 10;
//     d4 = n % 10;
//     newNum = d1 * 1000 + d3 * 100 + d2 * 10 + d4 ;
//     printf("%d", newNum);
//     return 0;
// }

// 17. Write a C program to calculate the sum of the digits of a number.
// #include <stdio.h>
// int main() {
//     int n = 1234;
//     int num = n;
//     int n1, mul = 1;
//     while(n) {
//         n1 = n % 10;
//         n = n / 10;
//         mul = mul * n1;   
//     }
//     printf("The multiplication of the digits of %d is %d", num, mul);
// }
// 19. Write a C program to enter a number and print its reverse.
// e.x. The number 12345 should be written as 54321.

// #include <stdio.h>
// int main() {
//     int n = 1234;
//     int num = n;
//     int n1,n2, mul = 1000;
//     int newNum = 0;
//     while(n) {
//         n1 = n % 10;
//         n = n / 10;
//         n2 = mul * n1;  
//         newNum = newNum + n2; 
//         mul = mul / 10;
//     }
//     printf("The multiplication of the digits of %d is %d", num, newNum);
// }

// 20. Write a C program to print the multiplication table of any number.
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= 100; i++) {
//         printf("%d x %d = %d \n", n, i, n * i);

//     }
// }

