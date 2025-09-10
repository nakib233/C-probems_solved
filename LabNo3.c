Problem 01: Program to check two integers whether they are equal or not
Code:
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    if(num1 == num2 ) {
        printf("The numbers are equal.");
    }
    else{
        printf("The numbers aren't equal");
    }
}    


Problem 02: Program to check whether a Triangle is valid or not
#include <stdio.h>
int main() {
    float angle1, angle2, angle3;
    printf("Enter the values of three angles: \n");
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    if(angle1 >= 0 && angle2 >= 0 && angle3 >= 0) {
          if((angle1 + angle2 + angle3) <= 180.0) {
        printf("The triangle is Valid.");
    }
        else{
            printf("The triangle is invalid.");
    }
    }
    else{
        printf("Give valid angles.");
    }
  
}

Problem 03: Program to check whether a Triangle is an equilateral, isosceles or scalene triangle
#include <stdio.h>
int main() {
    float arm1, arm2, arm3;
    printf("Enter the values of the three arms: \n");
    scanf("%f %f %f", &arm1, &arm2, &arm3);
    if((arm1 + arm2 > arm3) && (arm1 + arm3 > arm2) && (arm2 + arm3 > arm1)) {
        
        if((arm1 != arm2) && (arm2 != arm3) && (arm1 != arm3)) {
            printf("The triangle is Scalene.");
        }
        else if((arm1 == arm2) && (arm2 == arm3) && (arm1 == arm3)) {
            printf("The triangle is equilateral.");
        }
        else{
            printf("The triangle is Isosceles.");
        }

    }
    else{
        printf("Invalid arms value.Please input valid arm values.");
    }
    return 0;
}

Problem 04: Program that prompts the user to input three
integer values and find the largest and smallest of the three
values.

#include <stdio.h>
int main() {
    float number1, number2, number3;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &number1, &number2, &number3);
    if(number1 > number2 && number1 > number3) {
        printf("%.2f is the largest number.", number1);
    }
    else if(number2 > number1 && number2 > number3) {
        printf("%.2f is the largest number.", number2);
    }
    else{
        printf("%.2f is the largest number.", number3);
    }
    return 0;
}

Program 05: Program that prompts the user to input three
integer values and find the largest and smallest of the three
values.
1. if the average score is equal to or above 90%, grade = A
2. if the average score is between 70% and 89.99%, grade = B
3. if the average score is between 50% and 69.99%, grade = C
4. if the average score is below 50%, grade = F

#include <stdio.h>
int main() {
    float num1, num2, num3;
    float avg;
    printf("Enter three numbers one by one: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    avg = (num1 + num2+ num3) / 3;
    if(num1 < 0 || num2 < 0 || num3 < 0) {
        printf("Invalid input Numbers.\nPlease enter valid number.");
    }
    else if(avg >= 90) {
        printf("%.2f-Grade A", avg);
    }
    else if(avg >= 70 && avg <= 89.99) {
        printf("%.2f-Grade B", avg);
    }
    else if(avg >= 50 && avg <= 69.99) {
        printf("%.2f-Grade C", avg);
    }
    else{
        printf("%.2f-Grade F", avg);
    }
    return 0;
}