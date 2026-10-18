# Templates-and-Linked-Lists
## Project Structure
- LinkedListAssignment.h
- LinkedListAssignment.cpp
- main.cpp
  
##LinkedListAssignment.h
- Declares the ListNode structure, the templated LinkedList class, its private data members, method declarations, and the overloaded stream insertion operator.

##LinkedListAssignment.cpp 
- Contains the implementations of the linked list's member functions and explicitly instantiates the class for the int data type.

## main.cpp 
-Contains the driver program used to create a linked list and test its functionality.

# Implemented Functionality
-  addItem(T item): The method dynamically allocates a new node, stores the supplied value, and initializes its next pointer to nullptr.
-  find(T item) const: This method searches for a specified value.
-  remove(T item): This method searches for and removes the first node containing the specified value.
- getSize() const: This method returns the current value of the size counter.
