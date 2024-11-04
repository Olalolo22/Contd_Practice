#include <stdio.h>
#include <string.h>
/*
The same library borrowing software, but improved and risks of exploitiation mitgated
*/
// Define a structure for books
typedef struct {
    char title[30];
    char status[10]; // "available" or "borrowed"
} Book;

// Define a structure for members
typedef struct {
    char name[30];
    char membership[10]; // "regular" or "special"
} Member;

int main() {
    // Predefined list of books
    Book books[4] = {
        {"The Great Gatsby", "available"},
        {"1984", "borrowed"},
        {"To Kill a Mockingbird", "available"},
        {"Moby Dick", "borrowed"}
    };

    // Predefined list of members
    Member members[2] = {
        {"Alice", "regular"},
        {"Bob", "special"}
    };

    char bookTitle[30];
    char memberName[30];

    // Get user input safely
    printf("Enter book title: ");
    fgets(bookTitle, sizeof(bookTitle), stdin);
    bookTitle[strcspn(bookTitle, "\n")] = '\0'; // Remove newline character

    printf("Enter your name: ");
    fgets(memberName, sizeof(memberName), stdin);      // fgets here takes away the risk of the system taking in more chars than it should
    memberName[strcspn(memberName, "\n")] = '\0'; // Remove newline character

    // Check book availability
    int bookFound = 0;
    int bookIndex = -1;
    for (int i = 0; i < 4; i++) {
        if (strcasecmp(books[i].title, bookTitle) == 0) {
            bookFound = 1;
            bookIndex = i;
            break;
        }
    }

    // Check member validity
    int memberFound = 0;
    int memberIndex = -1;
    for (int i = 0; i < 2; i++) {
        if (strcasecmp(members[i].name, memberName) == 0) {
            memberFound = 1;
            memberIndex = i;
            break;
        }
    }

    // Determine if the book can be borrowed or reserved
    if (bookFound && memberFound) {
        if (strcmp(books[bookIndex].status, "available") == 0) {
            printf("You can borrow the book \"%s\".\n", books[bookIndex].title);
        } else if (strcmp(books[bookIndex].status, "borrowed") == 0 && strcmp(members[memberIndex].membership, "special") == 0) {
            printf("You can reserve the book \"%s\".\n", books[bookIndex].title);
        } else {
            printf("The book \"%s\" is currently borrowed and cannot be reserved with your membership.\n", books[bookIndex].title);
        }
    } else {
        if (!bookFound) {
            printf("The book \"%s\" is not found in the library.\n", bookTitle);
        }
        if (!memberFound) {
            printf("The member \"%s\" is not found in the database.\n", memberName);
        }
    }

    return 0;
}
