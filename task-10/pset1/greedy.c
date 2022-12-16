#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    int cents, quarters, dimes, nickels, pennies;
    {
        printf("Enter a non-negative amount: ");
        scanf("%f", &dollars);
    }
    while (dollars < 0);
    cents = round(dollars * 100);
    quarters = cents / 25;
    cents = cents % 25;
    dimes = cents / 10;
    cents = cents % 10;
    nickels = cents / 5;
    pennies = cents % 5;
    printf("%d\n", quarters + dimes + nickels + pennies);

    return 0;
}
