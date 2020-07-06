#include <stdio.h>
#include "ThreadCPUPrimeTest.h"
#include "FileReadWriteTest.h"

int main(int argc, char * argv[]) {
    printf("----------------------------------------------------------------------------");
    printf("\nAndBench Started...");
    printf("\n----------------------------------------------------------------------------\n");
    int cpuScore = cpu_calculate(argc,argv);
    printf(" CPU Score : %d",cpuScore);
    int fileWriteScore = writeTest();
    printf("\n Write Speed Score : %d",fileWriteScore);
    int fileReadScore =readTest();
    printf("\n Read Speed Score : %d\n",fileReadScore);
}
