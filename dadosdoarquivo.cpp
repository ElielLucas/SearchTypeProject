#include "dadosdoarquivo.h"

DadosDoArquivo::DadosDoArquivo(QString nomeDoArquivoNoDisco):
nomeDoArquivoNoDisco(nomeDoArquivoNoDisco)
{
    std::ifstream arquivo;
    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivo.is_open()) throw QString("Erro na Abertura do Arquivo");
    std::string linha;
    std::getline(arquivo,linha);
    for(tamanhoDoArquivo = 0; !arquivo.eof(); tamanhoDoArquivo++){std::getline(arquivo,linha);}
    arquivo.close();
}

Professor* DadosDoArquivo::obterDadosDoArquivo()
{
    int pos = 0;
    std::ifstream arquivo;

    arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());

    if(!arquivo.is_open() ) throw QString("Erro na Abertura do Arquivo");
    std::string linha;

    Professor* vetor =  new Professor[tamanhoDoArquivo];
    std::getline(arquivo,linha);
    while(!arquivo.eof())
    {
        QString linhaAux=QString::fromStdString(linha);
        QStringList lista = linhaAux.split(';');
        if(lista.length()!=5) throw QString("Linha do arquivo faltando dados");
        Professor Professor;
        vetor[pos].setAll(lista[0], lista[1], lista[2], lista[3], lista[4]);
        std::getline(arquivo,linha);
        pos++;
    }

    arquivo.close();
    return vetor;
 }




