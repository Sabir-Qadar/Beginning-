
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DOCS 10

typedef struct {
	char name[50];
	char path[100];
} Document;

Document docs[MAX_DOCS];
int doc_count = 0;

void save_document() {
	if (doc_count < MAX_DOCS) {
		printf("Enter document name: ");
		scanf("%s", docs[doc_count].name);
		printf("Enter document path: ");
		scanf("%s", docs[doc_count].path);
		doc_count++;
		printf("Document saved successfully!\n");
	} else {
		printf("Maximum document limit reached!\n");
	}
}

void display_roadmap() {
	int i;
	printf("Document Roadmap:\n");
	for (i = 0; i < doc_count; i++) {
		printf("%d. %s (%s)\n", i+1, docs[i].name, docs[i].path);
	}
}

int main() {
	int choice;
	while (1) {
		printf("1. Save Document\n");
		printf("2. Display Roadmap\n");
		printf("3. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				save_document();
				break;
			case 2:
				display_roadmap();
				break;
			case 3:
				exit(0);
			default:
				printf("Invalid choice! Try again.\n");
		}
	}
	return 0;
}

