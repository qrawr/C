#include <stdio.h>

int getSize();
void inputArray(int a[], int MaxIndex);
void print(int a[], int MaxIndex);

int main(){
	int MaxIndex = getSize();
    int a[MaxIndex];

	inputArray(a, MaxIndex);
	print(a, MaxIndex);

    return 0;
}


int getSize(){
	int MaxIndex;
	
	printf("How many numbers would you like to enter? ");
	scanf("%d", &MaxIndex);
	
	return MaxIndex;
}

void inputArray(int a[], int MaxIndex){
	
	for (int i = 0; i < MaxIndex; i++){
		printf("Enter %d num: ", i + 1);
		scanf("%d", &a[i]);
	}

}

void print(int a[], int MaxIndex){
	
	for (int i = 0; i < MaxIndex; i++){
		printf("%d ", a[i]);
	}
	
}
