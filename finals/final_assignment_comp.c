#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Q1 Get user input of different words, then print them in vertical order alphabetically. Next user inputs a word and print the number of times this word was mentioned in the list.
int main() {

	int count=0;
	char arr[101];
	char arr1[21];

	scanf("%[^\n]s", arr);
	scanf("%s", arr1);

	char* par = strtok(arr, " ");

	while (par != NULL) {
		printf("%s\n", par);
		if (strcmp(par, arr1) == 0) {
			count++;
		}
		par = strtok(NULL, " ");
	}
	printf("%d", count);

	return 0;
}

//Q2 User inputs a number and a string of words; output the number in the words.

void swap(char** p, char** q) {
	char* tmp = *p;
	*p = *q;
	*q = tmp;
}


int main() {
	int i = 0, N = 0;
	char arr[101];
	char* ar[61] = { NULL, };
	scanf("%d", &N);
	getchar();

	scanf("%[^\n]s", arr);

	char* ptr = strtok(arr, " ");

	while (ptr != NULL) {
		ar[i] = ptr;
		ptr = strtok(NULL, " ");
		i++;
	}
	
	for (int j = 0; j < i; j++) {
		for (int k = j; k < i; k++) {
			if (strcmp(ar[j], ar[k]) > 0) {
				swap(&ar[j], &ar[k]);
			}
		}
	}

	printf("%s", ar[N - 1]);
	
	return 0;
}*/

//Q3 

typedef struct{
	int brf;
	int lun;
	int din;
}

RES;

RES arr[11];

int main() {
	int N, cnt = 0, sum_min = 50000, sum_max = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &arr[i].brf, &arr[i].lun, &arr[i].din);
		getchar();
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (i != j && i != k && j != k) {
					if (arr[i].brf + arr[j].lun + arr[k].din < sum_min) {
						sum_min = arr[i].brf + arr[j].lun + arr[k].din;
					}
					if (arr[i].brf + arr[j].lun + arr[k].din > sum_max && arr[i].brf + arr[j].lun + arr[k].din<=50000) {
						sum_max = arr[i].brf + arr[j].lun + arr[k].din;
					}
				}
			}
		}
	}

	printf("%d %d", sum_min, sum_max);

	return 0;
}

int main() {

	char ar[20] = { NULL, };
	int a = 1, i = 0;
	scanf("%[^\n]s", ar);
	
	char* p[4] = { NULL, };
	p[0] = ar;
	while (ar[i] != NULL) {
		if (ar[i] == ' ') {
			p[a] = &ar[i + 1];
			a++;
		}
		i++;
	}
	i = 0;
	while (ar[i] != NULL) {
		if (ar[i] == ' ') {
			ar[i] = '\0';
		}
		i++;
	}
	int num1 = atoi(p[1]);
	int num2 = atoi(p[2]);

	if (strcmp(p[0], "add") == 0) {
		printf("%d", num1 + num2);
	}
	else if (strcmp(p[0], "sub") == 0) {
		printf("%d", num1 - num2);
	}
	else if (strcmp(p[0], "div") == 0) {
		if (num2 == 0) {
			printf("Error ");
			return 0;
		}
		printf("%d", num1/num2);
	}
	else if (strcmp(p[0], "mul") == 0) {
		printf("%d", num1 * num2);
	}
	else {
		printf("Error ");
	}
	
	return 0;
}