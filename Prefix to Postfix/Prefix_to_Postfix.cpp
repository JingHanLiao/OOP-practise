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

bool operornum( string o )
{
	char c=o[0];

	if( c == '+' || c == '-' || c == '/' || c == '*' || (c >= '0' && c <= '9') )
    {
        return true;
    }

	return false;
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

string intopost(string s)
{

	if( s.size()==1 && operornum(s) )
    {
        return s;
    }

	if(s[0]=='(')
    {
		int num=1,i=1;

		string part1="(";

		while( i > 0 )
        {
			if( s[num]=='(' )
            {
                i++;
            }
			else if(s[num]==')')
            {
                i--;
            }

			part1=part1+s[num];

			num++;
		}

		if( part1 == s )
        {
			string del;

			for(unsigned int i=1 ; i < s.size()-1 ; i++)
            {
                del=del+s[i];
            }

			return intopost(del);//recusive
		}
		else
        {
			string part2,oper;

			oper=oper+s[num];

			for(unsigned int i=num+1 ; i < s.size() ; i++)
            {
                part2=part2+s[i];
            }
			return intopost(part1) + intopost(part2) + oper;//recusive
		}
	}
	else
    {
		string p1,p2,op;

		p1=p1+s[0];

		op=op+s[1];

		for(unsigned int i=2 ; i < s.size() ; i++)
        {
            p2=p2+s[i];
        }
		return intopost(p1)+intopost(p2)+op;//recusive
	}
}

int main()
{
    string str,instr,poststr;

    while( cin >> str )
    {
        int ase=0;

        instr=pretoin(str);

        ase=instr.size();

        instr=instr.erase( 0 , 1 );

        instr=instr.erase( ase-2 , ase-1 );

        //cout << instr << endl;

        cout << intopost(instr) << endl;
    }
}
