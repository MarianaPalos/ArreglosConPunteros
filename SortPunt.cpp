#include <iostream>
#include <cmath>
using namespace std;

void SortPunt (int *p)
{
int i,j,temp, contador=0, contador1=0, contador2=0;
for(i=0;i<10;i++)
 {
  for(j=i;j<10;j++)
   { contador++;
     if(*(p+i)>*(p+j))
    {
      temp=*(p+i);
      *(p+i)=*(p+j);
      *(p+j)=temp;
      contador1++;
    }
  }

} contador2++;

cout << "La Lista de Numeros ordenada es:\n";
for(i=0;i<10;i++)
 {
 cout<<" "<<*(p+i)<<endl;
 }

//cout << contador<< endl;
//cout << contador1<< endl;
//cout << contador2<< endl;
cout << "Big O: " << contador+contador1 << endl;
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
