#include <stdio.h>

int getSize();
void inputArray(int a[], int NoOfItems);
int insert(int a[], int NoOfItems, int position, int numToInsert);

int main() {
    int NoOfItems = getSize();
    int a[NoOfItems];
    int position, numToInsert;

    inputArray(a, NoOfItems);

    printf("What number you want to Insert? ");
    scanf("%d", &numToInsert);

    printf("On what Position you want to input? ");
    scanf("%d", &position);

    NoOfItems = insert(a, NoOfItems, position, numToInsert);

    printf("The new list:\n");
    for (int i = 0; i < NoOfItems; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}

int getSize() {
    int NoOfItems;
    printf("How many numbers do you want to input? ");
    scanf("%d", &NoOfItems);

    return NoOfItems;
}

void inputArray(int a[], int NoOfItems) {
    for (int i = 0; i < NoOfItems; i++) {    
        printf("Enter num %d: ", i + 1);
        scanf("%d", &a[i]);    
    }
}

int insert(int a[], int NoOfItems, int position, int numToInsert) {
    
    if (position < 1 || position > NoOfItems + 1) {
        printf("Invalid position!\n");
        return NoOfItems;
}
    
    for (int i = NoOfItems - 1; i >= position - 1; i--) {
        a[i + 1] = a[i];
    }
    a[position - 1] = numToInsert; 
    NoOfItems++;
    return NoOfItems;
}

