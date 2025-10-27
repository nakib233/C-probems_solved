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
// #include <stdio.h>
// int main() {
//     int sum = 0;
//     int A[4][4] = {
//         {3,4,5,6},
//         {7,8,9,10},
//         {11,12,13,14},
//         {15, 16, 17, 18}
//     };
//     for(int i = 0; i <= 3; i++) {
//         for(int j = 0; j <= 3; j++) {
//             if((3 - i) == j) {
//                 sum = sum + A[i][j];
//             }
//         }
//     }
//     printf("The result is : %d", sum);
// }

// Write a program to find length of a string using library function strlen( ).
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char name[] = "Tasnim Ahmed";
//     int length = strlen(name);
//     printf("Length: %d", length);
// }

// #include <stdio.h>
// #include <math.h>
// int main() {
//     double base = 5, exponent = 3, result;
//     result = pow(base, exponent);
//     printf("%.0f raised to the power of %.0f is %.0f\n", base, exponent, result);
// }

// Write a program to find length of a string without using library function strlen( ).
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char name[] = "Nakibul Hasan Nakib";
//     int count = 0;
//     for(int i = 0; name[i] != '\0'; i++) {
//         count = count + 1;
//     }
//     printf("The length of the string is : %d\n", count);
//     printf("The length of the string is : %d", strlen(name));
// }

// Write a program to concatenate two strings.
// #include <stdio.h>
// #include <string.h>
// void main() {
//     char info[] = "My name is ";
//     char name[] = "Nakibul Hasan Nakib";
//     strcat(info, name);
//     printf("info = %s", info);
// }

// Write a program to concatenate two strings without using strcat( ) function.
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char info[100] = "Tasnim ";
//     char name [ ] = "Ahmed";
//     int i=0,j=0,length=0;
//     while(info[ i ]!='\0')
//         {
//             i++;
//             length++;
//         }

//     while(name[j] != '\0')
//         {
//     info[length + j] = name[ j ];
//             j++;
//         }
//     printf("%s",info);
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char info[100]  = "Tasnim ";
//     char name[] = "Ahmed";
//     int length = 0;
//     int i = 0, j= 0;
//     while(info[i] != '\0') {
//         i++;
//         length++;
//     }
//     while(name[j] != '\0') {
//         info[length + j] = name[j];
//         j++;
//     }
//     printf("the full name is: %s\n", info);
// }

// Comparing Two Strings
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char name1[] = "Mina";
//     char name2[] = "Mina";
//     int d = strcmp(name1, name2);
//     if(d == 0) {
//         printf("Strings are equal");
//     }
//     else{
//         printf("Strings aren't equal");
//     }
// }

// Palindrome Problem
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    gets(str);  // or use fgets(str, sizeof(str), stdin);

    strcpy(rev, str);   // copy original string into rev
    strrev(rev);        // reverse the string

    if (strcmp(str, rev) == 0)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}
