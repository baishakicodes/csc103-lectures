#include <iostream>
#include <vector>
using std:: vector;
using std:: cin;
using std:: cout;

int binarySearch( const vector<int>& V, int x);

int main(){

  const vector<int>& V = {0,1,2,5,9,15,16,31,90,101,120,153,170,171,190};
  int x;
  cin >> x;
  cout << binarySearch(V, x) << '\n';




  return 0;
}

int binarySearch( const vector<int>& V, int x){

  size_t size = V.size();
  int min = 0;
  int max = size;
  int previousI;

  for(size_t i = (min+max)/2; max <= size && min <= size;
  i = (min + max)/2){

    if(max-min == 0 || max<min || previousI == i){
      return -1;
    }
    else if(V[i] < x ){
      min = i;
    }
    else if (V[i] > x){
      max = i;
    }
    else if(V[i] == x){
      return i;
    }
    previousI = i;

  }
  return -1;

}