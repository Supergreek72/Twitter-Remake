Assignment 3:
Name: Dimitri Papadedes
UserName: dpapaded
Course: Cis 2500
Last revision: 03/21/2021

To compile my program you should run the make file by type "make" and then the output command is "./twitter" and once typed should run the program

Main: The main just consists of the user interface in the loop and branches to other functions
CreateTweet: This function will ask the user for a name and tweets and generate a user Id number for them. after that it sends the created tweet to the addNodeToList where it is added to the end of the current list
DisplayTweets: This is a simple function that just loops through the tweetList and prints out the information
SearchTweetsByKeyWord: This function uses strstr which can find an instance of a string within another string. Using this built in function I loop through the list checking each tweet for the key word, displaying if it is and counting
how many times it is found
CountStopWords: The count stop words functions has an array of words which is looped through within a loop going through the tweets with counters going up when ever one is found
DeleteTweet: This function asks the user for a number between 1 and how many nodes there are in the list (if there are no tweets a message saying that there are no tweets will appear) This is user inputed number is then taken and
checks which corresponding node is to be taken out. depending on the number different things will happen (this is so that new pathways for the ->next is done correctly)
SaveTweetsToFile: This is a very simple function, all that happenes is the user is asked which file to save to and from there the file is opened and then I loop through the list and used an fprintf to write to the file in the
formated way
loadTweetsFromFile: This function works by asking the user for a filename and then reading the information in with an fgets. this is then strtoked a couple times to extract the information.
addNodeToList: This function is called throughout the program to add a node to the end of the list. First I loop through the list until the last node then check if the node is null (for edge cases) and depending on the outcome I will
malloc for the next node and add it to the list


Things wrong:
The loadTweetsFromFile function I have works the only problem is actually adding the node to the list, for some reason I couldnt figure out the addNodeToList doesnt work here but it does for createTweet.

Improvements:
I think if I could just figure out why the strtok thing doesnt work in a loop then I think it would be almost perfect


