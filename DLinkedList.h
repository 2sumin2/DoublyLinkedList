#include "DNode.h"
#include <string>

using namespace std;

class DLinkedList {
public:
	DLinkedList();
	~DLinkedList();
	bool empty() const;
	const Elem& front() const;
	const Elem& back() const;
	void addFront(const Elem& e);
	void addBack(const Elem& e);
	void removeFront();
	void removeBack();
	void print();
private:
	DNode* header;
	DNode* trailer;
protected:
	void add(DNode* v, const Elem& e);
	void remove(DNode* v);
};