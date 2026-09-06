#include <stdio.h>

int main() {
    int a = 13;
    int b = 6;
    int c = a + b;
    printf("The value of a is %d\n And value of b is %d\n And their sum is %d\n", a , b , c);
    // modulus operator is ysed to get remainder
    printf("The remainder of a/b is %d", a%b);
    return 0;
}
/*int z = b * c; // legal
b * c = z; // illegal*/      
