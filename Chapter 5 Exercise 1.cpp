#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int Min = 32;
    const int Max = 127;
	int count;
	int charinline = 0;

	for (count = 32; count <= 127; count++)
	{
		cout << static_cast<char>(count) << " ";
		
		if (charinline == 16)
		{
			cout << endl;
			charinline = 0;
		}
		else
		{
			charinline++;
		}
	}
	
}


