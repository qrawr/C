#include <stdio.h>

int getSize();
void inputArray(int a[], int size);
void reverseProcess(int a[], int reverse[], int size);
void print(int reverse[], int size);

int main() {
    int size = getSize();         
    int a[size];                 
    int reverse[size];            

    inputArray(a, size);          
    reverseProcess(a, reverse, size); 
    print(reverse, size);        

    return 0;
}

int getSize() {
    int size;
    printf("How many numbers do you want to input? ");
    scanf("%d", &size);
    return size;
}

void inputArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void reverseProcess(int a[], int reverse[], int size) {
    for (int i = 0; i < size; i++) {
        reverse[i] = a[size - 1 - i];
    }
}

void print(int reverse[], int size) {
    printf("\nReversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", reverse[i]);
    }
    printf("\n");
}
