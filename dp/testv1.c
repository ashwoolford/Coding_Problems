#include <stdio.h>
#include <stdlib.h>


int main(){
	    FILE * fp;
        char c;
        printf("File Handling\n");
        //open a file
        fp = fopen("data.txt", "w");
        //writing operation
        while ((c = getchar()) != EOF) {
            putc(c, fp);
        }
        //close file
        fclose(fp);
        printf("Data Entered:\n");
        //reading
        fp = fopen("data.txt", "r");
        while ((c = getc(fp)) != EOF) {
            printf("%c", c);
        }
        fclose(fp);
}