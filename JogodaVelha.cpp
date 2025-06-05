#include <iostream>
#include <ctime>

using namespace std;

int i;

void cobre(string vet[]){

    for(i=0;i<9;i++){
        vet[i]=".";
    }
}

void tabuleiro(string vet[]){

    for(i=0;i<9;i++){
        cout<<vet[i]<<" ";
        if((i+1)%3==0){
            cout<<"\n";
        }
    }
}

void estado_jogo(int &estado,string vet[],string jogada){
    if((vet[0] == jogada && vet[3] == jogada && vet[6] == jogada) ||
       (vet[1] == jogada && vet[4] == jogada && vet[7] == jogada) ||
       (vet[2] == jogada && vet[5] == jogada && vet[8] == jogada) ||
       (vet[0] == jogada && vet[1] == jogada && vet[2] == jogada) ||
       (vet[3] == jogada && vet[4] == jogada && vet[5] == jogada) ||
       (vet[7] == jogada && vet[8] == jogada && vet[6] == jogada) ||
       (vet[0] == jogada && vet[4] == jogada && vet[8] == jogada) ||
       (vet[2] == jogada && vet[4] == jogada && vet[6] == jogada)){

        estado = 1;

    }else if(vet[0] != "." && vet[1] != "." && vet[2] != "." &&
             vet[4] != "." && vet[3] != "." && vet[5] != "." &&
             vet[8] != "." && vet[7] != "." && vet[6] != "."){

        estado = 2;

    }else{

        estado = 0;

    }
}

int main(){

    string vet[9],jogada="O";
    int num,estado=0;

    cobre(vet);
    tabuleiro(vet);

    while(true){

        if(jogada=="O"){
            jogada="X";
        }else{
            jogada="O";
        }

        cout<<"\nDiga onde deseja jogar: ";
        cin>>num;

        while(vet[num] == "X" || vet[num] == "O"){
            system("cls");
            tabuleiro(vet);
            cout<<"\nJogada invalida\nDiga onde deseja jogar: ";
            cin>>num;
        }

        system("cls");
        vet[num] = jogada;
        tabuleiro(vet);

        estado_jogo(estado,vet,jogada);

        switch(estado){
            case 0:
                break;
            case 1:
                cout<<"Jogador "<<jogada<<" venceu!";
                return 0;
            case 2:
                cout<<"Empate.";
                return 0;
        }
    }
}