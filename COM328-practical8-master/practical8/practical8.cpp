//================================================================================
// Name        : practical8.cpp
// Author      : a.mccaughey@ulster.ac.uk
// Version     : 1.0
// Description : practical 8 test program to utilise Dynamic BinarySearch tree
//================================================================================

#include <iostream>
#include <string>

#include "BinaryTree.h"

using namespace std;

void testTree() {

    // Construct tree from Q1
    BinaryTree<int> t;
    t.insert(31); t.insert(21); t.insert(52); t.insert(10); t.insert(90); t.insert(16); t.insert(23); t.insert(40); t.insert(65);

    // Display tree in-order, pre-order and post-order
    cout << "\nTree InOrder : "; t.displayInOrder();
    cout << "\nTree PreOrder : "; t.displayPreOrder();
    cout << "\nTree PostOrder : "; t.displayPostOrder();

    // Remove elements are display tree again
    t.remove(10); t.remove(90); t.remove(52);
    cout << "Deleted 10, 90 and 52\n";
    cout << "Tree : "; t.displayInOrder(); cout << " Height: " << t.height() << endl;

    // test find method - find 90 that was previously deleted
    if (t.find(90))
        cout << "Mmmm 90 found but we deleted it!!\n";
    else
        cout << "correct as 90 has been deleted\n";

    // Clear tree and add numbers in order
    t.clear();
    t.insert(10); t.insert(16); t.insert(21); t.insert(23); t.insert(31); t.insert(40); t.insert(52); t.insert(65); t.insert(90);

    // redisplay tree and its new height
    cout << "Tree(sorted) : "; t.displayInOrder(); cout << " Height: " << t.height() << endl;

}

// Main method.
int main()
{
    testTree();

    // ---------------------------------------------------
    std::cout << std::endl << "Press enter to quit";
    std::cin.sync(); // flush input buffer
    std::cin.ignore(); // ignore what user enters
    return 0;
}
