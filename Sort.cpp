#include <iostream>
#include <cmath>
using namespace std;

void Sort (int Lista[10])
{
int i,j,temp=0, cont1=0, cont2=0, cont3=0;
for(i=0;i<10;i++)
 {
  for(j=i;j<10;j++)
   { cont1++;
     if(Lista[i]>Lista[j])
    {
      temp=Lista[i];
      Lista[i]=Lista[j];
      Lista[j]=temp;
      cont2++;
    }
   }
 } cont3++;

cout << "La Lista de Numeros ordenada es:\n";
for(i=0;i<10;i++)
 {
 cout<<" "<<Lista[i]<<endl;
 }
//cout <<cont1<<endl;
//cout<<cont2<<endl;
//cout<<cont3<<endl;
cout << "Big O: " << cont1+cont2 << endl;
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
