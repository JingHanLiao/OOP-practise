#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

class LinkedList
{
    protected:

        struct listnode
        {
            double value;

            listnode *next;

            listnode( double value1 , listnode *next1=nullptr )
            {
                value = value1;

                next = next1;
            }
        };

        listnode *head;

    public:

        LinkedList();//3

        ~LinkedList();//7

        void add (double x);//1

        void remove(double x);//6

        void print ();//5

        bool isMember (double x);//2

        int search (double x);//8

        void insert(double x, int pos);//9
};

void LinkedList :: add( double number )
{
    if( head == nullptr )
    {
        head = new listnode(number);
    }
    else
    {
        listnode *nodeptr=head;

        while( nodeptr -> next != nullptr )
        {
            nodeptr = nodeptr -> next;
        }

        nodeptr -> next = new listnode(number);
    }
}

LinkedList :: ~LinkedList()
{
    listnode *nodeptr=head;

    while( nodeptr != nullptr )
    {
        listnode *del=nodeptr;

        nodeptr = nodeptr -> next;

        delete del;
    }
}

LinkedList() :: LinkedList()
{
    head = nullptr ;
}

void LinkedList :: print ()
{
    listnode *nodeptr = head;

    while( nodeptr )
    {
        cout << nodeptr -> value << " ";

        nodeptr = nodeptr -> next;
    }
}

void LinkedList :: remove( double number )
{
    listnode *nodeptr , *pre;

    if( !head )
    {
        return;
    }

    if( head -> value == number )
    {
        nodeptr = head;

        head = head -> next;

        delete nodeptr;
    }
    else
    {
        nodeptr = head;

        while( nodeptr != nullptr && nodeptr -> value != number)
        {
            pre = nodeptr;

            nodeptr = nodeptr -> next;
        }

        if( nodeptr )
        {
            pre -> next = nodeptr -> next;

            delete nodeptr;
        }
    }
}

bool LinkedList :: isMember ( double number )
{
    listnode *nodeptr=head;

    while( nodeptr != nullptr )
    {
        if( nodeptr -> value == number )
        {
            return true;
        }

        nodeptr = nodeptr -> next;
    }

    return false;

}

int LinkedList :: search (double number)
{
    listnode *nodeptr=head;

    int pos=0;

    while( nodeptr != nullptr )
    {
        if( nodeptr -> value == number )
        {
            return pos;
        }

        nodeptr = nodeptr -> next;

        pos++;
    }

    return -1;
}

void LinkedList :: insert(double x, int pos)
{
    int cont=0;

    listnode *nodeptr=head,*pre=nullptr;

    listnode *t;

    t = new listnode(x);

    while( cont != pos )
    {
        pre = nodeptr;

        nodeptr = nodeptr -> next;

        cont++
    }

    if( cont == 0 )
    {
        t -> next = nodeptr -> next;

        nodeptr -> next = t;
    }
    else if( cont == pos )
    {
        pre -> next = t;

        t -> next = nodeptr ;
    }
    else
    {
        cout <<"Not Able to Insert";

        break;
    }
}

int main()
{

}
