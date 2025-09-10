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
// #include <stdio.h>
// int main() {
//     float angle1, angle2, angle3;
//     printf("Enter the values of three angles: \n");
//     scanf("%f %f %f", &angle1, &angle2, &angle3);
//     if(angle1 >= 0 && angle2 >= 0 && angle3 >= 0) {
//           if((angle1 + angle2 + angle3) <= 180.0) {
//         printf("The triangle is Valid.");
//     }
//     else{
//         printf("The triangle is invalid.");
//     }
//     }
//     printf("Give valid angles.");
  
// }

// Problem 03: Program to check whether a Triangle is an equilateral, isosceles or scalene triangle
#include <stdio.h>
int main() {
    float arm1, arm2, arm3;
    printf("Enter the values of the three arms: \n");
    scanf("%f %f %f", &arm1, &arm2, &arm3);
    if((arm1 + arm2 > arm3) && (arm1 + arm3 > arm2) && (arm2 + arm3 > arm1)) {
        printf("Your arms are valid..\n");
        if((arm1 == arm2) || (arm2 == arm3) || (arm1 == arm3)) {
            printf("The triangle is isosceles");
        }
    }
}