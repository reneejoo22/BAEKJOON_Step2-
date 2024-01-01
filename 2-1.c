//백준 문제 1330
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int a = 0, b = 0;


	if (scanf("%d %d", &a, &b) == 0) { printf("error"); };

	if (a < b) {
		printf("<");
	}
	else if (a > b) {
		printf(">");
	}
	else
		printf("==");
}