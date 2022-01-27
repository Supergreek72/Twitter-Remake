#include "headerA3.h"


tweet * createTweet( tweet * tweetList){

	//allocate space and declare
	tweet * newNode = malloc(sizeof(tweet));
	int sum = 0;//,nonZero = 1;
	char temp[451];


	//ask for username
	printf("\nEnter a username: ");
	fgets(temp,451,stdin);

	//error check
	while(strlen(temp) < 2 || strlen(temp) > 51){
		printf("Invalid username - Please try again:");
		strcpy(temp,"");
		fgets(temp,451,stdin);
	}

	strcpy(newNode->user,temp);
	strtok(newNode->user,"\n");

	strcpy(temp,"");

	//get the tweet
	printf("Enter the user's tweet: ");
	fgets(temp,451,stdin);

	//error check
	while(strlen(temp) < 2 || strlen(temp) > 141){
		printf("Invalid tweet - Please try again:");
		strcpy(temp,"");
		fgets(temp,451,stdin);
	}

	strcpy(newNode->text,temp);
	strtok(newNode->text,"\n");

	//loop to find sum
	for(int i = 0; newNode->user[i] != '\0';i++){
		sum = sum + (int)newNode->user[i];
	}

	//sum it all up
	newNode->id = sum + strlen(newNode->text);

	while(tweetList != NULL){
		if(newNode->id == tweetList->id){
			newNode->id = sum + strlen(newNode->text) + (rand() % 1000);
		}

		//advance
		tweetList = tweetList->next;

	}

	//tell user their number
	printf("Your computer generated userid is %d\n",newNode->id);

	//set the next to null
	newNode->next = NULL;

	return newNode;


}
