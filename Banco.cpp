#include <iostream>
#include <ctime>

using namespace std;

int mais(int carteira){

    int adicionar;

    cout<<"Quanto voce gostaria de adicionar a sua carteira? ";
    cin>>adicionar;

    while(adicionar<0){
        system("cls");
        cout<<"Valor Invalido.\nQuanto voce gostaria de adicionar a sua carteira? ";
        cin>>adicionar;
    }

    return carteira = carteira + adicionar;
}

int menos(int carteira){

    int retirar;

    cout<<"Quanto voce gostaria de retirar da sua carteira? ";
    cin>>retirar;

    while(retirar<0){
        system("cls");
        cout<<"Valor Invalido.\nQuanto voce gostaria de retirar da sua carteira? ";
        cin>>retirar;
    }

    return carteira = carteira - retirar;
}

void mostrar(int carteira){
    cout<<"Sua carteira eh: "<<carteira<<"\n";
    system("pause");
    system("cls");
}

int main(){

    int carteira = 1000;
    string resp;

    while (true){
        cout<<"O que voce gostaria de fazer?\n(A) Para adicionar\n(R) Para remover\n(M) Para mostrar o saldo\n(S) Para sair\n";
        cin>>resp;
        system("cls");
        if(resp=="A"){
            carteira=mais(carteira);
        }else if(resp=="R"){
            carteira=menos(carteira);
        }else if(resp=="M"){
            mostrar(carteira);
        }else if(resp=="S"){
            system("cls");
            cout<<"Programa encerrado.";
            break;
        }else{
            cout<<"Opcao invalida.\n\n";
        }
    }
}
