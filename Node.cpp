#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
typedef struct node nd;

nd* input();
void printlist(nd *head);

int main() {
    nd *temp;

    temp = input();
    printlist(temp);

    return 0;
}

nd* input() {
    nd *head = NULL;
    nd *temp = NULL; 
    nd *newnode;
    char choice;

    do {
        newnode = (nd*)malloc(sizeof(nd));

        printf("Enter a num: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            temp->next = newnode;
        }

        temp = newnode;

        printf("You want to input more y or n: ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return head;  
}

void printlist(nd *head) {
    nd *temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

