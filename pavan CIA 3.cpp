#include <stdio.h>

int main() {
    int choice = 2;  // You can replace this with the actual user input

    switch (choice) {
        case 1:
            // Print numbers in a nested loop
            for (size_t i = 0; i < 5; i++) {
                printf(" >> %lu", i);
                for (size_t j = 5; j < 10; j++) {
                    printf(" [%lu] ", j);
                }
            }
            break;
        case 2:
            // Print fruits from an array
            char *fruits[] = {"Apple", "Mango", "Banana", "Grapes"};
            for (size_t i = 0; i < 4; i++) {
                printf("%s", fruits[i]);
                if (i < 3) {
                    printf(", ");
                }
            }
            break;
        case3:
            // Print addresses of two variables
            int test = 12;
            int test1 = 12;
            printf("%p, %p", (void*)&test, (void*)&test1);
            break;
     default:
            printf("Invalid choice\n");
    }

    return 0;
}

