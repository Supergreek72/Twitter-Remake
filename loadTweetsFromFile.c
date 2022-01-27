#include "headerA3.h"

void loadTweetsFromFile(tweet ** tweetList){


        tweet * ptr = malloc(sizeof(tweet));
        FILE * inFile = NULL;
        char name[50],input[500];

        printf("Enter a file name:");
        scanf("%s",name);

        inFile = fopen(name,"r");

	if(inFile == NULL){
		printf("Not vaild File\n");
		return;
	}


	while(fgets(input,500,inFile)){

	//printf("Check: %s",ptr2->text);

/*
		count = 0;

		for(int i = 0;input[i] != '\0';i++){

			if(input[i] != ',' && count == 0){
				temp[i] = input[i];
			}else if(input[i] == ',' && count == 0){
				count++;
				printf("count++");
			}

			if(input[i] != ',' && count == 1){
				ptr->user[i] = input[i];
			}else if(input[i] == ',' && count == 1){
				count++;
			}


			if(input[i] != ',' && count == 2){
				ptr->text[i] = input[i];
			}else if(input[i] == ',' && count == 2){
				count++;
			}
		}

		ptr->id = atoi(temp);
*/


 		char * token = strtok(input,",");

        	ptr->id = atoi(token);

        	token = strtok(NULL,",");

        	strcpy(ptr->user,token);

        	token = strtok(NULL,",");

        	strcpy(ptr->text,token);

        	printf("%d:%s,%s\n",ptr->id,ptr->user,ptr->text);

		ptr->next = NULL;

		if((*tweetList) == NULL){
			(*tweetList) = malloc(sizeof(tweet));
			*tweetList = ptr;
		}else{
			addNodeToList(tweetList,ptr);
		}

	}

        fclose(inFile);


}
