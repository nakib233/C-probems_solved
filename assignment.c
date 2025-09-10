// #include <stdio.h>

// int main() {
//     float area;
//     int base, height;
//     printf("Enter the values of base and height: ");
//     scanf("%d %d", &base, &height);
//     area = .5*base*height;
//     printf("The value of the area is: %0.2f", area);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a = 10, b = 15;
//     int emptyContainer = a;
//     a = b;
//     b = emptyContainer;
//     printf("Now the values of a is  %d and b is %d", a, b);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int x = 3, y =1, w, z;
//     w = x++ - y;
//     printf("w = %d\n", w);

//     z = ++x - --y;
//     printf("z = %d\n", z);

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a = 20;
//     if(a%2) {
//         printf("Good Morning");

//     }
//     else{
//         printf("Good Morning");
//     }
// }

/*This is a multi-line Comment in C*/
// #define G 9
// #define SUM(a, b) (a+b)
// #include <stdio.h>
// int main() {
//     // This is a single line comment in C
//     int res = SUM(4, G);
//     printf("%d", res);
//     return 0;
// }

// C Program to calculate the area of the circle
// #include <stdio.h>
// #define PI 3.14
// int main() {
//     int r;
//     printf("Enter the value of the radius: ");
//     scanf("%d", &r);
//     printf("Area of Circle: %f", PI*r*r);
//     return 0;
// }
#include <stdio.h>
// #define AGE 18
int main() {
    #ifdef AGE
        printf("AGE is %d", AGE);
    #else
        printf("Not Defined");
    #endif
    return 0;
}