//file name will be input00
#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME_LENGTH 30
#define MAX_READERS 10
#define MAX_BOOKS 20

//for graphicas
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


// Structure for reader
struct reader {
    int id;
    char name[MAX_NAME_LENGTH];
    char due;
    int dbid;
};

// Structure for book
struct book {
    int id;
    char name[MAX_NAME_LENGTH];
    char author[MAX_NAME_LENGTH];
    char avbl;
    int rid;
};

// Function prototypes
void addBook(struct book[], int *);
void searchBook(struct book[]);
void addReader(struct reader[], int *);
void searchReader(struct reader[]);
void issueBook(struct book[], struct reader[]);
void submitBook(struct book[], struct reader[]);
void deleteBook(struct book[]);
void deleteReader(struct reader[]);
void listBooks(struct book[]);
void saveData(struct book[], struct reader[], int, int);

int main() {
    struct reader rdr[MAX_READERS] = {0}; // Array of readers
    struct book bk[MAX_BOOKS] = {0};     // Array of books
    int choice, readers_count = 0, books_count = 0;

    printf("\n\t\tWELCOME!\n"); // Welcome message

    do {
        printf(ANSI_COLOR_RED "\n\t\t" ANSI_COLOR_RESET);
        printf(ANSI_COLOR_YELLOW "\t\t|\n" ANSI_COLOR_RESET);
        printf(ANSI_COLOR_BLUE "\t\tWelcome To Our Project\n" ANSI_COLOR_RESET);
        printf(ANSI_COLOR_RED "\n" ANSI_COLOR_RESET);
        printf(ANSI_COLOR_BLUE "\t\tLibrary Management System\n" ANSI_COLOR_RESET);
        printf(ANSI_COLOR_CYAN "\t\t=========================\n" ANSI_COLOR_RESET);

        printf(ANSI_COLOR_RED "\n\t\033[1m1. Add new book\t\t2. Search book\n\n" ANSI_COLOR_RESET);
        printf(ANSI_COLOR_GREEN "\t3. Add new reader\t4. Search reader\n" ANSI_COLOR_RESET);
        printf(ANSI_COLOR_YELLOW "\t5. Issue book\t\t6. Submit book\n" ANSI_COLOR_RESET);
        printf(ANSI_COLOR_BLUE "\t7. Delete book\t\t8. Delete reader\n" ANSI_COLOR_RESET);
        printf(ANSI_COLOR_MAGENTA "\t9. List of books\t10. Exit\n\n" ANSI_COLOR_RESET);
        printf(ANSI_COLOR_CYAN "\tEnter your choice:\n\n" ANSI_COLOR_RESET);
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(bk, &books_count);
                break;
            case 2:
                searchBook(bk);
                break;
            case 3:
                addReader(rdr, &readers_count);
                break;
            case 4:
                searchReader(rdr);
                break;
            case 5:
                issueBook(bk, rdr);
                break;
            case 6:
                submitBook(bk, rdr);
                break;
            case 7:
                deleteBook(bk);
                break;
            case 8:
                deleteReader(rdr);
                break;
            case 9:
                listBooks(bk);
                break;
            case 10:
                printf("\n\t\tTHANK YOU!\n");
                saveData(bk, rdr, books_count, readers_count);
                exit(0);
            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 10);

    return 0;
}

// Function to add a book
void addBook(struct book bk[], int *count) {
    if (*count < MAX_BOOKS) {
        printf("Enter name of the book: ");
        scanf("%s", bk[*count].name);
        printf("Enter name of the author: ");
        scanf("%s", bk[*count].author);
        printf("Enter book ID: ");
        scanf("%d", &bk[*count].id);
        bk[*count].avbl = 'y'; // Set availability to y
        bk[*count].rid = 0;    // Set reader's id to 0 as default
        (*count)++;
        printf("Book added successfully.\n\n");
    } else {
        printf("Maximum book limit reached!\n");
    }
}

// Function to search for a book
void searchBook(struct book bk[]) {
    int searchid, found = 0;
    printf("Enter book ID: ");
    scanf("%d", &searchid);
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (searchid == bk[i].id) {
            printf("\n\tBook Information\nBook ID: %d\tBook Name: %s\nAuthor Name: %s\nAvailable: %c\tDue by Reader ID: %d\n", bk[i].id, bk[i].name, bk[i].author, bk[i].avbl, bk[i].rid);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n\n");
    }
}

// Function to add a reader
void addReader(struct reader rdr[], int *count) {
    if (*count < MAX_READERS) {
        printf("Enter Reader's name: ");
        scanf("%s", rdr[*count].name);
        printf("Enter Reader id: ");
        scanf("%d", &rdr[*count].id);
        rdr[*count].due = 'n';
        rdr[*count].dbid = 0;
        (*count)++;
        printf("Reader added successfully.\n\n");
    } else {
        printf("Maximum reader limit reached!\n");
    }
}

