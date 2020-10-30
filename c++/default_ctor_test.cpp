#include <iomanip>
#include <iostream>

using std::cout;
using std::boolalpha;
class X {
public:
	void x() {}
};

struct C {
	bool b = false;
	int i = 0;
	C(int ii) : i{ii} { C(); }
	C() = default;
};

void f()
{
	X e;
	e.x();
//	X e2();
//	e2.x();
}

int main()
{
//	f();
	C c{1};
	cout << boolalpha << c.b << '\n';
	cout << c.i << '\n';	
	return 0;
}
