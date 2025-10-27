#include <stdio.h>
#include <math.h>

int main() {
    double x=0,y;
    
    printf("   x  |");
    for(double j=0.1;j<=0.9;j+=0.1){
        printf("  %.1f    |",(double)j);    
    }
    printf("\n");
    for(float i=0.0;i<=10.0;i++){
        printf(" %.1f  |",i);
        for(float j=0.1;j<=1.0;j+=0.1){
            x=i+j;
            y=exp(-x);
            printf(" %.5f |",y);
        }
        printf("\n");
    }
}