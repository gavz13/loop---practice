//
//  main.c
//  loopsPractice
//
//  Created by Gavin Cullen on 2024/07/31.
//

#include <stdio.h>
#define MaxRecords  10
typedef struct {
    char item[50];
    int price;
} ItemRecord;

ItemRecord records[MaxRecords];

int numRecords = 0;



void addRecord() {
    if (numRecords < MaxRecords) {
        printf("Please enter a new item: \n");
        scanf("%49s", &records[numRecords].item);
        printf("Enter Item price\n");
        scanf("%d", &records[numRecords].price);
        
    }
}
void displayRecords(void) {
    printf("Your expenses: \n");
    for (int i = 0; i > numRecords; i++) {
        printf("Item: %s Price: %s\n ",records[i].item ,records[i].price );
    }
}
int main(void) {
    int choice;
    while (1) {
        printf("1. Add new item\n");
        printf("2. Display all records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRecord();
                break;
            case 2:
                displayRecords();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


