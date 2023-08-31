#include <iostream>

using namespace std;

int x;

class Test
{
	public :
		Test(){
			cout << "test  constructor "<< endl;
		}
		public :
			int x;
		void add()
		{
			cout << "hello\n" << x << endl;
		}
};

class d1 : public  virtual Test
{
	public :
			d1(){
			cout << "d1  constructor "<< endl;
		}
};

class d2 : public virtual Test
{
	public :
			d2(){
			cout << "d2  constructor "<< endl;
		}
};

class d3 : public d2, public d1
{
	public :
			d3(){
			cout << "d3  constructor "<< endl;
		}
			~d3(){
			cout << "d3  constructor "<< endl;
		}
				void add()
		{
			cout << "derived class " << endl;
		}
};

int main()
{
	Test *base = new d3();

	base->add();
	// cout << "size of test : " << sizeof(Test) << endl;
	// cout << "size of d1 : " << sizeof(d1) <<  d.x << endl;
	// cout << "size of d2 : " << sizeof(d2) << endl;
	// cout << "size of d3 : " << sizeof(d3) << endl;
}

	// Test a("hello wold");

	// a.a = 10;
	// a.b = 30;
	// char *m = (char *)&a;
	// int n = *(int *)m; 
	// int y = *(int *)(m + 4); 
	// char *t = (char *)(m + 8);