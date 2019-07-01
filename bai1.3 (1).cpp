// vi du dau tien
#include <stdio.h>

int main() {
	int bt1, bt2, bt3, bt4;
	int x = 10, y = 20, z = 30;
	bt1 = 2 * (x - y++) + z * ( ++z - x*y);
	bt2 = (--x + --y + z--) * 2 + ++y*2;
	bt3 = (x << 2)  + (y | 3 + z | 8) + 2;
	bt4 = ((x == y) && (x != z));
	printf("\n***** KET QUA *****\n");
	printf("Bt1 = %d", bt1);
	printf("\nBt2 = %d", bt2);
	printf("\nBt3 = %d", bt3);
	printf("\nBt4 = %d", bt4);
	printf("\n*********\n");
	
	return 0;	
}
ngo nghinh nhi ?
