#include "headerA3.h"
int searchTweetsByKeyword(tweet * tweetList){

	//variables
	char word[40],capWord[40];
	int count = 0;
	tweet * temp = tweetList;

	//get keyword
	printf("Enter a keyword to search: ");
	fgets(word,40,stdin);
	strtok(word,"\n");
	strcpy(capWord,word);
	//make one upper and one lower
	word[0] = tolower(word[0]);
	capWord[0] = toupper(capWord[0]);

	//loop
	while(temp != NULL){

		//check for for
		if(strstr(temp->text,word) != NULL || strstr(temp->text,capWord) != NULL){
			printf("Match Found for '%s': %s wrote: \"%s\"\n",word,temp->user,temp->text);
			count++;
		}

		//advance
		temp = temp->next;
	}

	//check if there is no match
	if(count == 0){
		printf("match not found\n");
		return 0;
	}

	return 1;

}
