#include <stdio.h>
#define MaxIndex 10

void input(int a[MaxIndex]);
int SequentialSearch(int n, int a[]);

int main(){
	int a[MaxIndex];
	int n;
	
	input(a);
	
	printf("What number you want to search?: ");
	scanf("%d", &n);
	
 	int result = SequentialSearch(n, a);
 	
    if (result != -1) {
        printf("Number found at index %d.\n", result);
    } else {
        printf("Number not found.\n");
    }
	
	return 0;
}

void input(int a[MaxIndex]){
	
for (int i = 0; i < MaxIndex; i++){
	printf("Enter num: ");
	scanf("%d", &a[i]);
}	
	
}

int SequentialSearch(int n, int a[]){
	int i;
	
	for (i = 0; i< MaxIndex; i++){
		if (a[i] == n)
			return i;
	}
	return -1;
}
