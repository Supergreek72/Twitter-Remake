#include "headerA3.h"

void addNodeToList(tweet**tweetList,tweet * node){

	//copy it
	tweet * ptr = (*tweetList);

	//loop
	while(ptr->next != NULL){
		ptr = ptr->next;
	}

	//check if null
	if(ptr->id == 0){
		(*tweetList) = node;
	}else{
		ptr->next = malloc(sizeof(tweet));
		ptr->next = node;
	}

//	printf("%s\n\n",ptr->text);
}
