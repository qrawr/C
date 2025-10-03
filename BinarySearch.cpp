#include <stdio.h>

int getSize();
void inputArray(int a[], int MaxIndex);
int binarySearch(int x, int a[], int MaxIndex);

int main() {
    int MaxIndex = getSize();
    int a[MaxIndex];
    int x;

    inputArray(a, MaxIndex);

    printf("Enter number you want to search: ");
    scanf("%d", &x);

    int result = binarySearch(x, a, MaxIndex);

    if (result != -1) {
        printf("Number found at index %d\n", result);
    } else {
        printf("Number not found.\n");
    }

    return 0;
}

int getSize() {
    int MaxIndex;
    printf("How many numbers do you want to input? ");
    scanf("%d", &MaxIndex);
    return MaxIndex;
}

void inputArray(int a[], int MaxIndex) {
    printf("Enter the numbers in sorted order (for binary search to work):\n");
    for (int i = 0; i < MaxIndex; i++) {
        printf("Input number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int binarySearch(int x, int a[], int MaxIndex) {
    int k = 0;
    int m = MaxIndex - 1;
    int Midpoint;

    while (k <= m) {
        Midpoint = (k + m) / 2;

        if (x == a[Midpoint]) {
            return Midpoint;
        } else if (x > a[Midpoint]) {
            k = Midpoint + 1;
        } else {
            m = Midpoint - 1;
        }
    }
    return -1;
}

