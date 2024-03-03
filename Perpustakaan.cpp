#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 1000
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 50
#define MAX_YEAR_LENGTH 5
#define DATABASE_FILE "database.txt"

typedef struct
{
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    char year[MAX_YEAR_LENGTH];
} Book;

Book books[MAX_BOOKS];
int num_books = 0;

void load_database()
{
    FILE *file = fopen(DATABASE_FILE, "r");
    if (file == NULL)
    {
        printf("Error: could not open database file.\n");
        exit(1);
    }

    char line[MAX_TITLE_LENGTH + MAX_AUTHOR_LENGTH + MAX_YEAR_LENGTH + 3];
    while (fgets(line, sizeof(line), file) != NULL)
    {
        char *title = strtok(line, ",");
        char *author = strtok(NULL, ",");
        char *year = strtok(NULL, ",");
        if (title != NULL && author != NULL && year != NULL)
        {
            strcpy(books[num_books].title, title);
            strcpy(books[num_books].author, author);
            strcpy(books[num_books].year, year);
            num_books++;
        }
    }

    fclose(file);
}

void save_database()
{
    FILE *file = fopen(DATABASE_FILE, "w");
    if (file == NULL)
    {
        printf("Error: could not open database file.\n");
        exit(1);
    }

    for (int i = 0; i < num_books; i++)
    {
        fprintf(file, "%s,%s,%s\n", books[i].title, books[i].author, books[i].year);
    }

    fclose(file);
}

void add_book(char *title, char *author, char *year)
{
    if (num_books >= MAX_BOOKS)
    {
        printf("Error: database is full.\n");
        return;
    }

    strcpy(books[num_books].title, title);
    strcpy(books[num_books].author, author);
    strcpy(books[num_books].year, year);
    num_books++;

    save_database();
}

void list_books()
{
    printf("Title\t\tAuthor\t\tYear\n");
    for (int i = 0; i < num_books; i++)
    {
        printf("%s\t\t%s\t\t%s\n", books[i].title, books[i].author, books[i].year);
    }
}

int main()
{
    load_database();

    char choice;
    do
    {
        printf("1. Add book\n");
        printf("2. List books\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case '1':
        {
            char title[MAX_TITLE_LENGTH];
            char author[MAX_AUTHOR_LENGTH];
            char year[MAX_YEAR_LENGTH];
            printf("Enter title: ");
            scanf(" %[^\n]", title);
            printf("Enter author: ");
            scanf(" %[^\n]", author);
            printf("Enter year: ");
            scanf(" %[^\n]", year);
            add_book(title, author, year);
            break;
        }
        case '2':
        {
            list_books();
            break;
        }
        case '3':
        {
            printf("Exiting...\n");
            break;
        }
        default:
        {
            printf("Invalid choice.\n");
            break;
        }
        }
    } while (choice != '3');

    return 0;
}
