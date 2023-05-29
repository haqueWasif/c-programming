#include <stdio.h>

void countingSort() {
    int count[256] = {0}; // Assuming ASCII characters

    char c;

    while (scanf(" %c", &c) != EOF) {
        count[c]++;
    }

    for (int i = 0; i < 256; i++) {
        if(count[i] > 0){
            printf("%c", i);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    countingSort();

    return 0;
}
