#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

bool Find(char* fname) {
	FILE* file = fopen(fname, "r");
	if (file == NULL) {
		printf("Cannon open file.\n");
	}

	char str[100];
	while (fgets(str, 100, file) != NULL) {
		char* ptr = strstr(str, "no");
		while (ptr != NULL) {
			ptr++;
			return true;
		}
	}

	fclose(file);
	return false;
}

int main() {

	char fname[100];
	printf("Filename: ");
	scanf("%s", fname);

	bool find = Find(fname);
	printf("Umova: %d\n", find);

	return 0;
}