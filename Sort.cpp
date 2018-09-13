#include <iostream>
#include <cmath>
using namespace std;

void Sort (int Lista[10])
{
int i,j,temp=0;
for(i=0;i<10;i++)
 {
  for(j=0;j<10;j++)
   {
     if(Lista[i]<Lista[j])
    {
      temp=Lista[i];
      Lista[i]=Lista[j];
      Lista[j]=temp;
    }
   }
  }

cout << "La Lista de Numeros ordenada es:\n";
for(i=0;i<10;i++)
 {
 cout<<" "<<Lista[i]<<endl;
 }
}


int main (void)
{
int i;
int Lista[10];

cout<< "Ingresa 10 numeros: " <<endl;
for(i=0;i<10;i++)
 {
cin >> Lista[i];
}

Sort (Lista);

return 0;
}
