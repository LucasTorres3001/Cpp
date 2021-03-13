#include <iostream>
#include <locale.h>

using namespace std;

void maluco(short a, short b);

int main()
{
	setlocale(LC_ALL,"Portuguese");

	maluco(10,10);

	return 0;
}

	void maluco(short a, short b)
	{
		short c;
		c=a+b;
		while(c <= 50)
        {
			cout << "O número é " << c << "\n";
			c++;
			if(c == 25)
			{
				break;
			}
		}
	}
