// *****************************************************************************
// EmuGuru's C++ Tutorials
// 01 Hello World (console)
// 
// EmuGuru (Wil Bowen)
// 2025.11.24
// *****************************************************************************
// main.cpp
#include <iostream>                                        // iostream has cout
#include <string>                                          // string has... string

using namespace std;                                       // We use this to avoid calling things by their long form names
                                                           // Without it, we would need std::cout and std::string

string message1="Hello World!\n";                          // We can initialize(set) a variable when we create it
string message2;                                           // We can also create variables without anything in them
string wholeMessage;




int main() {                                               // Every program needs a main function. Main returns a value when it finishes
  cout << message1 << "\n\n";                              // We use cout to write messages to the console and \n tells the console to start a new line

  message2="Strings make the world go round!\n";           // We can change variables at any time
  wholeMessage = message1;                                 // We can copy the contents of one variable to another
  wholeMessage += message2;                                // We can combine variables together, this adds message2 to wholeMessage

  cout << "This text is on a different line\n" << "Than this one is\n\n";

  cout << "Message 1 : " << message1 << endl << endl;      // We can use endl, outside of quotes, instead of \n to start a new line
  cout << "Message 2 : " << message2 << endl << endl;

  cout << "Together, the wholeMessage string now includes:" << endl;
  cout << wholeMessage;


  cout << endl << "There are " << wholeMessage.length() << " characters in the whole message (including end of line characters)" << endl << endl;

  cout << "We can use escape sequences to write special characters like \"quotes\"" << endl;
  cout << R"(We can also use "raw" string literals, and avoid using the "escape" sequences altogether )" << endl;

  cout << "Whew! That was all 'strung' together!" << endl;
  return 0;
}
