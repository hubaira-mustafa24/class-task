
#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[100];
    char *ptr;

    printf("Enter email address: ");
    scanf("%99s", email);

    ptr = strchr(email, '@');

    if (ptr != NULL && ptr != email && strchr(ptr + 1, '@') == NULL && strchr(ptr + 1, '.') != NULL) {
        strcpy(domain, ptr + 1);

        printf("Email Address: %s\n", email);
        printf("Domain Name: %s\n", domain);
    }
    else {
        printf("Invalid email address!\n");
    }

    return 0;
}
