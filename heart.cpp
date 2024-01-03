#include <iostream>
using namespace std;
int main()
{
int aux=0, auxx=0;

for(int i=1; i<=13; i++) 
{
if(aux<=2) {
  for(int j=1; j<=19; j++)
  {
  	if(j>=3-aux && j<=17+aux) {
    	if(j>7+aux && j<13-aux) cout << " ";
    	else cout << "*";
 		}
  	else cout << " ";
  }
  cout << endl;
  aux++;
}
if(aux>2) {
  for(int j=1; j<=19; j++)
  {
    if(j>=1+auxx && j<=19-auxx) cout << "*";
    else cout << " ";
  }
  cout << endl;
  auxx++;
}
}

return 0;
}
