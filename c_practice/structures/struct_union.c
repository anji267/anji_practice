#include <stdio.h>
#include <string.h>

struct Book {
    char name[50];
    int pages;
    char author[50];
};

struct Shirt {
    char colour[20];
    int size;
    char pattern[20];
};

union Items {
    struct Book book;
    struct Shirt shirts;
};

struct store {
    int price;
    union Items items;
};

int main()
{
    struct store s;

    s.price = 500;
    strcpy(s.items.book.name, "Life of Pi");
    s.items.book.pages = 348;
    strcpy(s.items.book.author, "Yann Martel");

    printf("The book name is : %s\n", s.items.book.name);
    printf("The size of structure is : %lu\n", sizeof(s));

    return 0;
}

