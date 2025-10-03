#include <stdio.h>
#define n 10

int main(){
	int input = 0;
	int a[n];
	int sum;
	int i;
		
		
	for (i = 0; i < n; i++) {
		printf("Enter your %d score: ",i + 1);
		scanf("%d", &a[i]);
	}
	
	int high = a[0];
	int low = a[0];
	

	
	for (i = 0; i < n; i++){
		sum += a[i];
		
		if (a[i] > high){
			high = a[i];
		}
		
		if (a[i] < low){
			low = a[i];
		}
	}
	
	
	int average = (float)sum / n;
	
	printf("Sum %d\n", sum);
	printf("High %d\n", high);
	printf("low %d\n", low);
	printf("average %d\n", average);
	
	
	return 0;
}
