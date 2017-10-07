//
//  main.cpp
//  SD-LIST-SEARCH(L,k)
//
//  Created by Sumitha on 6/9/17.
//  Copyright © 2017 Sumitha. All rights reserved.
//

#include <iostream>
#include "SD-LIST-SEARCH(L,k).hpp"

int main() {
    
    head = insertAtFirst(head,10);
    head = insertAtFirst(head,7);
    head = insertAtFirst(head,6);
    head = insertAtFirst(head,3);
    head = insertAtFirst(head,1);
    cout << "Sorted Doubly Linked List : ";
    displayList();
    cout << "SD-LIST-SEARCH(head,10) : ";
    head = sortedListSearch(head,10);

    return 0;
}
