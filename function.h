#include <stdlib.h>
#include <time.h>

int **function(int n);

int random_size();
int random_number();
void fill_length(int *arr, int n);
int check_length(int temp, int *length, int n);
void fill_arrays(int **data, int n, int *length);
void sort_arrays(int **data, int n, int *length);
void sort1(int *data, int size);
void sort2(int *data, int size);
void print_arrays(int **data, int n, int *length);