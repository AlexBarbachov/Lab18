#include <iostream>

using namespace std;

struct review
{
    double rating;
    string comment;
    review* next;

};

// protos
void addHead(review*& head, double rating, const string& comment);
void addTail(review*& head, double rating, const string& comment);
void displayReviews(review* head);
void deleteList(review* head);

int main()
{
    int choice;
    cout << "Which linked list method should we use?" << endl;
    cout << "\t[1] New nodes are added at the head of the linked list" << endl;
    cout << "\t[2] New nodes are added at the tail of the linked list" << endl;
    cout << "Choice: ";
    cin >> choice;



}


// new head node
void addHead(review*& head, double rating, const string& comment)
{
    review* newNode = new review{rating, comment, head}; // create new head node
    head = newNode; // update head
}


// new tail node
void addTail(review*& head, double rating, const string& comment)
{
    review* newNode = new review(rating, comment, nullptr);


    if (!head)
    {
        // check if empty linked list
        head = newNode;
    }
    else
    {
        // walk to end and attach new node;
        review* temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// find avg and display
void displayReviews(review* head)
{

}

// free memory after finished
void deleteList(review* head)
{
    while (head)
    {
        review* temp = head;
        head = head->next;
        delete temp; // free mem
    }
}

