#include <stdio.h>

int main() {
    int age, score;
    float income;

    scanf("%d", &age);
    scanf("%f", &income);
    scanf("%d", &score);

    if (age < 21 || age > 60)
        printf("Loan rejected: age not in 21 to 60");
    else if (income < 25000)
        printf("Loan rejected: income below 25000");
    else if (score < 700)
        printf("Loan rejected: credit score below 700");
    else
        printf("Loan approved");

    return 0;
}
