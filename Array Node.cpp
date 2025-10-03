#include <stdio.h>

int insert(int a[]);
void display(int a[], int n);

int main() {
    int arr[100];
    int n;

	n = insert(arr);   
    display(arr, n);   

    return 0;
}

int insert(int arr[]) {
    int n = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &arr[n]);
        n++;

        printf("Another node (y/n): ");
        scanf(" %c", &choice);

    } while ((choice == 'y' || choice == 'Y') && n < 100);

    return n; 
}

void display(int arr[], int n) {
    printf("\nThe numbers are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}


