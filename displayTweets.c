#include "headerA3.h"


void displayTweets(tweet * tweetList){

	//loop
	while(tweetList != NULL){
		printf("%d:Created by %s: %s\n",tweetList->id,tweetList->user,tweetList->text);
		tweetList = tweetList->next;
	}

}
