#include<stdio.h>
#include <time.h>

unsigned long writeTest()
{
    unsigned long start = (unsigned long)time(NULL);
   
    FILE *fp;
    fp = fopen("/tmp/speedtest.file", "w");
   
   for(long i=0;i<(104857600*5);i++)
   {
        putc('0', fp);
   }
    fclose(fp);
    unsigned long diff = ((unsigned long)time(NULL))- start;
    return diff;
}

unsigned long readTest()
{
    unsigned long start = (unsigned long)time(NULL);
    FILE *fp;
    fp = fopen("/tmp/speedtest.file", "r");
    char ch;
    while( (ch = getc(fp)!= EOF)) ch=' ';
    
    // closing the file pointer
    fclose(fp);
    unsigned long diff = ((unsigned long)time(NULL))- start;
    return diff;
}