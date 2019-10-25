#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x=100;
	int y;
	int z;
	int t;
	unsigned int eax;
	unsigned int edx;
	unsigned int ecx;
	while(x<=999){
		edx = 1374389535;
		y = edx - (x>>31);
		edx = eax * (-100);
		eax = x;
		ecx = edx + eax;
		edx = 1717986919;
		eax = ecx;
		eax = eax + edx;
		edx = edx>>2;
		eax = ecx;
		eax = eax>>31;
		edx = edx - eax;
		eax = edx;
		z = eax;
		ecx = x;
		edx = 1717986919;
		eax = ecx;
		eax *= edx;
		edx = edx >> 2;
		eax = ecx;
		eax = eax >> 31;
		edx -= eax;
		eax = edx;
		eax = eax << 2;
		eax += edx;
		eax *= 2;
		ecx -= eax;
		eax = ecx;
		t = eax;
		eax = y * y  * y;
		edx = eax;
		eax = z * z * z;
		edx += eax;
		eax = t * t * t;
		eax += edx;
		//printf("%u\n",eax);
		if(eax == x){
			printf("%d\n",x);
		}
		x++;
	}
	return 0;
}
