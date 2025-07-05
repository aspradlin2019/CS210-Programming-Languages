#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec) {
    for (int i = 0; i < myVec.size() - 1; i++) {
        for (int j = 0; j < myVec.size() - i - 1; j++) {
            if (myVec[j] < myVec[j + 1]) {
                swap(myVec[j], myVec[j + 1]);
            }
        }
    }
}


int main() {
   int numElements, input;
   cin >> numElements;

   vector<int> myVec;
   for (int i = 0; i < numElements; i++) {
       cin >> input;
       myVec.push_back(input);
   }

   SortVector(myVec);

   for (int val : myVec) {
       cout << val << ",";
   }
   cout << endl;


   return 0;
}
