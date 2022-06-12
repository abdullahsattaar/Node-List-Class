# Node-List-Class
C++ code for Node and List class implementation in data structures.
1. Implement a template class ‘Node’ that contains two data members: A template variable ‘data’, Node pointer ‘next’. You may define any member functions, if required, for the template class.
2. Now implement a singly linked list class having two private data member Node pointer ‘head’ and Node pointer ‘tail’.
3. Now implement the following operations for linked list class:
a. Insert at start void insertAtStart(T const element);
b. Insert at end void insertAtEnd(T const element);
c. Print void print() const;
d. Search an element bool search(T const& element) const;
e. Delete at Start void deleteAtStart ();
f. Delete at End void deleteAtEnd();
g. Delete the first occurrence of the element with given data value
Bool DeleteFirstOccurence (T const element)
h. Destructor
4. Now create a main function which has the following instructions:
a. Define a linked list object of type int.
b. Insert 2, 6, 7 at start
c. Insert 3, 8, 2,1 at End
d. Delete at Start
e. Delete at End
f. Now print the linked list. (Sample answer 6->2->3->8->2)
g. Search for 2, 8 and 1. //it should return true for 2 and 8 and false for 1
h. Delete the first occurrence of the element with value 2
i. Now print the linked list. (Sample answer 6->3->8->2)
