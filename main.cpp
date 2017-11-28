#include "hashDuplo.h"
#include "hashEncadeado.h"

using namespace std;


int TAMANHO_ARQUIVO = 11;

int main(){
    char tipo,comando;
    FILE *arquivo = fopen("teste.bin","r+");

    cin >> tipo;

    if(tipo == 'l'){
        HashEncadeado l(TAMANHO_ARQUIVO);

        while(cin >> comando,comando != 'e'){
            //insercao
            if(comando == 'i')
                l.insereRegistro();

            //consulta de registro
            else if(comando == 'c')
                l.consultaRegistro();

            //imprime arquivo
            else if(comando == 'p')
                l.imprimeArquivo();

            else if(comando == 'm')
                l.calcularMedia();

            else if(comando == 'r')
                l.removeRegistro();
        }
    }
    else if(tipo == 'd'){
        HashDuplo d(TAMANHO_ARQUIVO);

        while(cin >> comando,comando != 'e'){
            //insercao
            if(comando == 'i')
                d.insereRegistro();

            //consulta de registro
            else if(comando == 'c')
                d.consultaRegistro();

            //imprime arquivo
            else if(comando == 'p')
                d.imprimeArquivo();

            else if(comando == 'm')
                d.calcularMedia();

            else if(comando == 'r')
                d.removeRegistro();
        }
    }



}