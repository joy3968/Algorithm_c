#include <iostream>


// 선택정렬(Selection Sort)
int main(int argc, char** argv) {
	int i, j, min, index, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i < 10; i++) {
//		배열에 있는 모든값보다 큰 값을 min에 넣어주어야 한다. 
		min = 99999;
		for(j = i; j < 10; j++) {
//			루프를 돌면서 최소값을 찾아냅니다. 
			if(min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i = 0 ; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}
