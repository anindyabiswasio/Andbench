ThreadCPUPrimeTest : ThreadCPUPrimeTest.o FileReadWriteTest.o Launcher.o
		gcc -pthread -o AndBench ThreadCPUPrimeTest.o Launcher.o FileReadWriteTest.o

ThreadCPUPrimeTest.o : ThreadCPUPrimeTest.c
		gcc -c ThreadCPUPrimeTest.c

Launcher.o : Launcher.c
		gcc -c Launcher.c

FileReadWriteTest.o : FileReadWriteTest.c
		gcc -c FileReadWriteTest.c

clean : 
	rm AndBench ThreadCPUPrimeTest.o Launcher.o FileReadWriteTest.o

install :
	cp AndBench /bin/
