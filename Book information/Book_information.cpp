#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

class Publication
{
    protected:

        string title;

        int volume;

        int year;
};

class Book : public Publication
{
    private:

        string author,ISBN;

        double price;

    public:

        Book(string a ,int b ,  int c , string d , string e ,double f)
        {
            title=a;

            volume=b;

            year=c;

            author=d;

            ISBN=e;

            price=f;
        }

        Book()
        {
            title=" ";

            volume=0;

            year=0;

            author=" ";

            ISBN=" ";

            price=0;
        }

        void print()
        {
            cout << "Book: " << title << endl;

            cout << "Volume: " << volume << endl;

            cout << "Year: " << year << endl;

            cout << "Author: " << author << endl;

            cout << "ISBN: " << ISBN << endl;

            cout << "Price: " << price << endl;
        }

};

class Journal : public Publication
{
    private:

        int month;

        string ISSN;

        double impactFactor,annualSubscription;

    public:

        Journal(string  a , int b , int c, int d, string e , double  f , double g )
        {
            title=a;

            volume=b;

            year=c;

            month=d;

            ISSN=e;

            impactFactor=f;

            annualSubscription=g;
        }

        Journal()
        {
            title=" ";

            volume=0;

            year=0;

            month=0;

            ISSN=" ";

            impactFactor=0;

            annualSubscription=0;
        }


        void print()
        {
            cout << "Book: " << title << endl;

            cout << "Volume: " << volume << endl;

            cout << "Year: " << year << endl;

            cout << "Month: " << month << endl;

            cout << "ISSN: " << ISSN << endl;

            cout << "Impact Factor: " << impactFactor << endl;

            cout << "Annual Subscription: " << annualSubscription << endl;
        }

};

class Magazine : public Publication
{
    private:

        int month;

        string editor;

        double annualSubscription;

    public:

        Magazine(string a ,int b ,  int c , int d , string e ,double f)
        {
            title=a;

            volume=b;

            year=c;

            month=d;

            editor=e;

            annualSubscription=f;
        }

        Magazine()
        {
            title=" ";

            volume=0;

            year=0;

            month=0;

            editor=" ";

            annualSubscription=0;
        }

        void print()
        {
            cout << "Book: " << title << endl;

            cout << "Volume: " << volume << endl;

            cout << "Year: " << year << endl;

            cout << "Month: " << month << endl;

            cout << "Editor: " << editor << endl;

            cout << "Annual Subscription: " << annualSubscription << endl;
        }



};


int main()
{
    int n,v,y,m;

    string t,a,bn,sn,e;

    double p,imf,ans;

    while(cin >> n)
    {
        if(n == 1)
        {
            cin >> t >> v >> y >> a >> bn >> p;

            Book book( t , v , y , a, bn , p );

            book.print();
        }
        else if( n == 2 )
        {
            cin >> t >> v >> y >> m >> sn >> imf >> ans;

            Journal Journal1( t , v , y , m ,sn , imf , ans );

            Journal1.print();

        }
        else if( n == 3 )
        {
            cin >> t >> v >> y >> m >> e >> ans;

            Magazine Magazine1( t , v , y , m , e , ans );

            Magazine1.print();
        }

    }
}
