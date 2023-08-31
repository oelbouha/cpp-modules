
#include <iostream>
int main(int c, char **v)
{
	std::string str;

	if (c)
	{
		for(int i = 1; v[i]; i++)
		{
			str = v[i];
			for(int j = 0; str[j]; j++)
				putchar(toupper(str[j]));
			putchar('\n');
		}
	}
}