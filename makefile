a4: helper.o queueFunctions.o miscFunctions.o testA4.o
	gcc -Wall -std=c99 helper.o queueFunctions.o miscFunctions.o testA4.o -o a4

testA4.o: testA4.c 
	gcc -Wall -std=c99 -c testA4.c

helper.o: helper.c
	gcc -Wall -std=c99 -c helper.c

queueFunctions.o: queueFunctions.c
	gcc -Wall -std=c99 -c queueFunctions.c

miscFunctions.o: miscFunctions.c
	gcc -Wall -std=c99 -c miscFunctions.c

clean:
	rm *.o a4
