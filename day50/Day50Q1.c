/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    int d, m, y;
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (scanf("%d/%d/%d", &d, &m, &y) == 3 || scanf("%d-%d-%d", &d, &m, &y) == 3) {
        if (m >= 1 && m <= 12)
            printf("%02d-%s-%04d\n", d, months[m], y);
        else
            printf("%02d-%02d-%04d\n", d, m, y);
    }
    return 0;
}
