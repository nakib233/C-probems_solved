#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(;num > 1;) {
        if(num / num == 1 && num % 1 == 0) {
        printf("%d is prime number.", num);
        break;
    }
    else{
        printf("%d is not a prime number.", num);
        break;
    }
    }
    
    if(num == 1 || num == 0 || num < 0) {
     printf("%d is not a prime number.", num);
   }
}
