#include <stdio.h>
#define x 10

int getSize();
void input(int a[x], int NoOfItems);
int Delete(int a[x], int num, int NoOfItems, int found);

int main(){
	int a[x];
	int num;
	int NoOfItems;
	int found = 0;
	
	
	NoOfItems = getSize();
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
	
	printf("Enter a number you want to input (MAX %d): ", x);
	scanf("%d", &NoOfItems);
	
	return NoOfItems;	
}

void input(int a[x], int NoOfItems){
	
	for (int i = 0; i < NoOfItems; i++){
		printf("Enter num: ");
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


