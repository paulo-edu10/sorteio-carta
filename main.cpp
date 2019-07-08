#include <iostream>
#include <string>

using namespace std;

struct  Filme{

    string nome;
    string genero;
    int ano;

};

Filme catalogo[5];


string busca(char pesquisa){

    if(pesquisa == '1'){                        // Gênero

        cout << "Escolha o gênero" << endl;
        cout << "";
        cout << "______________________" << endl;
        cout << "";
        cout << "Desenho" << endl;
        cout << "Terror" << endl;
        cout << "Anime" << endl;
        cout << "Acao" << endl;
        cout << "Comedia" << endl;
        cin >> catalogo->genero;



    }else if(pesquisa == '2'){                  // Nome

        cout << "Escolha o Nome" << endl;
        cout << "";
        cout << "______________________" << endl;
        cout << "";
        cout << "Hulk" << endl;
        cout << "Batman" << endl;
        cout << "Ritual" << endl;
        cout << "Exorcismo" << endl;
        cout << "Jumper" << endl;
        cin >> catalogo->nome;


    }else if(pesquisa == '3'){                  // Ano

        cout << "Escolha o Ano" << endl;
        cout << "";
        cout << "______________________" << endl;
        cout << "";
        cout <<  "2000" << endl;
        cout <<  "2001" << endl;
        cout <<  "2002" << endl;
        cout <<  "2003" << endl;
        cout <<  "2004" << endl;
        cin >> catalogo->ano;

    }

}


int main()
{
    char pesquisa;

    cout << "Digite seu modo de pesquisa: " << endl;
    cout << "1 - Genero " << endl;
    cout << "2 - Nome " << endl;
    cout << "3 - Ano " << endl;
    cin >> pesquisa;

    if(pesquisa == '1'){
       busca(pesquisa);

    }else if(pesquisa == '2'){
       busca(pesquisa);

    }else if(pesquisa == '3'){
       busca(pesquisa);
    }

    return 0;
}
