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
//     printf("The reverse of the digits of %d is %d", num, newNum);
// }

// //20. Write a C program to print the multiplication table of any number.
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= 100; i++) {
//         printf("%d x %d = %d \n", n, i, n * i);

//     }
// }


//21. Write a C program to enter a number and print it in words.

// #include <stdio.h>
// int main() {
//     int n = 1234;
//     int num = n;
//     int n1,n2, mul = 1000;
//     int newNum = 0;
//     while(n) {
//         n1 = n % 10;
//         n = n / 10;
//         switch (n1) {
//             case  4:
//             printf("four");
//             break;

//             case 3:
//             printf("three");
//             break;
//         }
           
//     }
// }
// #include <stdio.h>

// int main() {
//     int number, currentDigit, reversed = 0;

//     printf("Enter a number: ");
//     scanf("%d", &number);

    // Reverse the number to print words in correct order
//     int tempNum = number;
//     while (tempNum > 0) {
//         reversed = reversed * 10 + (tempNum % 10);
//         tempNum /= 10;
//     }

//     printf("In words: ");
//     while (reversed > 0) {
//         currentDigit = reversed % 10;
//         switch (currentDigit) {
//             case 0: printf("zero "); break;
//             case 1: printf("one "); break;
//             case 2: printf("two "); break;
//             case 3: printf("three "); break;
//             case 4: printf("four "); break;
//             case 5: printf("five "); break;
//             case 6: printf("six "); break;
//             case 7: printf("seven "); break;
//             case 8: printf("eight "); break;
//             case 9: printf("nine "); break;
//         }
//         reversed /= 10;
//     }

//     printf("\n");
//     return 0;
// }

// 25.Factorial of a number
// #include <stdio.h>
// int main () {
//     int num;
//     printf("Enter a value: ");
//     scanf("%d", &num);
//     int fact = num;
//     if(num == 0) {
//         printf("The factorial of 0 is 1.");
//     }
//     for(int i = 1; i <= num; i++) { 
//         if(i == num ) {
//             break;
//         }
//         fact = fact * (num - i);
        
//     }
//     printf("The factorial is : %d\n", fact);
// }

// #include <stdio.h>

// int main() {
//     int number;
//     unsigned long long factorial = 1; // use long long to handle large results

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (number < 0) {
//         printf("Factorial of a negative number doesn't exist.\n");
//     } 
//     else {
//         for (int i = 1; i <= number; i++) {
//             factorial *= i;
//         }
//         printf("Factorial of %d = %llu\n", number, factorial);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int number;
//     int factorial = 1;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     if(number < 0) {
//         printf("Factorial of a negative number doesn't exist.");
//     }
//     else{
//         for(int i = 1; i <= number; i++) {
//             factorial = factorial * i;

//         }
//         printf("Factorial of %d is %d", number, factorial);
//     }
//     return 0;
// }

// #include <stdio.h>
// int l = 1;
// int main() {
//     for(int i = 1; i <= 4;i++) {
//         int k = 1;
//         for(int j = 1; j <= 7; j++) {
//             if(j >= 5 - i && j <= 3 + i && k) {
//                 printf("%d", l);
//                 k = 0;
//             }
//             else{
//                 printf(" ");
//                 k = 1;
//             }
//         }
//         printf("\n");
//         l++;
//     }
// }

// #include <stdio.h>
// int main() {
//     int k = 1;
//     for(int i = 1; i <= 3; i++) {
//         for(int j = 1; j <= 3; j++) {
//             if(j >= 4-i) {
//                 printf("%d", k);
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//         k++;
//     }
//     int l = 1;
//     for(int i = 4; i <= 5; i++) {
//         for(int j = 1; j <= 3; j++) {
//             if(j >= i - 2) {
//                 printf("%d", l);
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//         l++;
//     }
// }

// #include <stdio.h>
// int main() {
//     for(int i = 1; i <= 6; i++) {
//         for(int j = 1; j <=4; j++) {
//             if(j <= i) {
//                 printf("*");
//             }
//             else if(i == 4 && j <= 6 - i) {
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
//     int a = 3, b = -1, c;
//     int fibo = 6;
//     int sum = 0;
//     for(int i = 1; i <= fibo; i++) {
//         c = a + b;
//         printf("%d ", c);
//         sum = sum + c;
//         a = b;
//         b = c;
//     }
//     printf("The sum of fib is %d", sum);
// }

// #include <stdio.h>
// int main() {
//     int x,i;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     for(i = 2; i <= x -1; i++) 
//         if(x % i == 0) 
//             break;
//     if(i == x) 
//         printf("%d is a Prime Number", x );
//     else
//         printf("%d isn't a Prime Number", x);
// }

// Program to find Prime Number or Not 

// #include <stdio.h>
// int main() {
//     int x, i;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     for(i = 2; i <= x - 1; i++) {
//         if(x % 2 == 0) {
//             break;
//         }
//     }
//     if(x == i) {
//         printf("%d is a prime number", x);
//     }
//     else{
//         printf("%d isn't a prime number", x);
//     }
// }

// Program to find all prime factors of a number
// #include <stdio.h>
// int main() {
//     int i;

//     printf("ASCII characters and their values:\n");
//     printf("----------------------------------\n");

//     for(i = 0; i <= 255; i++) {
//         printf("%d : %c\n", i, i);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(i = 2; i <= n-1; i++) {
//         if(n % i == 0) {
//             break;
//         }
//     }
//     if(i == n) {
//         printf("%d is a Prime Number", n);
//     }
//     else{
//         printf("%d isn't a Prime Number", n);
//     }
// LAB 05 PROBLEMS------------------------->

Problem 01:Write a program to search 15 in the followings
number[5]={5,10,15,20,37}.
number[3] = {3,4,9}

#include <stdio.h>
int main() {
    int number[5] = {5, 10, 15, 20, 37};
    int number2[3] = {3, 4, 9};
    for(int i = 0; i <= 4; i++) {
        if(number[i] == 15) {
            printf("15 is present in the array.");
            break;
        }
    }
}

Problem 02: Write a program to copy only the odd numbers from num[6]={1,2,3,4,5,6} to Odd[3].
Code:

#include <stdio.h>
int main() {
    int num[6] = {1,2,3,4,5,6};
    int odd[3];
    for(int i = 0,j = 0; i <= 5, j <= 2; i++) {
        if(num[i] % 2 != 0) {
            odd[j] = num[i];
            j++;
        }
    }
    printf("The odd numbers are: ");
    for(int i = 0; i <= 2; i++) {
        printf("%d ", odd[i]);
    }
}

Output:
The odd numbers are: 1 3 5 

// #include <stdio.h>
// int main() {
//     int A[4][5] = {
//     {7, 4, 0, 3, 5},
//     {3, 8, 5, 7, 1},
//     {2, 4, 6, 8, 10},
//     {1, 3, 5, 7, 9}
//     };

//     int B[4][5] = {
//     {1, 4, 9, 3, 5},
//     {5, 3, 9, 11, 1},
//     {10, 4, 15, 18, 10},
//     {3, 5, 5, 12, 9}
//     };

//     printf("The output of addition is: \n");
//     for(int row = 0; row <= 3; row++) {
//         for(int col = 0; col <= 4; col++) {
//             printf("%d + %d = %d\t", A[row][col], B[row][col], A[row][col]+B[row][col]);
//         }
//         printf("\n");
//     }



//     printf("The output of subtraction is: \n");
//     for(int row = 0; row <= 3; row++) {
//         for(int col = 0; col <= 4; col++) {
//             printf("%d - %d = %d\t", A[row][col], B[row][col], A[row][col]-B[row][col]);
//         }
//         printf("\n");
//     }
// }

// Problem 03: Write a program to do Matrix Multiplication.
// Code:
// #include <stdio.h>
// int main() {
//     int A[4][5] = {
//     {7, 4, 0, 3, 5},
//     {3, 8, 5, 7, 1},
//     {2, 4, 6, 8, 10},
//     {1, 3, 5, 7, 9}
//     };

//     int B[4][5] = {
//     {1, 4, 9, 3, 5},
//     {5, 3, 9, 11, 1},
//     {10, 4, 15, 18, 10},
//     {3, 5, 5, 12, 9}
//     };

//     printf("The output of addition is: \n");
//     for(int row = 0; row <= 3; row++) {
//         for(int col = 0; col <= 4; col++) {
//             printf("%d * %d = %d\t", A[row][col], B[row][col], A[row][col]*B[row][col]);
//         }
//         printf("\n");
//     }
// }


// Problem 05:Write a program to determine Transpose Matrix.
// Code:
#include <stdio.h>
int main() {
    int row, col;
    int temp;
    printf("Enter row and columns: ");
    scanf("%d %d", &row, &col);
    int mat[10][10];
    int mat2[10][10];
    for(int i = 0; i <= row;i++) {
        for(int j = 0; j <= col; j++) {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
       for(int i = 0; i <= row;i++) {
        for(int j = 0; j <= col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    temp = row;
    row = col;
    col = temp;
     for(int i = 0; i <= row;i++) {
        for(int j = 0; j <= col; j++) {
            mat2[i][j]  = mat[j][i];
        }
        printf("\n");
    }
  
       for(int i = 0; i <= row;i++) {
        for(int j = 0; j <= col; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
}

