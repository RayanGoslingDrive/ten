#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int a;
	int count = 0;
	srand(time(0));
	do
	{
		
		a = 1 + rand() % 1001;
		count = count+1 ;
		cout << count << ")" << a << endl;
	} while (a != 10);
	return 0;
}
