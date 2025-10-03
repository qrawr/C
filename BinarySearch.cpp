#include <stdio.h>
#define MaxIndex 10

void input(int a[MaxIndex]);
int binarySearch(int x, int a[MaxIndex]);

int main(){
	int a[MaxIndex];
	int x;
	
	input(a);
	
	printf("Enter number you want to search: ");
	scanf("%d", &x);
	
	int result = binarySearch(x, a);
	
	if (result != -1){
		printf("Number found at Index %d ", result);
	}else{
		printf("Number is not found");
	}
	
	return 0;
}

void input(int a[MaxIndex]){
	for (int i = 0; i < MaxIndex; i++){
		printf("Input num: ");
		scanf("%d", &a[i]);
	}
}

int binarySearch(int x, int a[MaxIndex]){
	int k = 0;
	int m = MaxIndex -1;
	int Midpoint;
	
	while (k <= m){
		Midpoint = (k + m) / 2;
		
		if (x == a[Midpoint]){
			return Midpoint;
		}
		else if (x > a[Midpoint]) {
			k = Midpoint + 1;
		}
		else {
			m = Midpoint -1;
		}
	}
	return -1;
}
