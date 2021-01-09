#include <stdio.h>

int main() {
	FILE* fp;
	char str[61];

	// opening file for reading
	fp = fopen("file.txt", "r");

	if (fp == NULL) {
		perror("Error opening file");
		return (-1);
	}

	if (fgets(str, 60, fp) != NULL) {
		// writing content to stdout
		printf("%s", str);
	}

	fclose(fp);
	fp = NULL;
	return(0);
}