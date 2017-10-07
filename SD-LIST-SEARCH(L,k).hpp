//
//  SD-LIST-SEARCH(L,k).hpp
//  SD-LIST-SEARCH(L,k)
//
//  Created by Sumitha on 6/9/17.
//  Copyright © 2017 Sumitha. All rights reserved.
//

#ifndef SD_LIST_SEARCH_L_k__hpp
#define SD_LIST_SEARCH_L_k__hpp

#include <stdio.h>
using namespace std;
struct node{
    int key;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL;

node* insertAtFirst(node* head,int key){
    struct node* temp = new node;
    temp->key = key;
    temp->prev = NULL;
    temp->next = NULL;
    if(head==NULL){
        head = temp;
    }
    else{
        
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return head;
}


node* sortedListSearch(node* head,int key){
    struct node* newNode = new node;
    newNode->key = key;
    newNode->next = NULL;
    newNode->prev = NULL;
    if(head == NULL){
        cout << "List is empty!" <<endl;
    }
    else{
        struct node* current = head;
        while(current!=NULL){
            static int count = 1;
            if(current->key == newNode->key){
                cout << count <<endl;
                return head;
                
            }
            else{
                
                current=current->next;
                count++;
            }
        }
    }
    return head;
}

//Display items in the linked list
void displayList()
{
    
    struct node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->key<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

#endif /* SD_LIST_SEARCH_L_k__hpp */
