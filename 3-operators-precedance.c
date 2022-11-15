#include <stdio.h>

int main()
{

    /**
     *     priorities;
     *     1- Parenthesis 
     *     2- * and /
     *     3- + and -
     *     when we have two operators with the same priority
     *     => We go from left to right
    */

    int x;
    x = 3 + 6 - 9 / (3 * 4);
    printf("%f", x);
    return 0;
}