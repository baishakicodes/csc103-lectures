/* Lucas sequences. */

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* Lucas sequences (of the first kind).  For numbers P,Q, set
	 * U_n = P*U_{n-1} - Q*U_{n-2}.
	 * The first two terms are defined as 0 and 1, respectively.
	 * NOTE: this is a generalization of the fibonacci sequence
	 * (fibonacci is the special case of P==1,Q==-1).
	 * */
	/* TODO: write a program to compute terms of a lucas sequence for
	 * any values P,Q.  See the notes in l2.pdf if you need help with
	 * the idea, but try to write the code from scratch. */

	int n, p, q;
	cout << "What are the values of P and Q for the Lucas sequence?" << '\n';
	cin >> p >> q;
	cout << "What term would you like to find (not including n=1 or n=2): " << '\n';
	cin >> n;
	int TwoBefore = p;
	int oneBefore = q;
	int nthTerm = 0;
	while(n>1){
		nthTerm = TwoBefore + oneBefore;
		TwoBefore = oneBefore;
		oneBefore = nthTerm;
		n--;
	}
	cout << "The value of that term is: " << nthTerm << '\n';
	return 0;
}

// vim:foldlevel=1
