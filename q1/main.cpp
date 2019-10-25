#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x = 3;
	int y = 5;
	int z = 0;
	int t = x >>31;
	t += x;
	t= t >>1;
	z = (x * y) - t;
	printf("%d",z);
	return 0;
}
