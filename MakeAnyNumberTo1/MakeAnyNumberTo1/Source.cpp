#include <stdio.h>
int min(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}
int main() {
	int x;
	scanf_s("%d", &x);
	int *arr = new int[x+1];
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	if (x > 3) {
		for (int i = 4; i <= x; i++) {
			if (i % 2 == 0 && i%3==0) {
				arr[i] = min(min(arr[i / 2], arr[i / 3]),arr[i-1]) + 1;
			}
			else if(i%2==0){
				arr[i] = min(arr[i / 2], arr[i - 1]) + 1;
			}
			else if (i % 3 == 0) {
				arr[i] = min(arr[i / 3], arr[i - 1]) + 1;
			}
			else {
				arr[i] = arr[i - 1] + 1;
			}
		}
	}
	printf("%d", arr[x]);

}