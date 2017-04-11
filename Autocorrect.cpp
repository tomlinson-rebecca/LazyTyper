/*
 * Autocorrect.cpp
 * Capitalizes the first letter of inputted string and appends period
 * to the end of the string. Capitalizes all "I".
 */

//TODO: multi-sentence capitalization support.
//use the capitalizeFirst method, use the logic from
// first part of correct()
//after a period, next letter cap.
#ifndef AUTOCORRECT_CPP
#define AUTOCORRECT_CPP

#include "Autocorrect.h"

string Autocorrect::correct(string s) {
  
  string input = s;
  
  //find the first letter in the string
  bool found = false;
  unsigned int i = 0; //the index of first letter
  char currChar;
  while(!found && i < input.size()) {
    
    currChar = input[i];
    
    //checks if this character is an alphabetic char
    if(isalpha(currChar)) {
      found = true;
    } else {
      i++;
    }
  }
  
  //if no letters were found
  if(!found) {
    return input;
  }

  //cout << "first letter is " << currChar << " at index " << i << endl;
  
  //convert first character to uppercase
  input[i] = toupper(currChar);
  
  //loop through the phrase, capitalizing single i's and putting period at end
  
  //start at 1 because the first I will already have been capitalized.
  //TODO single period edge case?
  for(unsigned int j = 1; j < input.size(); j++) {
    
    currChar = input[j];
    //if this is the letter i by itself
    if(input[j] == 'i') {
      
      //TODO last char as i doesn't work
      if (input[j - 1] == ' ' && (j + 1) >= input.size()){
        
        input[j] = 'I';

      //i in middle of phrase
      //if the i is the last character in the phrase
      } else if ( input[j - 1] == ' ' && input[j + 1] == ' ') {
        
        input[j] = 'I';
      
      }
    }
  }
  
  //don't add a period if user already has ending punctuation
  if(currChar != '.' && currChar != '!' && currChar != '?') {
    //append period to end of sentence
    input += '.';
  }
   return input;


}

#endif 