// Function to search for a reader
void searchReader(struct reader rdr[]) {
    int searchid, found = 0;
    printf("Enter Reader ID: ");
    scanf("%d", &searchid);
    for (int i = 0; i < MAX_READERS; i++) {
        if (searchid == rdr[i].id) {
            printf("\n\tReader Information\nReader ID: %d\tReader Name: %s\nDue: %c\t\tDue book ID: %d\n", rdr[i].id, rdr[i].name, rdr[i].due, rdr[i].dbid);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Reader not found.\n\n");
    }
}

// Function to issue a book
void issueBook(struct book bk[], struct reader rdr[]) {
    int searchid, searchid1, n = 0, m = 0;
    printf("Enter book ID: ");
    scanf("%d", &searchid);
    printf("Enter reader ID: ");
    scanf("%d", &searchid1);

    for (int i = 0; i < MAX_BOOKS; i++) {
        if (searchid == bk[i].id && bk[i].avbl == 'y') {
            bk[i].avbl = 'n';
            bk[i].rid = searchid1;
            n++;
            break;
        }
    }

    for (int i = 0; i < MAX_READERS; i++) {
        if (searchid1 == rdr[i].id && rdr[i].due == 'n') {
            rdr[i].due = 'y';
            rdr[i].dbid = searchid;
            m++;
            break;
        }
    }

    if (n == 1 && m == 1) {
        printf("Book issued successfully.\n\n");
    } else if (n == 1 && m == 0) {
        for (int i = 0; i < MAX_BOOKS; i++) {
            if (searchid == bk[i].id) {
                bk[i].avbl = 'y';
                bk[i].rid = 0;
                break;
            }
        }
        printf("Book not issued. Reader has a due book.\n\n");
    } else {
        printf("Book not found or already issued.\n\n");
    }
}

// Function to submit a book
void submitBook(struct book bk[], struct reader rdr[]) {
    int searchid, searchid1;
    printf("Enter book ID: ");
    scanf("%d", &searchid);
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (searchid == bk[i].id) {
            bk[i].avbl = 'y';
            searchid1 = bk[i].rid;
            bk[i].rid = 0;
            break;
        }
    }
    for (int i = 0; i < MAX_READERS; i++) {
        if (searchid1 == rdr[i].id) {
            rdr[i].due = 'n';
            rdr[i].dbid = 0;
            break;
        }
    }
    printf("Book ID %d submitted successfully.\n\n", searchid);
}

// Function to delete a book
void deleteBook(struct book bk[]) {
    int searchid, found = 0;
    printf("Enter book ID to be deleted: ");
    scanf("%d", &searchid);
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (searchid == bk[i].id) {
            for (int j = i; j < MAX_BOOKS; j++) {
                bk[j] = bk[j + 1];
            }
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Book ID %d deleted.\n\n", searchid);
    } else {
        printf("Book not found.\n\n");
    }
}

// Function to delete a reader
void deleteReader(struct reader rdr[]) {
    int searchid, found = 0;
    printf("Enter reader ID to be deleted: ");
    scanf("%d", &searchid);
    for (int i = 0; i < MAX_READERS; i++) {
        if (searchid == rdr[i].id) {
            for (int j = i; j < MAX_READERS; j++) {
                rdr[j] = rdr[j + 1];
            }
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Reader ID %d deleted.\n\n", searchid);
    } else {
        printf("Reader not found.\n\n");
    }
}

// Function to list all books
void listBooks(struct book bk[]) {
    printf("\n\t\tBook list\n\nID\tName\t\t\tAuthor\t\t\tAvailable\tReader ID\n\n");
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (bk[i].id != 0) {
            printf("%d\t\t%s\t\t %s\t\t\t%c\t\t%d\n", bk[i].id, bk[i].name, bk[i].author, bk[i].avbl, bk[i].rid);
        }
    }
}

// Function to save data to a file
void saveData(struct book bk[], struct reader rdr[], int books_count, int readers_count) {
    FILE *file;
    file = fopen("input00.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(file, "Books\n");
    for (int i = 0; i < books_count; i++) {
        fprintf(file, "%d %s %s %c %d\n", bk[i].id, bk[i].name, bk[i].author, bk[i].avbl, bk[i].rid);
    }

    fprintf(file, "\nReaders\n");
    for (int i = 0; i < readers_count; i++) {
        fprintf(file, "%d %s %c %d\n", rdr[i].id, rdr[i].name, rdr[i].due, rdr[i].dbid);
    }

    fclose(file);
    printf("Data saved successfully!\n");
}
