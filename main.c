#include <stdio.h>
#include "div.h"
#include "modulus.h"
int main(void)
{

    int a = 10;
    int b = 10;
    printf ("%d\t/\t%d\t=\t%d\n", a, b, div(a,b));
    printf ("%d\t%\t%d\t=\t%d\n", a, b, modulus(a,b));

}
