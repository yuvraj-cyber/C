#include <stdio.h>

int main()
{
    int x,y,z,k;
    x = 2;
    y = 3;
    z = 3;
    k = 2;

    printf("Answer: %d", 3*x/y-z+k);
    /*Evaluating [3*x/y-z+k] in accordance with operator precedence:
    it will me evaluated as: 3*x = 6
    --> 6/y-z+k
    now 6/y = 2
    --> 2-z+k
    Now 2-z = -1
    --> -1+2
    --> 1
    
    [*] and [/] and [%] have the same precedence and are evaluated first
        and from left to right in case the all come in one expression.
    [+] anr [-] are evaluated second, and from left to right in case the all come in one expression.
    */


    return 0;
}
