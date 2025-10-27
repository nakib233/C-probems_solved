// Problem 01: Write a program to find length of a string without using library function strlen( ).

// #include <stdio.h>

// int main() {
//     char s[]="Nakibul Hasan Nakib";
//     int len=0;
//     for(int i=0;s[i]!='\0';i++){
//         len++;
//     }
//     printf("The length of the string is: %d",len);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// int main() {
//     char string1[20]="Fuchka";
//     char string2[20]="Chotpoti";

//     char t[20];

//     strcpy(t,string1);
//     strcpy(string1,string2);
//     strcpy(string2,t);

//     printf("%s\n", string1);
//     printf("%s", string2);

//     return 0;
// }

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