#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    int sumdigits(int inp)
    {
        int sum = 0;
        while (inp > 0)
        {

            sum += inp % 10;
            inp = inp / 10;
        }
        if (sum > 10)
            sumdigits(sum);
        else
            return sum;
    }
    printf("The Single integer sum of given number is  %d\n", sumdigits(x));
    return 0;
}