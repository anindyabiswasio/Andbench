#include<stdio.h>
#include <time.h>

int writeTest()
{
    clock_t start = clock(), diff;
    FILE *fp;
    fp = fopen("/tmp/speedtest.file", "w");
   
   for(long i=0;i<(104857600*5);i++)
   {
        putc('0', fp);
   }
    fclose(fp);
    diff = clock() - start;
    int msec = diff * 1000 / CLOCKS_PER_SEC;
    return msec;
}

int readTest()
{
    clock_t start = clock(), diff;
    FILE *fp;
    fp = fopen("/tmp/speedtest.file", "r");
    char ch;
    while( (ch = getc(fp)!= EOF)) ch=' ';
    
    // closing the file pointer
    fclose(fp);
    diff = clock() - start;
    int msec = diff * 1000 / CLOCKS_PER_SEC;
    return msec;
}