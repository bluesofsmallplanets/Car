#include <stdio.h>

int main(void) {
    int nzks = 111260025;

    printf("Task 5.1: variant %d\n", nzks % 30 + 1);
    printf("Task 5.2: variant %d\n", (nzks + 6) % 30 + 1);
    printf("Task 5.3: variant %d\n", (nzks + 12) % 30 + 1);
    printf("Task 5.4: variant %d\n", (nzks + 18) % 30 + 1);
    printf("Task 5.5: variant %d\n", (nzks + 22) % 30 + 1);
    return 0;
}
