#include <iostream>
#include <math.h>
using namespace std;
int media(int n, int *notas){
int soma=0;
int media=0;

for(int i=0; i<n; i++){
      soma = soma+notas[i];
}
media = soma /n;
return media;
}


int main(){
  int notas[10];
  int mediaf;

  for(int i=0; i<10; i++){
    cout<<"Digite as notas dos alunos: ";
    cin>>notas[i];
  }

   mediaf = media(10,notas);
  cout<<"A media: "<<mediaf;

   }

