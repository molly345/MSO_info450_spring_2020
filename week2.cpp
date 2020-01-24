//Example slide 14
#include <iostream>
using namespace std; 

int main()

{
    int a = 5;
int b = 19;
int iResult = b / a;
cout << iResult << endl; 
double dResult = b / a; // implicit Cast
cout << dResult << endl;
dResult = (double) b / a; //explicit Cast
cout << dResult << endl;
iResult = dResult; // implicit cast
cout << iResult << endl;

}
 //Example slide 18
#include <iostream>
using namespace std; 
int main()
{
    int a = 5;
int b = 10;
int c = 2;
a += 5;
b -= c + a;
c *= a + b * 3;
cout << " a[" << a << "] b[" << b << "] c[" << c << "]" << endl;
}