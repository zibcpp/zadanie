#include <iostream>

using namespace std;
long int fibb(int n)
{

if ((n==1)||(n==2))return 1;
else return fibb(n-1)+fibb(n-2);

}

int main()
{

int licz=6;

cout<<fibb(licz)<<endl;





    cout << "Hello world!" << endl;
    return 0;
}
