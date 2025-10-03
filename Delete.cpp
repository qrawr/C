#include <stdio.h>

int getSize();
void inputArray(int a[], int NoOfItems);
int Delete(int a[], int Delete, int NoOfItems, int found);

int main(){
	int NoOfItems = getSize();
	int a[NoOfItems];
	int Delete;
	int found = 0;
	
	inputArray(a, NoOfItems);
	
	printf("What number you want to delete? ");
	scanf("%d", &Delete);
	
	found = Delete(a, Delete, NoOfItems, found);
	
	if (found){
		--NoOfItems;
		printf("This is the new list after delete:\n");
		for (int i = 0; i < NoOfItems; i++){
			printf("%d\n", a[i]);
		}
	} else{
		printf("Number %d not found in the list.\n", num);
	}

	return 0;
}

int getSize(){
	int NoOfItems;
	printf("How many numbers do you want to input? ");
	scanf("%d", &NoOfItems);
	return NoOfItems;	
}

void inputArray(int a[], int NoOfItems){
	for (int i = 0; i < NoOfItems; i++){
		printf("Input number %d: ", i + 1");
		scanf("%d", &a[i]);
	}
}

int Delete(int a[], int num, int NoOfItems, int found){
	int i = 0;
	
	do {
		if (Delete == a[i]){
			for (int n = i + 1; n < NoOfItems - 1; n++)
			a[n-1] = a[n];
			found = 1;
			NoOfItems--;
		}
		i++;
	}while(!found && i < NoOfItems);
	return found;
}
