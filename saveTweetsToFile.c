#include "headerA3.h"
void saveTweetsToFile(tweet * tweetList){

	//variables
	char fileName[50];
	FILE * outFile = NULL;

	tweet * ptr = tweetList;

	//ask for file name
	printf("Enter the filename where you would like to store your tweets:");
	scanf("%s",fileName);

	outFile = fopen(fileName,"w");


	//loop
	while(ptr != NULL){

		fprintf(outFile,"%d,%s,%s,\n",ptr->id,ptr->user,ptr->text);

		ptr = ptr->next;
	}

	//close file
	fclose(outFile);

	printf("Tweets exported to file!\n");

}
