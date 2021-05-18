#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "headerA4.h"

int main (){
    tweet * head = NULL;
    tweet * tail = NULL;
    tweet * retVal;
    int a;

    printf("Beginning A4 program testing....\n");
    printf("Creating initial queue list....\n");

    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);

    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);

    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);

    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);

    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);
    printf("\nVerifying queue contents via printQueue\n");
    printQueue(head);

    /**** 3 Test Cases of the Enqueue Function ****/
    printf("\nTesting [Enqueue] function\n");
    retVal = createTweet(head);
    printf("\nIteration [1]: [Node]: %d: created by %s: %s\n", retVal -> id, retVal -> user, retVal -> text);
    enqueue(&head, &tail, retVal);
    printf("\nAfter enqueue, queue looks like: \n");
    printQueue(head);

    printf("\n");
    retVal = createTweet(head);
    printf("\nIteration [2]: [Node]: %d: created by %s: %s\n", retVal -> id, retVal -> user, retVal -> text);
    enqueue(&head, &tail, retVal);
    printf("\nAfter enqueue, queue looks like: \n");
    printQueue(head);

    printf("\n");
    retVal = createTweet(head);
    printf("\nIteration [3]: [Node]: %d: created by %s: %s\n", retVal -> id, retVal -> user, retVal -> text);
    enqueue(&head, &tail, retVal);
    printf("\nAfter enqueue, queue looks like: \n");
    printQueue(head);

    /**** 3 Test Cases of the Dequeue Function ****/
    printf("\nTesting [Dequeue] function\n");
    printf("Iteration [1]\n");
    dequeue(&head, &tail);
    printf("After dequeue, queue looks like:\n");
    printQueue(head);

    printf("\nIteration [2]\n");
    dequeue(&head, &tail);
    printf("After dequeue, queue looks like:\n");
    printQueue(head);

    printf("\nIteration [3]\n");
    dequeue(&head, &tail);
    printf("After dequeue, queue looks like:\n");
    printQueue(head);

    /**** 3 Test Cases of the isEmpty Function ****/
    printf("\nTesting [isEmpty] function\n");
    printf("Iteration [1]\n");
    printf("Testing with list, expecting !isEmpty\n");
    a = isEmpty(head);
    
    if (a == 0){
        printf("SUCCESS: list is not empty\n");
    }
    else{
        printf("SUCCESS: empty list declared as empty\n");
    }
    
    printf("Using printQueue to verify queue contents:\n");
    printQueue(head);

    printf("\nIteration [2]\n");
    printf("Testing with list after 1 dequeue, expecting !isEmpty\n");
    dequeue(&head, &tail);
    a = isEmpty(head);

    if (a == 0){
        printf("SUCCESS: list is not empty\n");
    }
    else{
        printf("SUCCESS: empty list declared as empty\n");
    }

    printf("Using printQueue to verify queue contents:\n");
    printQueue(head);

    printf("\nIteration [3]\n");
    printf("Testing with empty list after 4 more dequeues, expecting isEmpty\n");
    dequeue(&head, &tail);
    dequeue(&head, &tail);
    dequeue(&head, &tail);
    dequeue(&head, &tail);
    a = isEmpty(head);

    if (a == 0){
        printf("SUCCESS: list is not empty\n");
    }
    else{
        printf("SUCCESS: empty list declared as empty\n");
    }

    printf("Using printQueue to verify queue contents:\n");
    printQueue(head);

    /**** The Test Case of the printQueue Function ****/
    printf("\nTesting [printQueue] function\n");
    printf("printQueue was used through the verification process already....\n");

    /**** 3 Test Cases of the sortID Function ****/
    printf("\nTesting [sortID] function\n");
    printf("Iteration [1]\n");
    retVal = createTweet(head); 
    enqueue(&head, &tail, retVal);
    
    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);
    
    printf("\n");
    sortID(&head, &tail);
    printQueue(head);

    dequeue(&head, &tail);
    dequeue(&head, &tail);

    printf("\n");
    printf("Iteration [2]\n");
    retVal = createTweet(head); 
    enqueue(&head, &tail, retVal);
    
    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);
   
    printf("\n");
    sortID(&head, &tail);
    printQueue(head);

    dequeue(&head, &tail);
    dequeue(&head, &tail);

    printf("\n");
    printf("Iteration [3]\n");
    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);
    
    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);

    printf("\n");
    sortID(&head, &tail);
    printQueue(head);

    /**** 3 Test Cases of the sortUsername Function ****/
    printf("\nTesting [sortUsername] function\n");
    printf("Iteration [1]\n");
    dequeue(&head, &tail);
    dequeue(&head, &tail);
    
    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);
    
    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);

    printf("\n");
    sortUsername(&head, &tail);
    printQueue(head);

    dequeue(&head, &tail);
    dequeue(&head, &tail);
    
    printf("\nIteration [2]\n");
    retVal = createTweet(head); 
    enqueue(&head, &tail, retVal);
    
    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);

    printf("\n");
    sortUsername(&head, &tail);
    printQueue(head);

    printf("\nIteration [3]\n");
    dequeue(&head, &tail);
    dequeue(&head, &tail);
    
    retVal = createTweet(head); 
    enqueue(&head, &tail, retVal);
    
    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);
    
    printf("\n");
    sortUsername(&head, &tail);
    printQueue(head);

    /**** 3 Test Cases of the reverse Function ****/
    printf("\nTesting [reverse] function\n");
    printf("Iteration [1]\n");
    retVal = createTweet(head); 
    enqueue(&head, &tail, retVal);
    
    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);

    printf("\nPrinting queue before reversing:\n");
    printQueue(head);
    reverse(&head, &tail);
    printf("\nPrinting queue after reversing:\n");
    printQueue(head);

    printf("\nIteration [2]\n");
    retVal = createTweet(head); 
    enqueue(&head, &tail, retVal);
    
    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);

    printf("\nPrinting queue before reversing:\n");
    printQueue(head);
    reverse(&head, &tail);
    printf("\nPrinting queue after reversing:\n");
    printQueue(head);

    printf("\nIteration [3]\n");
    retVal = createTweet(head); 
    enqueue(&head, &tail, retVal);
    
    retVal = createTweet(head);
    enqueue(&head, &tail, retVal);

    printf("\nPrinting queue before reversing:\n");
    printQueue(head);
    reverse(&head, &tail);
    printf("\nPrinting queue after reversing:\n");
    printQueue(head);

    printf("\nCompleted program testing.\n");

    //To free all memory allocations in the queue:
    clearList(head);

    return 0;
}

