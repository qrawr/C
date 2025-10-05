#include <stdio.h>

void getSize(int *size);
void getArray(int a[], int b[], int *aSize, int *bSize);
void Mergeprocess(int a[], int b[], int c[], int aSize, int bSize);
void printArray(int c[], int size);

int main(){
    int a[30], b[30], c[60];  
    int aSize, bSize;

    getArray(a, b, &aSize, &bSize);
    Mergeprocess(a, b, c, aSize, bSize);
    printArray(c, aSize + bSize);

    return 0;
}

void getSize(int *size){
    printf("Enter number elemnts max: ");
    scanf("%d", size);
}

void getArray(int a[], int b[], int *aSize, int *bSize){
    getSize(aSize);
    printf("Input A:\n");
    for (int i = 0; i < *aSize; i++){
        scanf("%d", &a[i]);
    }
    
    getSize(bSize);
    printf("Input B:\n");
    for (int i = 0; i < *bSize; i++){
        scanf("%d", &b[i]);
    }
}

void Mergeprocess(int a[], int b[], int c[], int aSize, int bSize){
    int i = 0, j = 0, k = 0;

    while (i < aSize && j < bSize){
        if (a[i] == b[j]){
            c[k++] = a[i++];
            c[k++] = b[j++];
        } else if (a[i] < b[j]){
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < aSize){
        c[k++] = a[i++];
    }

    while (j < bSize){
        c[k++] = b[j++];
    }
}

void printArray(int c[], int size){
    printf("Result C:\n");
    for (int i = 0; i < size; i++){
        printf("%d ", c[i]);
    }
    printf("\n");
}

