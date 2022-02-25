#include <stdio.h>
#include "function.h"

int main() {
    int n = 0;
    if (scanf("%d", &n) == 1) {
        int **data2 = function(n);



        for (int i = 0; i < n; i++) {
            free(data2[i]);
        }
        free(data2);
    }
    return 0;
}
