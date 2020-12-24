#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int n1 = 1;
	int n2 = 1;

	while (scanf("%d %d", &n1, &n2) != EOF && !(n1 == 0 && n2 == 0)) {
		int carry = 0;
		/*if (n1 == 0 && n2 == 0) {
		break;
		}*/
		//999+1
		int tmp = 0;

		while (n1 || n2) {
			tmp = (n1 % 10) + (n2 % 10) + tmp;
			tmp /= 10;
			if (tmp)
				carry++;
			n1 /= 10;
			n2 /= 10;
		}

		if (carry == 1) {
			printf("%d carry operation.\n", carry);
		}
		else if (carry > 1) {
			printf("%d carry operations.\n", carry);
		}
		else if (carry == 0) {
			printf("No carry operation.\n");
		}
	}

	system("pause");
	return 0;
}