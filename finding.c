// Problem 01:Write a program to search 15 in the followings
// number[5]={5,10,15,20,37};
// number2[3] = {3,4,9};

#include <stdio.h>
int main() {
    int number[5] = {5, 10, 15, 20, 37};
    int number2[3] = {3, 4, 9};
    for(int i = 0; i <= 4; i++) {
        if(number[i] == 15) {
            printf("15 is present in the array1.");
            break;
        }
    }
}
 