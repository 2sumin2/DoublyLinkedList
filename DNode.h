#include <string>

using namespace std;
typedef string Elem;

class DNode {
private:
	Elem elem;
	DNode* prev;
	DNode* next;
	friend class DLinkedList;
};

