#include <stdio.h>

int getSize();
void inputArray(int a[], int MaxIndex);
int SequentialSearch(int n, int a[], int MaxIndex);

int main(){
	int MaxIndex = getSize();
	int a[MaxIndex];
	int n;
	
	inputArray(a, MaxIndex);
	
	printf("What number you want to search?: ");
	scanf("%d", &n);
	
 	int result = SequentialSearch(n, a, MaxIndex);
 	
    if (result != -1) {
        printf("Number found at index %d.\n", result);
    } else {
        printf("Number not found.\n");
    }
	
	return 0;
}

int getSize(){
	int MaxIndex;
	printf("How many numbers do you want to input? ");
	scanf("%d", &MaxIndex);
	return MaxIndex;
}

void inputArray(int a[], int MaxIndex){
	for (int i = 0; i < MaxIndex; i++){
		printf("Input number %d: ", i + 1);
		scanf("%d", &a[i]);
	}	
}

int SequentialSearch(int n, int a[], int MaxIndex){
	int i;
	
	for (i = 0; i< MaxIndex; i++){
		if (a[i] == n)
			return i;
	}
	return -1;
}

