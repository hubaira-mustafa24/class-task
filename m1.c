
#include <stdio.h>
#include <string.h>

int main() {
    char feedback[500];
    char updated[1000] = "";
    char *ptr;
    char *badWord;
    int i = 0;

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    feedback[strcspn(feedback, "\n")] = '\0';

    printf("\nTotal Characters: %d\n", (int)strlen(feedback));

    if (strstr(feedback, "good") != NULL) {
        printf("The word 'good' exists.\n");
    }

    if (strstr(feedback, "bad") != NULL) {
        printf("The word 'bad' exists.\n");
    }

    ptr = feedback;

    while ((badWord = strstr(ptr, "bad")) != NULL) {
        strncat(updated, ptr, badWord - ptr);
        strcat(updated, "not good");

        ptr = badWord + 3;
        i = 1;
    }

    strcat(updated, ptr);

    if (i == 0) {
        strcpy(updated, feedback);
    }

    printf("\nUpdated Feedback: %s\n", updated);

    return 0;
}
