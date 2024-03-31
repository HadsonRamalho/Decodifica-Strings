#include<iostream>
#include<string>

using namespace std;

string recebe_string(string codificada){
    string decodificada;
    for(int i = 0; i < codificada.size(); i++){
        if(codificada[i] >= 'a' && codificada[i] <= 'z'){
            decodificada += codificada[i];
        }
    }
    return decodificada;
}

void gera_linhas(unsigned int qtd_linhas){
    string codificadas[qtd_linhas];
    string decodificadas[qtd_linhas];
    cout << "Insira as strings codificadas: ";
    for(int i = 0; i < qtd_linhas; i++){
        cin >> codificadas[i];
        decodificadas[i] = recebe_string(codificadas[i]);
    }
    for(int i = 0; i < qtd_linhas; i++){
       cout << decodificadas[i] << endl;
    }
}

int main()
{
    unsigned int *qtd_linhas_codif = new unsigned int;
    
    cout << "Digite a quantidade de linhas codificadas: ";
    cin >> *qtd_linhas_codif;
    gera_linhas(*qtd_linhas_codif);
    
    delete qtd_linhas_codif;
    
    return 0;
}
