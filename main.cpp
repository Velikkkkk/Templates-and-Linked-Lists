/*
 * Author: Elizaveta
 * Description: Tests the LinkedList class.
 */

#include <iostream>
#include "LinkedListAssignment.h"

using namespace std;

int main() {
    LinkedList<int> list;

    list.addItem(10);
    list.addItem(20);
    list.addItem(30);
    list.addItem(40);

    cout << "Test #1: List and size" << endl;
    cout << "List: " << list << endl;
    cout << "Size: " << list.getSize() << endl;

    cout << "Test #2: find" << endl;
    cout << "Find 20: " << list.find(20) << endl;
    cout << "Find 99: " << list.find(99) << endl;

    cout << "Test #3: remove" << endl;
    list.remove(10);
    cout << "After removing first: " << list << endl;
    cout << "Size: " << list.getSize() << endl;

    list.remove(30);
    cout << "After removing last: " << list << endl;
    cout << "Size: " << list.getSize() << endl;

    list.remove(99);
    cout << "After removing missing item: " << list << endl;
    cout << "Size: " << list.getSize() << endl;

    list.remove(20);
    cout << "After removing all: " << list << endl;
    cout << "Size: " << list.getSize() << endl;

    return 0;
}
