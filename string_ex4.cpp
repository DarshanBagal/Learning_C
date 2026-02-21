#include <stdio.h>
#include <string.h>

int main() {
    char savedPassword[20] = "Darshan123"; 
    char input[20];

    printf("Enter Password: ");
    scanf("%19s", input);   

    if (strcmp(savedPassword, input) == 0) {
        printf("Login Success ?\n");
    } else {
        printf("Login Failed ?\n");
    }

    return 0;
}

