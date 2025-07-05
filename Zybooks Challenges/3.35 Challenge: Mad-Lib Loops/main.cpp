#include <iostream>
#include <string>

using namespace std;

int main() {

   string word;
   int number;
   
   while (true) {
       if (!(cin >> word)) {
           // If reading the word fails, break the loop
           break;
       }
   
       if (word == "quit") {
           break;
       }
   
       if (!(cin >> number)) {
           // If reading the number fails, break the loop
           break;
       }
   
       cout << "Eating " << number << " " << word << " a day keeps you happy and healthy." << endl;
   }
   return 0;
}
