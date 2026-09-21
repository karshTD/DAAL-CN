#include <stdio.h>

int main() {
    int n, w, i, sent = 0;

    printf("Enter total frames: ");
    scanf("%d", &n);

    printf("Enter window size: ");
    scanf("%d", &w);

    while (sent < n) {
        for (i = 0; i < w && sent < n; i++) {
            printf("Sent frame %d\n", sent + 1);
            sent++;
        }

        printf("Acknowledgement received\n");

        if (sent >= n)
            break;

        printf("Window slides\n");
    }

    printf("All frames sent successfully\n");
    return 0;
}