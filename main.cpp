/**
 * Takes in a phrase from stdin and outputs to stdout the phrase
 * with correct capitalization and punctuation (period)
 */

#include "Autocorrect.h"

int main(int argc, char** argv) {
  
  string input;
  Autocorrect autocorrect;
  
  
  while(!cin.eof()) {

    cout << "Please enter a phrase." << endl;
    getline (cin, input);
    //reads a single line from user input cin
  
    //correct the user's input
    input = autocorrect.correct(input);
  
    cout << input << endl;
  }
  return 0;

}



