#include "headerA3.h"

int main(void){

	//variables
	int choice = 0;
	tweet * tweetList = NULL;// = malloc(sizeof(tweet));
	//tweet * head;
	tweet * temp = malloc(sizeof(tweet));

	//loops until they exit
	while(choice != 8){
		choice = 0;

		printf("1. Create a new tweet\n2. Display tweets\n3. Search a tweet (by keyword)\n4. Find how many words are stop words\n5. Delete the nth tweet\n6. Save tweets to a file");
		printf("\n7. Load tweets from a file\n8. Exit\n");
		scanf("%d",&choice);
		getchar();

		//check what they chose
		if(choice == 1){

			temp = createTweet(tweetList);

			if(tweetList == NULL){
				tweetList = malloc(sizeof(tweet));
			}

			addNodeToList(&tweetList,temp);

		}else if(choice == 2){
			displayTweets(tweetList);
		}else if(choice == 3){
			searchTweetsByKeyword(tweetList);
		}else if(choice == 4){
			countStopWords(tweetList);
		}else if(choice == 5){
			deleteTweet(&tweetList);
		}else if(choice == 6){
			saveTweetsToFile(tweetList);
		}else if(choice == 7){
			loadTweetsFromFile(&tweetList);
		}else if(choice == 8){
			printf("Closing Program...\n");
		}else{
			printf("Not a valid number - please re-enter value:\n");
		}

	}







	return 0;
}
