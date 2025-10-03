#include <stdio.h>

int getSize();
void input(int a[x], int NoOfItems);
int Delete(int a[x], int num, int NoOfItems, int found);

int main(){
	int NoOfItems = getSize();
	int a[NoOfItems];
	int num;
	int found = 0;
	
	input(a, NoOfItems);
	
	printf("What number you want to delete? ");
	scanf("%d", &num);
	
	found = Delete(a, num, NoOfItems, found);
	
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

void input(int a[x], int NoOfItems){
	for (int i = 0; i < NoOfItems; i++){
		printf("Input number %d: ", i + 1");
		scanf("%d", &a[i]);
	}
}

int Delete(int a[x], int num, int NoOfItems, int found){
	int i = 0;
	
	do {
		if (num == a[i]){
			for (int n = i + 1; n < NoOfItems - 1; n++)
			a[n-1] = a[n];
			found = 1;
			NoOfItems--;
		}
		i++;
	}while(!found && i <NoOfItems);
	return found;
}

