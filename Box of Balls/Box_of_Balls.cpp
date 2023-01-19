#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

class box
{
    private:

         int num;

         double *b;

    public:

        box(int c)
        {
            num=c;

            b = new double[num];

            for(int i=0 ; i < num ; i++)
            {
                cin >> b[i];
            }
        }

        void algo()
        {
            for(int k=0 ; k < num ; k++)
            {
                b[k]=(4*(3.1416)*(b[k]*b[k]*b[k]))/3;
            }

        }

        void p()
        {
            for(int j=0 ; j < num ; j++)
            {
                cout << setprecision(4) << fixed << b[j] << ' ';
            }

            cout << endl;
        }

        ~box()
        {
            delete [] b;
        }
};

void print(box *numptr)
{
    numptr -> algo();

    numptr -> p();
}

int main()
{
    int cont;

    cin >> cont;

    box *numptr = new box(cont);

    print(numptr);
}
