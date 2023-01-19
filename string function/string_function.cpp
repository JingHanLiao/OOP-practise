#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<sstream>
#include<cstring>

using namespace std;

int main()
{
    int n;

    const int leng=1000;

    char *str=nullptr;

    str=new char[leng];

    while( cin >> n )
    {
        int se,atotal=0,dtotal=0,stotal=0,ntotal=0;

        se=strlen( str );

        cin.get();

        if( n == 7 )
        {
            break;
        }
        else if( n == 1 )
        {
            cin.getline( str , leng );
        }
        else if( n == 2 )
        {
            cout << se << endl;
        }
        else if( n == 3 )
        {
            for(int i=0 ; i < se ; i++)
            {
                if( isalpha(str[i]) )
                {
                    atotal++;
                }
            }

            cout << atotal << endl;
        }
        else if( n == 4 )
        {
            for(int i=0 ; i < se ; i++)
            {
                if( isdigit(str[i]) )
                {
                    dtotal++;
                }
            }

            cout << dtotal << endl;
        }
        else if( n == 5 )
        {
            for(int i=0 ; i < se ; i++)
            {
                if( str[i] == ' ' )
                {
                    stotal++;
                }
            }

            cout << stotal << endl;
        }
        else if( n == 6 )
        {
            for(int i=0 ; i < se ; i++)
            {
                if( !isalpha(str[i]) && !isdigit(str[i]) && str[i] != ' ' )
                {
                    ntotal++;
                }
            }

            cout << ntotal << endl;
        }
    }
}
