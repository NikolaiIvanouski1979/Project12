# include <iostream>
# include <conio.h>
using namespace std;

char ch = 'a';
void getachar();
void putachar();

int main()
{
	while (ch != '\r')
	{
		getachar();
		putachar();
	}
	cout << endl;
	system("pause");

	return 0;
}

void getachar()
{
	ch = getch();
}

void putachar()
{
	cout << ch;
}