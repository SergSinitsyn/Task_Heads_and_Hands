#include "function.h"

int **function(int n) {
    srand(time(NULL));

    int *length = (int *)malloc(sizeof(int) * n);
    fill_length(length, n);

    int **data = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        data[i] = (int *)malloc(sizeof(int) * length[i]);
    }
    fill_arrays(data, n, length);
    sort_arrays(data, n, length);
    return data;
}

int random_size() {
    return rand();
}

int random_number() {
    int a = rand();
    if (rand() % 2) {
        a = a * (-1);
    }
    return a;
}

void fill_length(int *arr, int n) {
    int i = 0;
    while (i < n) {
        int temp = random_size();
        if (check_length(temp, arr, i)) {
            arr[i] = temp;
            i++;
        }
    }
}

int check_length(int temp, int *length, int n) {
    int corr = 1;
    for (int i = 0; i < n; i++) {
        if (temp == length[i]) {
            corr = 0;
            break;
        }
    }
    return corr;
}

void fill_arrays(int **data, int n, int *length) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < length[i]; j++) {
            data[i][j] = random_number();
        }
    }
}

void sort_arrays(int **data, int n, int *length) {
    for (int i = 0; i < n; i++) {
        if (i % 2) {
            sort1(data[i], length[i]);
        } else {
            sort2(data[i], length[i]);
        }
    }
}

void sort1(int *data, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 1; j > i; j--) {
            if (data[j - 1] > data[j])
            {
                int temp = data[j - 1];
                data[j - 1] = data[j];
                data[j] = temp;
            }
        }
    }
}

void sort2(int *data, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 1; j > i; j--) {
            if (data[j - 1] < data[j]) {
                int temp = data[j - 1];
                data[j - 1] = data[j];
                data[j] = temp;
            }
        }
    }
}
