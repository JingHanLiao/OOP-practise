#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main()
{
    string name[10];

    string temp2;

    int year[10];

    int temp;

    string *neptr=name;

    int *yerptr=year;

    for(int i=0 ; i < 10 ; i++)
    {
        cin >> *(neptr+i) ;

        cin >> *(yerptr+i) ;
    }

    for(int i=0 ; i < 10 ; i++)
    {
        for(int j=i+1 ; j < 10 ; j++)
        {
            if( *(neptr+i) > *(neptr+j) )
            {
                temp=*(yerptr+i);

                *(yerptr+i)=*(yerptr+j);

                *(yerptr+j)=temp;

                temp2=*(neptr+i);

                *(neptr+i)=*(neptr+j);

                *(neptr+j)=temp2;
            }
        }
    }

    for(int i=0 ; i < 10 ; i++)
    {
        cout << *(neptr+i) << ' ' << *(yerptr+i) << endl;
    }

}
