
#include <iostream>
#include "LinkedListAssignment.h"

using namespace std;

int main() {
    LinkedList<int> list;

    list.addItem(10);
    list.addItem(20);
    list.addItem(30);

    cout << "List: " << list << endl;
    cout << "Size: " << list.getSize() << endl;

    return 0;
}