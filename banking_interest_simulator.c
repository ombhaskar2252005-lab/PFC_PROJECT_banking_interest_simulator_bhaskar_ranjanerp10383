// Project Name: Banking Interest Simulator
// Name: Bhaskar Ranjan
// ERP: 10383
#include <stdio.h>

int main() {
    float principal, rate, balance, interest;
    int years, year;

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter number of years: ");
    scanf("%d", &years);

    // Initialize balance
    balance = principal;

    // Loop runs once per year
    for (year = 1; year <= years; year++) {
        interest = balance * rate / 100;
        balance = balance + interest;
    }

    // Output final balance
    printf("\nFinal Balance after %d years = %.2f\n", years, balance);

    return 0;
}
// Sample Input/Output
//Enter principal amount: 10000
//Enter rate of interest (in %): 8
//Enter number of years: 4
//Final Balance after 4 years = 13604.89