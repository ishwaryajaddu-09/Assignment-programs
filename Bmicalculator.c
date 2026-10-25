#include <stdio.h>

int main() {
    float weight, height, bmi;

    scanf("%f %f", &weight, &height);

    if (weight <= 0 || height <= 0) {
        printf("Invalid input");
        return 0;
    }

    bmi = weight / (height * height);

    printf("BMI = %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Underweight");
    else if (bmi < 25)
        printf("Normal");
    else if (bmi < 30)
        printf("Overweight");
    else
        printf("Obese");

    return 0;
}
