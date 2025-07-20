int main() {
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    float avg = (a + b + c) / 3;
    printf("Average = %.2f\n", avg);

    return 0;
}
