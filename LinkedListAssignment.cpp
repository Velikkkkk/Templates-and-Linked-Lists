/*
* Author: Elizaveta
 * Description: Implements the LinkedList methods.
 */

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
bool LinkedList<T>::find(T item) const {
    ListNode<T>* current = head;

    while (current != nullptr) {
        if (current->data == item) {
            return true;
        }

        current = current->next;
    }

    return false;
}

template <typename T>
void LinkedList<T>::remove(T item) {
    ListNode<T>* current = head;
    ListNode<T>* previous = nullptr;

    while (current != nullptr) {
        if (current->data == item) {
            // Removing the first node
            if (previous == nullptr) {
                head = current->next;
            } else {
                previous->next = current->next;
            }

            // If the last node was removed, update tail
            if (current == tail) {
                tail = previous;
            }

            delete current;
            size--;
            return;
        }

        previous = current;
        current = current->next;
    }
}

template <typename T>
int LinkedList<T>::getSize() const {
    return size;
}
template class LinkedList<int>;
