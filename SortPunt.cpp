#include <iostream>
#include <cmath>
using namespace std;

void SortPunt (int *p)
{
int i,j,temp;
for(i=0;i<10;i++)
 {
  for(j=0;j<10;j++)
   {
     if(*(p+i)<*(p+j))
    {
      temp=*(p+i);
      *(p+i)=*(p+j);
      *(p+j)=temp;
    }
   }
  }

cout << "La Lista de Numeros ordenada es:\n";
for(i=0;i<10;i++)
 {
 cout<<" "<<*(p+i)<<endl;
 }
}


int main (void)
{
int i;
int *p;

int Lista[10];
p= &Lista[10];

cout<< "Ingresa 10 numeros: " <<endl;
for(i=0;i<10;i++)
 {
cin >> Lista[i];
}

SortPunt(Lista);

return 0;
}
