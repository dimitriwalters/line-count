#include <stdio.h>

int main (int argc, char **argv) {
    FILE *f;
    int count;
    char line[80];

    if (argc != 2) {
        fprintf(stderr, "line: requires one argument\n");
    } else {
        f = fopen(argv[1], "r");

        if (f == NULL) {
            fprintf(stderr, "line: cannot open file '%s'\n", argv[1]);
        } else {
            while (fgets(line, sizeof(line), f) != NULL) {
                count++;
            }
            fclose(f);
            printf("%d\n", count);
        }
    }

    return 0;
}
