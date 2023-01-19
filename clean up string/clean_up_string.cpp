#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    string str;

    while( getline( cin , str ) )
    {
        for(unsigned int i=0 ; i < str.size() ; i++)
        {
            if( isupper(str[i]) && i != 0 )
            {
                str.insert( i , " " );

                str[i+1]=str[i+1]+32;
            }
        }

        cout << str << endl;

        str="";
    }
}

