#include <iostream>
#include <string>
using namespace std;

class ContactNode {
   public:
      ContactNode(string name, string phoneNum) : contactName(name), contactPhoneNumber(phoneNum), nextNodePtr(nullptr) {}

      string GetName() const {
         return contactName;
      }

      string GetPhoneNumber() const {
         return contactPhoneNumber;
      }

      void InsertAfter(ContactNode* nodePtr) {
         ContactNode* temp = nextNodePtr;
         nextNodePtr = nodePtr;
         nodePtr->nextNodePtr = temp;
      }

      ContactNode* GetNext() const {
         return nextNodePtr;
      }

      void PrintContactNode() const {
         cout << "Name: " << contactName << endl;
         cout << "Phone number: " << contactPhoneNumber << endl;
      }

   private:
      string contactName;
      string contactPhoneNumber;
      ContactNode* nextNodePtr;
};

int main() {
   string name, phone;
   ContactNode* head = nullptr;
   ContactNode* tail = nullptr;

   for (int i = 1; i <= 3; ++i) {
      getline(cin, name);
      getline(cin, phone);
      ContactNode* newNode = new ContactNode(name, phone);

      cout << "Person " << i << ": " << name << ", " << phone << endl;

      if (head == nullptr) {
         head = newNode;
         tail = newNode;
      } else {
         tail->InsertAfter(newNode);
         tail = newNode;
      }
   }

   cout << "\nCONTACT LIST" << endl;
   ContactNode* current = head;
   while (current != nullptr) {
      current->PrintContactNode();
      cout << endl;
      current = current->GetNext();
   }

   // Memory cleanup
   current = head;
   while (current != nullptr) {
      ContactNode* next = current->GetNext();
      delete current;
      current = next;
   }

   return 0;
}