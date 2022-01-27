#include "headerA3.h"
void deleteTweet(tweet ** tweetList){

	//variables
	tweet * pre = NULL;
    	tweet * temp = *tweetList;
	int count = 0;
	int del = 0;

	//loop
	while(temp != NULL){
		count++;
		temp = temp->next;
	}

	//revert
	temp = *tweetList;

	//error check
	if(count == 0){
		printf("There are no tweets to delete\n");
		return;
	}

	printf("Which tweet do you wish to delete - enter a value between 1 and %d",count);

	scanf("%d",&del);


	printf("Tweet Deleted!\n");

	//reset
	count = 0;

	while(temp != NULL){
		count++;

		if(count == del){
			del = temp->id;
			break;
		}

		temp = temp->next;
	}


	//revert
        temp = *tweetList;

	//check if its the head
	if(temp->id == del && temp != NULL){
        	*tweetList = temp->next;
		//this is a way of freeing
        	free(temp);
        	return;
        }else{

		while (temp != NULL && temp->id != del){
       			pre = temp;
        		temp = temp->next;
    		}

		//delete
		pre->next = temp->next;
    		free(temp);
	}




}
