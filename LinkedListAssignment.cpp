
#include "LinkedListAssignment.h"

template <typename T>
LinkedList<T>::LinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

template <typename T>
LinkedList<T>::~LinkedList() {
    ListNode<T>* current = head;

    while (current != nullptr) {
        ListNode<T>* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

template <typename T>
void LinkedList<T>::addItem(T item) {
    ListNode<T>* newNode = new ListNode<T>;
    newNode->data = item;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }

    size++;
}
template <typename T>
int LinkedList<T>::getSize() const {
    return size;
}
template class LinkedList<int>;