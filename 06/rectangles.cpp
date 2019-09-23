/* TODO: write a program that reads two integers n,m and draws an n x m
 * hollow rectangle of '*' characters.  E.g., on input n=4,m=7, the result
 * would look like this: */

// * * * * * * *
// *           *
// *           *
// * * * * * * *

/* NOTE: place spaces between the characters to compensate for the fact that
 * most terminal fonts are taller than they are wide.
 * */
#include <iostream>
using std::cin;
using std::cout;
int main(){
 int n, m;
 cin >> n >> m;
 for (int row = 0; row< n; row++){
  for (int col = 0; col< m; col++){
   if (row == 0 || row == n-1 || col == 0 || col == m-1){
    cout << "* ";
   }
   else{
    cout << "  ";
   }

  }
  cout << '\n';
 }
 return 0;
}

