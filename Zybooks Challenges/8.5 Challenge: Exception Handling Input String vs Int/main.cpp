#include <string>
#include <iostream>
#include <limits> // Include for numeric_limits

using namespace std;

int main() {
   string inputName;
   int age;
   // Set exception mask for cin stream
   cin.exceptions(ios::failbit);

   cin >> inputName;
   while(inputName != "-1") {
      // FIXME: The following line will throw an ios_base::failure.
      //        Insert a try/catch statement to catch the exception.
      //        Clear cin's failbit to put cin in a useable state.
      try {
         cin >> age;
      } catch (const ios_base::failure&) {
         cin.clear(); // Clear cin's failbit
         cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the line
         age = -1; // Set age to -1 to compensate for the increment later
      }

      cout << inputName << " " << (age + 1) << endl;

      cin >> inputName;
   }

   return 0;
}