#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr [] = {12,15,221,3,432,54,16,67};
	int y = 0;
	//int x = 0;
	for(int x = 0; x <= 7; x++){
		if(arr[x] > y){
			y = arr[x];
		}
	}
	int z = y;
	printf("%d",z);
	return 0;
}
