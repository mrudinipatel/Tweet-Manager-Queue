#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "headerA4.h"

void sortID (tweet ** head, tweet ** tail){
    /* Using the bubble sort technique to sort the queue in ascending order of IDs.
     * If the current id is greater than the next one, we swap the id, username, and tweet text.
     * By doing so, we can attain a queue that is in ascending order of user IDs.
    */
    tweet * temp = *head;
    int a, num;
    char * username = malloc(sizeof(char) * 150);
    char * tweetText = malloc(sizeof(char) * 150);

    a = isEmpty(*head);
    if (a != 0){
        printf("List is empty, and cannot be sorted\n");
        return;
    }

    while (temp != NULL){

        if ((temp -> id) > (temp -> next -> id)){
            num = temp -> id;
            temp -> id = temp -> next -> id;
            temp -> next -> id = num;

            strcpy(username, temp -> user);
            strcpy(temp -> user, temp -> next -> user);
            strcpy(temp -> next -> user, username);

            strcpy(tweetText, temp -> text);
            strcpy(temp -> text, temp -> next -> text);
            strcpy(temp -> next -> text, tweetText);
        }

        temp = temp -> next;

        if (temp -> next == NULL){ // if we reach the end of the queue, we should return back to main.
            free(username);
            free(tweetText);
            return;
        }
    }
    free(username);
    free(tweetText);
}

void sortUsername (tweet ** head, tweet ** tail){
    /* Using the bubble sort technique to sort the queue in ascending order of IDs.
     * I'm comparing the alphabetical characters in the usernames. If the current username
     * starts with letters that should come after the next one, we swap the username, tweet text, and id.
     * By doing so, we can attain a queue that is in ascending order of usernames in alphabetical order.
    */
    tweet * temp = *head;
    int a, num;
    char * username = malloc(sizeof(char) * 150);
    char * tweetText = malloc(sizeof(char) * 150);

    a = isEmpty(*head);
    if (a != 0){
        printf("List is empty, and cannot be sorted\n");
        return;
    }

    while (temp != NULL){

        if (strcmp(temp -> user, temp -> next -> user) > 0){
            strcpy(username, temp -> user);
            strcpy(temp -> user, temp -> next -> user);
            strcpy(temp -> next -> user, username);

            strcpy(tweetText, temp -> text);
            strcpy(temp -> text, temp -> next -> text);
            strcpy(temp -> next -> text, tweetText);

            num = temp -> id;
            temp -> id = temp -> next -> id;
            temp -> next -> id = num;
        }

        temp = temp -> next;

        if (temp -> next == NULL){ // if we reach the end of the queue, we should return back to main.
            free(username);
            free(tweetText);
            return;
        }
    }
    free(username);
    free(tweetText);

}

void reverse (tweet ** head, tweet ** tail){
    /* I'm reversing the queue order by assigning the node that comes after the current one
     * to a temporary pointer, and set the previous node to the next one. I can then set previous
     * to the current node and current node to the 'after' node. By doing so, I can reverse the 
     * order of the queue tweets.
    */
   tweet * temp = *head;
   tweet * previous = NULL;
   tweet * after;

   while (temp != NULL){
       after = temp -> next;
       temp -> next = previous;
       previous = temp;
       temp = after;
   }
   *head = previous;
}

