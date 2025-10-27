#include<stdio.h>
#include<string.h>

int main() {
    char string[]="Hello World";
    int CL=0,sl=0;

    for(int i=0;string[i]!='\0';i++){
        if(string[i]>='A'&&string[i]<='Z'){
            CL++;
        }
        if(string[i]>='a'&&string[i]<='z'){
            sl++;
        } 
    }

    printf("Number of capital letter: %d\nNumber of small letter: %d",CL,sl);
    return 0;
}