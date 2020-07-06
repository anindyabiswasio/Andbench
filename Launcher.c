#include <stdio.h>
#include "ThreadCPUPrimeTest.h"
#include "FileReadWriteTest.h"

int main(int argc, char * argv[]) {
    printf("----------------------------------------------------------------------------");
    printf("\nAndBench Started...");
    printf("\n----------------------------------------------------------------------------\n");
    unsigned long cpuScore = cpu_calculate(argc,argv);
    printf(" CPU Score : %lu",cpuScore);
    unsigned long fileWriteScore = writeTest();
    printf("\n Write Speed Score : %lu",fileWriteScore);
    unsigned long fileReadScore =readTest();
    printf("\n Read Speed Score : %lu\n",fileReadScore);
}
