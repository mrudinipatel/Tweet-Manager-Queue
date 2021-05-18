#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "headerA4.h"

void enqueue (tweet ** head, tweet ** tail, tweet * node){
    /*
     * This function will take the node returned from
     * the createTweet function into main and the head
     * of the queue. It will then iterate through the 
     * queue and if the queue is empty (no tweets
     * in it already), then node will become the head.
     * Otherwise, it will enter a loop that will push
     * the node to the end of the queue.
    */

    if (node != NULL){
        if (*head == NULL){
            *head = node;
        }
        else{
            tweet * lastNode = *head;

            while(lastNode -> next != NULL){
                lastNode = lastNode -> next;
            }

            lastNode -> next = node;
        }
    }
}

void dequeue (tweet ** head, tweet ** tail){
    /* I'm deleting the node from the front (or start) of the queue.
     * If the head is empty, it means that the queue is also empty
     * (since we are adding nodes from the end of the queue in our enqueue function).
     * Otherwise, the head is removed and the rest of the nodes are shifted up.
    */
    tweet * temp = *head;
    if (*head == NULL){
        printf("The queue is empty.\n");
    }
    else{
        *head = (*head) -> next;

        if (*head == NULL){
            *tail = NULL;
        }
    }
    free(temp);
}

int isEmpty (tweet * head){
    /* If the head is empty, it means that the entire queue
     * is empty, in which case we return true from the function
     * using the stdbool.h library which assigns true with a value
     * of 1. Otherwise, we return 0 from the function.
    */
    if (head == NULL){
        return true;
    }
    else{
        return 0;
    }
}

void printQueue (tweet * head){
    // I'll just be printing the queue contents out using a iterative loop.
    tweet * temp = head;

    while (temp != NULL){
        printf("%d: Created by %s: %s\n", temp -> id, temp -> user, temp -> text);
        temp = temp -> next;
    }
}

