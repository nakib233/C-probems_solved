// Problem 2.2
/*Reverse Digit of a 5-digit number*/

#include <stdio.h>
int main() {
    int n, d5, d4, d3, d2, d1;
    long int revnum; // Offers a Bigger range of integers

    printf("Enter a five digit number: \n");
    scanf("%d", &n);
    d5 = n % 10;
    // printf("%d\n", d5);
    n = n / 10;
    d4 = n % 10;
    n = n / 10;
    d3 = n % 10;
    n = n / 10;
     d2= n % 10;
    n = n / 10;
    d1 = n % 10;
    n = n / 10;
    revnum = d5*10000 + d4*1000 +  d3 * 100 + d2 * 10 + d1 * 1;
    printf("The reverse number is %ld\n", revnum);
    return 0;
}