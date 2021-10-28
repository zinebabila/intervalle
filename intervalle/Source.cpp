#include <iostream>
#include "Intervalle.h"
using namespace std;
using namespace math;
int main() {
	Intervalle s(0, -1.5);
	s.consulter();
	cout << "le munimum est " << s.min() <<endl;
	cout << "le maximum est " << s.max() << endl;
	
	cout << s[-1] << endl;
	Intervalle a(-1, 2);
	a.consulter();
	(s + a)->consulter();
	(s - a)->consulter();
	return 0;
}



