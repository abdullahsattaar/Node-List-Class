#include<iostream>
using namespace std;

template <class type>
class Node
{
private:
	type data;
	Node<type>* next;
	Friend class List;
public:

	Node() 
	{
		next = NULL; 
	}
	Node(type val, Node<type> * nptr = 0)
	{
		data = val;
		next = nptr;
	}
};
template <class type>
class List
{
private:
	Node<type> * head;
	Node<type> * tail;

public:


	List<type>()
	{
		head = 0;
		tail = 0;
	}
	void insertAtStart(type const element)
	{
		head = new Node<type>(val, head);
		if (tail == 0)
			tail = head;
	}
	void insertAtEnd(type const element)
	{
		if (tail != NULL) {
			tail->next = new Node<type>(val,nullptr);
		}
		else
			head = tail = new Node<type>(val,nullptr);
	}	
	void deleteAtStart()
	{
		if (head != NULL) 
		{
			Node<type> * tmp = head;
			if (head == tail) {
				head = tail = NULL;
			}
			else
				head = head->next;
			delete tmp;
		}
	}
	void deleteAtEnd()
	{
		if (head != NULL)
		{
			if (head == tail)
			{
				delete head;
				head = tail = NULL;
			}
			else 
			{ 
				Node<type> * tmp = head;
				for (; tmp->next != tail; tmp = tmp->next)
				delete tail;
				tail = tmp;
				tail->next = NULL;
			}
		}
	}
	bool search(type const element)
	{
		Node<type> * tmp = head;
		while (tmp != NULL && tmp->data != val)
			tmp = tmp->next;
		return tmp != NULL;
	}
	void print() 
	{
		Node<type> * tmp;
		cout << "List is: " << endl;
		for (tmp = head; tmp != 0; tmp = tmp->next)
			cout << tmp->data << " ";
		cout << endl;
	}
	bool DeleteFirstOccurence(type const element)
	{
		Node<type> * tmp = head;
		while (tmp != NULL && tmp->data != val)
			tmp = tmp->next;
		delete tmp;
	}
	~List()
	{
		Node<type> * p = head;
		while (!isEmpty()) {
			p = head->next;
			delete head;
			head = p;
		}

	}

};


int main()
{
	List<int> L1;
	L1.insertAtStart(2);
	L1.insertAtStart(6);
	L1.insertAtStart(7);
	L1.insertAtEnd(3);
	L1.insertAtEnd(8);
	L1.insertAtEnd(2);
	L1.insertAtEnd(1);
	L1.deleteAtStart();
	L1.deleteAtEnd();
	L1.print();
	L1.search(2);
	L1.search(8);
	L1.search(1);




	system("pause");
	return 0;
}