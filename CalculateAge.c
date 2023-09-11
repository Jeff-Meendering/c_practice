/*
Calculate age give birthday
*/

#include <stdio.h>
#include <time.h>

int main() {
    struct tm current_time;
    time_t now;
    time(&now);
    current_time = *localtime(&now);

    int current_year = current_time.tm_year + 1900;
    int current_month = current_time.tm_mon + 1;
    int current_day = current_time.tm_mday;

    int birth_year, birth_month, birth_day;

    printf("Enter your birthdate (YYYY MM DD): ");
    scanf("%d %d %d", &birth_year, &birth_month, &birth_day);

    int age = current_year - birth_year;

    if (birth_month > current_month || (birth_month == current_month && birth_day > current_day)) {
        age--;
    }

    printf("Your age is: %d\n", age);

    return 0;
}