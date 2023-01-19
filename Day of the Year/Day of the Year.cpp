#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

class DayOfYear
{
    private:

        static string name;

        int moth,temp=0;

    public:

        DayOfYear(int a)
        {
            moth=a;

            temp=a;
        }

        void algo()
        {
            if(moth >= 1 && 31 >= moth)
            {
                name="January";
            }
            else if(moth >= 32 && 59 >= moth)
            {
                name="February";

                temp=temp-31;
            }
            else if( moth >= 60 && 90 >= moth)
            {
                name="March";

                temp=temp-59;
            }
            else if( moth >= 91 && 120 >= moth)
            {
                name="April";

                temp=temp-90;
            }
            else if( moth >= 121 && 151 >= moth)
            {
                name="May";

                temp=temp-120;

            }
            else if( moth >= 152 && 181 >= moth)
            {
                name="June";

                temp=temp-151;
            }
            else if( moth >= 182 && 212 >= moth)
            {
                name="July";

                temp=temp-181;
            }
            else if( moth >= 213 && 243 >= moth)
            {
                name="August";

                temp=temp-212;
            }
            else if( moth >= 244 && 273 >= moth)
            {
                name="September";

                temp=temp-243;
            }
            else if( moth >= 274 && 304 >= moth)
            {
                name="October";

                temp=temp-273;
            }
            else if( moth >= 305 && 334 >= moth)
            {
                name="November";

                temp=temp-304;
            }
            else if( moth >= 335 && 365 >= moth)
            {
                name="December";

                temp=temp-334;
            }
        }

        void print()
        {
            cout << name << " " << temp << endl; ;
        }
};

string DayOfYear::name="";



int main()
{
    int num;

    while( cin >> num )
    {
        DayOfYear call(num);

        call.algo();

        call.print();
    }
}
