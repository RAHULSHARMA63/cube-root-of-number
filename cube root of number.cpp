#include<iostream>
#include <cmath>
using namespace std;
int main() 
{
  float number, ans;
  
  cout << "enter any number: ";
  cin >> number;
 
  ans = pow(number,1.0/3.0);
  cout << "\n cube root of " << number << " is: " << ans;
  
  return 0;
}
