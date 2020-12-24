#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main() {
	int c = 0;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		int r = 0;
		int s[500] = { 0 };
		scanf("%d", &r);
		for (int j = 0; j < r; j++) {
			scanf("%d", &s[j]);
		}
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < r - i - 1; j++) {
				if (s[j] > s[j + 1]) {
					int temp = s[j];
					s[j] = s[j + 1];
					s[j + 1] = temp;
				}
			}
		}
		int mid = 0;
		if (r % 2 == 0) {
			mid= (s[(r + 1) / 2] + s[(r - 1) / 2]) / 2;
		}
		else if (r % 2 == 1) {
			mid = s[r / 2];
		}
		int ans = 0;
		for (int i = 0; i < r; i++) {
			if (s[i] >= mid) {
				ans += s[i] - mid;
			}
			if (s[i] < mid) {
				ans += mid - s[i];
			}
		}
		printf("%d\n", ans);
	}


	system("pause");
	return 0;
}