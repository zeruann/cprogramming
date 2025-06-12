#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    fprintf(fp, "New Line\n");
    fclose(fp);
    return 0;
}


/* READS

int main() {

    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
    } else {
        printf("File opened successfully.\n"); //FILE ALR EXISTED SO THIS WILL OUTPUT
        fclose(fp);
    }
    return 0;
}
*/

/* W+ , ELSE PRINT
int main() {

    FILE *fp = fopen("data.txt", "w+");
    if (fp == NULL) {
        printf("File not found!\n");
    } else {
        printf("File opened successfully.\n");
        fclose(fp);
    }
    return 0;
}*/

/* output: Hello, world!
int main() {
    FILE *fp = fopen("test.txt", "w");
    fprintf(fp, "Hello, world!");
    fclose(fp);

    fp = fopen("test.txt", "r");
    char str[20];
    fgets(str, 20, fp);
    printf("%s", str);
    fclose(fp);
    return 0;
}*/
