// Problem 01: Program to check two integers whether they are equal or not
// Code:
// #include <stdio.h>
// int main() {
//     int num1, num2;
//     printf("Enter two numbers:\n");
//     scanf("%d %d", &num1, &num2);

//     if(num1 == num2 ) {
//         printf("The numbers are equal.");
//     }
//     else{
//         printf("The numbers aren't equal");
//     }
// }    


// Problem 02: Program to check whether a Triangle is valid or not
// Code:

// #include <stdio.h>
// int main() {
//     float angle1, angle2, angle3;
//     printf("Enter the values of three angles: \n");
//     scanf("%f %f %f", &angle1, &angle2, &angle3);
//     if(angle1 >= 0 && angle2 >= 0 && angle3 >= 0) {
//           if((angle1 + angle2 + angle3) <= 180.0) {
//         printf("The triangle is Valid.");
//     }
//         else{
//             printf("The triangle is invalid.");
//     }
//     }
//     else{
//         printf("Give valid angles.");
//     }
  
// }

// Problem 03: Program to check whether a Triangle is an equilateral, isosceles or scalene triangle
// Code:

// #include <stdio.h>
// int main() {
//     float arm1, arm2, arm3;
//     printf("Enter the values of the three arms: \n");
//     scanf("%f %f %f", &arm1, &arm2, &arm3);
//     if((arm1 + arm2 > arm3) && (arm1 + arm3 > arm2) && (arm2 + arm3 > arm1)) {
        
//         if((arm1 != arm2) && (arm2 != arm3) && (arm1 != arm3)) {
//             printf("The triangle is Scalene.");
//         }
//         else if((arm1 == arm2) && (arm2 == arm3) && (arm1 == arm3)) {
//             printf("The triangle is equilateral.");
//         }
//         else{
//             printf("The triangle is Isosceles.");
//         }

//     }
//     else{
//         printf("Invalid arms value.Please input valid arm values.");
//     }
//     return 0;
// }

// Problem 04: Program that prompts the user to input three
// integer values and find the largest and smallest of the three
// values.

// Code: 

// #include <stdio.h>
// int main() {
//     int number1, number2, number3;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &number1, &number2, &number3);
//     if(number1 > number2 && number1 > number3) {
//         printf("%.d is the largest number.\n", number1);
//     }
//     else if(number2 > number1 && number2 > number3) {
//         printf("%d is the largest number.\n", number2);
//     }
//     else{
//         printf("%d is the largest number.\n", number3);
//     }


       
//     if(number3 < number1 && number3 < number2) {
//         printf("%d is the smallest number.", number3);
//     }
//     else if(number2 < number1 && number2 < number3) {
//         printf("%d is the smallest number.", number2);
//     }
//     else{
//         printf("%d is the smallest number.", number1);
//     }
//     return 0;
// }

// Program 05: Program that prompts the user to input three
// integer values and find the largest and smallest of the three
// values.

// Code:

// #include <stdio.h>
// int main() {
//     float num1, num2, num3;
//     float avg;
//     printf("Enter three numbers one by one: ");
//     scanf("%f %f %f", &num1, &num2, &num3);
//     avg = (num1 + num2+ num3) / 3;
//     if(num1 < 0 || num2 < 0 || num3 < 0) {
//         printf("Invalid input Numbers.\nPlease enter valid number.");
//     }
//     else if(avg >= 90) {
//         printf("%.2f-Grade A", avg);
//     }
//     else if(avg >= 70 && avg <= 89.99) {
//         printf("%.2f-Grade B", avg);
//     }
//     else if(avg >= 50 && avg <= 69.99) {
//         printf("%.2f-Grade C", avg);
//     }
//     else{
//         printf("%.2f-Grade F", avg);
//     }
//     return 0;
// }

// Problem no.01
// #include <stdio.h>
// int main() {
//     int a, b, sum;
//     printf("Enter the first and second number: ");
//     scanf("%d %d", &a, &b);
//     sum = a + b; b
//     printf("Sum is %d", sum);
//     return 0;

// }

// Problem 7.3:
// Bitwise shifting
// #include <stdio.h>
// int main() {
//     /*My roll is = 2315005
//     I've to left shift o6 by 01*/
//     int x = 5<<1;
//     printf("Left shifted roll number is %d", x);
//     return 0;
// }
// Output:
// Left shifted roll number is 10
// Comment: 
// This program demonstrates the use of the bitwise left shift operator on the last two digits of a 
// roll number.Here, the last two digits 05 are left shifted by 1 position using the << operator.Left shifting multiples the number by 2(i.e, x << 1 = x * 2).So, 5 << 1 results in 10, which is printed as the output.

// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

    
//     while(n) {
//         switch(n / 10) {
         
//         }
//         n = n / 10;
//     }
// }

// Write a program that will take a input a number n from keyboard
// and then find the following Sum:

// Sum = 1/1 + 1/2 + 1/3 + . . . . . + 1/n

// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     float sum = 0.0;
//     for(int i = 1; i <= num; i++) {
//         sum = sum + 1/(i*1.0);
//     }
//     printf("The sum is: %0.2f", sum);
// }

// program to check whether an integer is prime or not.

#include <stdio.h>
int main() {
    int num, i, isPrime = 1;  // isPrime flag, assume number is prime

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.", num);
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;  // number is divisible, not prime
            break;
        }
    }

    if (isPrime)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);

    return 0;
}


// Performed Task:
// Program:1
// #include <stdio.h>
// int main() {
//  int a, b;
//  printf("Enter two integers: ");
//  scanf("%d %d", &a, &b);
//  // Euclidean algorithm using while loop
//  while (a != b) {
//  if (a > b) {
//  a = a - b;
//  } else {
//  b = b - a;
//  }
//  }
//  printf("GCD = %d\n", a); // or b (both are same now)
//  return 0;
// }
// Result:
// Enter two integers: 7
// 8
// GCD = 1
// Process returned 0 (0x0) execution time : 8.143 s
// Press any key to continue.
// Comment:This program finds the GCD of two integers using the Euclidean algorithm with a
// while loop.