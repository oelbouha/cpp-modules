
#include <iostream>
using namespace std;
 
int main()  
{
	int tmp;
	int a = 10;
	float b = 12.5;

	int fract = 1 << 8;
	a = a * fract;
	a = a / fract;
	tmp = b * fract;
	float t = static_cast<float>(tmp) / fract;
	cout<< "a: "<< a << "\n";
	cout<< "b: "<< t << "\n";
	return 0;
}
