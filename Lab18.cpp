#include <iostream>

using namespace std;

struct review
{
    double rating;
    string comment;
    review* next;

};



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

}


// new tail node
void addTail(review* head, double rating, const string& comment)
{

}



