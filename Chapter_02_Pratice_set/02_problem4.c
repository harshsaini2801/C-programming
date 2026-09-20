//Explain step by step evaluation of 3*x/y-z+k , where x = 2 , y = 3 , z = 3 , k = 1 .
#include <stdio.h>

int main() {
    int x = 2 , y = 3 , z = 3 , k = 1;
    float e = 3*x/y-z+k;
    //Step by step evaluation:
    //1. 3*x = 3*2 = 6
    //2. 6/y = 6/3 = 2
    //3. 2-z = 2-3 = -1
    //4. -1+k = -1+1 = 0
    printf("The value of e is %f",e);
    return 0;
}