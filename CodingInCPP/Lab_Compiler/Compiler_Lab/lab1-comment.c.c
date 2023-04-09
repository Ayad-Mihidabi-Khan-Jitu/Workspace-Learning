#include <stdio.h>
#include <string.h>

int main() {
    char line[100];
    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);

    if (line[0] == '/' && line[1] == '/') {
        printf("This is a single-line comment\n");
    }
    else if (line[0] == '/' && line[1] == '*') {
        printf("This is the beginning of a multi-line comment\n");
    }
    else if (strstr(line, "*/")) {
        printf("This is the end of a multi-line comment\n");
    }
    else {
        printf("This is not a comment\n");
    }

    return 0;
}
