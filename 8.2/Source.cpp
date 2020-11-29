#include <iostream>
#include <string>
using namespace std;
int kilkist(char* str)
{
	int k = 0;
	int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] != ' ')
			break;
	for (i;i<strlen(str); i++)
		if(str[i] == ' ')
			for (i; i<strlen(str); i++)
				if (str[i] != ' ')
					for (i; i < strlen(str); i++)
						if (str[i] == 'b')
				{
					k++;
					break;
				}
	
	
	return k+1;
}
int main()
{
	char str[101];
	char b[101];
	cout << "Enter string: " << endl;
	cin.getline(str,100);
	cout << "String contained " << kilkist(str) << endl;
	return 0;
}