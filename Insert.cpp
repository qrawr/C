#include <stdio.h>
#define t 10

int getSize();
void input(int a[t], int NoOfItems);
int insert(int a[t], int NoOfItems, int position, int numToInsert);

int main() {
    int a[t];
    int position, numToInsert, NoOfItems;

    NoOfItems = getSize();
    input(a, NoOfItems);

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
    printf("Enter numbers of item you want to input (max %d): ", t);
    scanf("%d", &NoOfItems);

    return NoOfItems;
}

void input(int a[t], int NoOfItems) {
    for (int i = 0; i < NoOfItems; i++) {    
        printf("Enter num: ");
        scanf("%d", &a[i]);    
    }
}

int insert(int a[t], int NoOfItems, int position, int numToInsert) {
    for (int i = NoOfItems - 1; i >= position - 1; i--) {
        a[i + 1] = a[i];
    }
    a[position - 1] = numToInsert; 
    NoOfItems++;
    return NoOfItems;
}
