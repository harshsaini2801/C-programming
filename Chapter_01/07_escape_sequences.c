#include <stdio.h>
int main() {
    int a;
    char ch = 'a';
    ch = 'b';
    ch =  '\n'; //represent new line \n is escape sequence character
    printf("Hey i am good \n nice.");
    printf("hey i am good \t nice.");   // they all are escape sequence characters
    printf("hey i am good \" nice.");
    printf("hey i am good \\ nice.");
    return 0;
}  