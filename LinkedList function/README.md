Use an appropriate definition of ListNode, design a simple linked list class with following member functions:

1. void add (double x); // add a new node containing x to the front(head) of the list
1. bool isMember (double x); // test to see if the list contains a node with the value x
1. LinkedList(); //default constructor
1. LinkedList(const LinkedList& aList); // copy constructor
1. void print (); // print the list out
1. void remove (double x); // remove a node containing x from the list
1. ~LinkedList(); //destructor
1. int search (double x); //returns the position o a number x on the list, the first node in the list is at position 0. return -1 if x is not in the list
1. void insert(double x, int pos); // insert a node containing x at position pos, if pos=0 means x will become the first item on the list
1. void remove(int pos); // remove the node for the position, 0 means remove the first node
1. void sort(); // sort the list by moving pointers rather than by copying or swapping the contents of the nodes
