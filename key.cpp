#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int somaChar(string*);
string toBinario(int*);
// string toHex(int*);

int main(){
    string nome;
    int soma = 0;
    int nxor = 0;
    cout<<"KeyGen"<<endl;
    cin>>nome;
    
    for(int i=0;i<nome.length();i++){
        nome[i] = toupper(nome[i]);
    }
    cout<<nome<<endl;
    soma = somaChar(&nome);
    cout<<soma<<endl;

    cout<<"Entre com o numero para o XOR:";
    cin>>nxor;
    int conta = soma^nxor;
    cout<<toBinario(&soma)<<" XOR "<<endl;
    cout<<toBinario(&nxor)<<" = "<<conta<<" b:"<<toBinario(&conta)<<endl;

    // string resultado;
    // int teste = 0;
    // cin>>teste;
    // resultado = toBinario(&teste);
    // cout<<"Resultado:"<<resultado<<endl;
    return 0;
}

int somaChar(string* nomeRecebido){
    int total = 0;
    int ascii;
    string temp = *nomeRecebido;
    for(int c=0;c<temp.length();c++){
        ascii = temp[c];
        cout<<temp[c]<<":"<<ascii<<endl;
         total += temp[c];
    }

    return total;
}

string toBinario(int* numero){
    int temp = *numero;
    //cout<<temp<<endl;
    int resto=temp;
    int divisao = 128;
    string retorno = "";
    int c =0;
    while(divisao>0){
        int conta = resto/divisao;
        retorno += to_string(conta);
        //cout<<resto<<"/"<<divisao<<"="<<resto/divisao<<" Resto:"<<temp%divisao<<endl;
        resto = resto%divisao;
        temp= resto/divisao;
        divisao/=2;
    }
    return retorno;    
}

// string toHex(int* numero){

// }