
/*
 * Autocorrect.h
 * Capitalizes the first letter of inputted string and appends period
 * to the end of the string. Capitalizes all "I".
 */
 
#ifndef AUTOCORRECT_H
#define AUTOCORRECT_H

#include <string>
#include <iostream>
#include <fstream>
#include <ctype.h> //for letter vs nonletter checking

using namespace std;

class Autocorrect {

public:
  //Autocorrect();
  //~Autocorrect();

  /**
   * returns the given string with correct formatting
   */
  string correct(string s);
  
  /**
   * Returns the string with the first letter capitalized
   */
  string capitalizeFirst (string s);

};

#endif
 

