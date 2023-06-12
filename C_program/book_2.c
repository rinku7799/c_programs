#include <stdio.h>
struct book
{
    int book_id;
    char book_name;
    char title[20];
    char author[20];
    char publisher[20];
    int year;
};

int main()
{
    struct book library[100];
    int choice, n_books = 0, book_id, i, book_number;
    char book_name[20];

    do
    {
        printf("Library Managemet System:\n");
        printf("1. Add book information:\n");
        printf("2. Display book information:\n");
        // printf("3. List all book given author:\n");
        // printf("4. List the books in order of access number:\n ");
        // printf("5. Exit");

        printf("enter the choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (n_books >= 100)
            {
                printf("Library is full\n");
                return;
            }
            printf("Enter book title: ");
            scanf("%s", library[n_books].title);

            printf("Enter author name: ");
            scanf("%s", library[n_books].author);

            printf("Enter publisher name: ");
            scanf("%s", library[n_books].publisher);

            printf("Enter publication year: ");
            scanf("%d", &library[n_books].year);



            n_books++;

        case 2:
             if (n_books == 0)
            {
                printf("Library is empty\n");
                return 0;
            }

            printf("\n%-50s%-20s%-20s%-10s%-10s\n", "Title", "Author", "Publisher", "Year", "Access");
            printf("------------------------------------------------------------------------------\n");

            for (i = 0; i < n_books; i++)
            {
                printf("%-50s%-20s%-20s%-10d%-10d\n", library[i].title, library[i].author, library[i].publisher, library[i].year);
            }

        default:
            break;
        }

    }
     while (choice != 2);
    return 0;
}