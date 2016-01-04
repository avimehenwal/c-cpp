/*
 *   file_operations.c
 *   c.avimehenwal
 * 
 *   Created by avimehenwal on 30/12/15.
 *   Copyright (c) 2015 avimehenwal. All rights reserved.
 */

#include <stdio.h>

int main() {
   
   FILE *fp;

   // Writing to a new file
   fp = fopen("test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);

   // reading from the file
   FILE *fpr;
   char buff[255];

   fpr = fopen("/tmp/test.txt", "r");
   fscanf(fpr, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, 255, (FILE*)fpr);
   printf("2: %s\n", buff );
   
   fgets(buff, 255, (FILE*)fpr);
   printf("3: %s\n", buff );
   fclose(fpr);
}
