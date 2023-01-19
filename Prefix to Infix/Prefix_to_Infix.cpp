#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<stack>

using namespace std;

bool isoper( char c )
{
    if( c == '+' || c == '-' || c == '/' || c == '*' )
    {
        return true;
    }
    else
    {
        return false;
    }
}

string pretoin( string exp )
{
     stack <string> s;

     int sz=0;

     sz=exp.size();

     for( int i=sz-1 ; i >= 0 ; i-- )
     {
         if( isoper(exp[i]) )
         {
             string op1,op2,temp;

             op1=s.top();

             s.pop();

             op2=s.top();

             s.pop();

             temp="("+op1+exp[i]+op2+")";

             s.push(temp);
         }
         else
         {
             s.push( string( 1 , exp[i] ) );
         }

     }

     return s.top();
}

int main()
{
    string str,ans;

    while( cin >> str )
    {
        int ase=0;

        ans=pretoin(str);

        ase=ans.size();

        ans=ans.erase( 0 , 1 );

        ans=ans.erase( ase-2 , ase-1 );

        cout << ans << endl;
    }
}
