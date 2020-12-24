#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main() {
	int n = 0;
	int c = 1;
	
	while (scanf("%d", &n) != EOF) {
		bool ans = true;
		int arr[1001] = { 0 };
		for (int i = 1; i <= n; i++) {
			scanf("%d", &arr[i]);
			if (arr[i] <= arr[i-1]) {
				ans = false;
			}
		}
		bool num[20001] = { 0 };
		if (ans) {
			for (int i = 1; i <= n; i++) {
				for (int j = i; j <= n; j++) {
					if (num[arr[i] + arr[j]] == true) {
						ans = false;
					}
					num[arr[i] + arr[j]] = true;
				}
			}
		}
		if (ans == true) {
			printf("Case #%d: It is a B2-Sequence.\n\n",c);
		}
		else printf("Case #%d: It is not a B2-Sequence.\n\n",c);
		c++;
	}
	system("pause");
	return 0;
}