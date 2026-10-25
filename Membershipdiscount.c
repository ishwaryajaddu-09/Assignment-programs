#include <stdio.h>

int main() {
    float amount, discount = 0, delivery = 0, total;
    int membership;

    scanf("%f", &amount);
    scanf("%d", &membership);

    if (amount >= 500) {
        delivery = 0;
        if (membership == 1)
            discount = amount * 0.10;
    } else {
        delivery = 50;
    }

    total = amount - discount + delivery;

    printf("Final amount = %.2f", total);

    return 0;
}
