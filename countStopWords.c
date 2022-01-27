#include "headerA3.h"
void countStopWords(tweet * tweetList){

	//variables
	tweet * ptr = tweetList;
	char words[25][10] = {"a ","an ","and ","are ","as ","at ","be ","by ","for ","from ","has ","he ","in ",
	"is ","it ","its ","of ","on ","that ","the ","to ","was ","were ","will ","with "};
	int tweetCount = 0,wordCount = 0;


	//loop
	while(ptr != NULL){

		//loop throught the words
		for(int i = 0; i < 25; i++){
			//check if the word is in the text
			if(strstr(ptr->text,words[i]) != NULL){
				//advance
				wordCount++;
				printf("%s\n",words[i]);
			}
		}

		//advance
		tweetCount++;
		ptr = ptr->next;
	}


	//display
	printf("Across %d tweets, %d stop words were found.\n",tweetCount,wordCount);


}
