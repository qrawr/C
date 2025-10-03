#include <stdio.h>
#define MI 3

void inputArray(int Matrix[MI][MI]);
void multiplyArray(int a[MI][MI], int b[MI][MI], int c[MI][MI]);
void printArray(int Matrix[MI][MI]);

int main(){
	int a[MI][MI], b[MI][MI], c[MI][MI];
	
	inputArray(a);
	inputArray(b);
	multiplyArray(a, b, c);
	printArray(c);
	
	return 0;
}

void inputArray(int Matrix[MI][MI]){
	
	for (int i = 0; i < MI; i++){
		for (int j = 0; j < MI; j++){
			printf("Input Array: ");
			scanf("%d", &Matrix[i][j]);	
		}
	}
	
}

void multiplyArray(int a[MI][MI], int b[MI][MI], int c[MI][MI]){
	
	for (int i = 0; i < MI; i++){
		for (int j = 0; j < MI; j++){
			
			c[i][j] = 0;
			
			for (int k = 0; k < MI; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
			
		}
	}
	
}
	
void printArray(int Matrix[MI][MI]){
	
	for (int i = 0; i < MI; i++){
		for (int j = 0; j < MI; j++){
			printf("%4d", Matrix[i][j]);
		}
		printf("\n");
	}
	
}
