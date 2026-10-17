
#ifndef LINKEDLISTASSIGNMENT_H
#define LINKEDLISTASSIGNMENT_H

#include <iostream>

template <typename T>
struct ListNode {
    T data;
    ListNode<T>* next;
};

template <typename T>
class LinkedList {
private:
    ListNode<T>* head;
    ListNode<T>* tail;
    int size;

public:
    LinkedList();
    ~LinkedList();

    void addItem(T item);
    void remove(T item);
    bool find(T item) const;
    int getSize() const;

    template <typename U>
    friend std::ostream& operator<<(std::ostream& os,
                                    const LinkedList<U>& list);
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const LinkedList<T>& list) {
    ListNode<T>* current = list.head;

    while (current != nullptr) {
        os << current->data;

        if (current->next != nullptr) {
            os << " ";
        }

        current = current->next;
    }

    return os;
}

#endif
