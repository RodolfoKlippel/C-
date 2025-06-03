#include <iostream>
#include <ctime>

using namespace std;

double ordenador(int lista[],int tamanho){
    int aux;

    for(int j=0;j<tamanho*2;j++){
        for(int i=0;i<tamanho-1;i++){
            if(lista[i]>lista[i+1]){
                aux = lista[i];
                lista[i]=lista[i+1];
                lista[i+1]=aux;
            }
        }
    }
    return 0;
}

int main(){

    int tamanho;

    cout<<"Diga o tamanho do vetor: ";
    cin>>tamanho;

    system("cls");

    int lista[tamanho],i;

    for(i=0;i<tamanho;i++){
        cin>>lista[i];
        system("cls");
    }
    ordenador(lista,tamanho);
    for(i=0;i<tamanho;i++){
        cout<<lista[i]<<" ";
    }
}