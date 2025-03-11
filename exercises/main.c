#include <stdio.h>

int main() {
    int minutes = 0;
    double days = 0.0;
    double years = 0.0;
    
    printf("enter the number of minutes: ");
    scanf("%d", &minutes);

    days = (minutes / 60.0) / 24.0;
    years = minutes / (60.0 * 24.0 * 365.0);

    printf("%d minutes is approximately %f days and %f years\n", minutes, days, years);

    return 0;
}