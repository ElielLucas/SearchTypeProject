#ifndef DADOSDOARQUIVO_H
#define DADOSDOARQUIVO_H

#include<QString>
#include<fstream>
#include<professor.h>
#include<QStringList>
#include <QFileDialog>
#include<QWidget>
#include<iostream>

class DadosDoArquivo
{
private:
    QString nomeDoArquivoNoDisco;
    int tamanhoDoArquivo;
public:
    DadosDoArquivo(QString nomeDoArquivoNoDisco);

    int getTamanhoDoArquivo()const {return tamanhoDoArquivo;}
    Professor* obterDadosDoArquivo();
};


#endif // DADOSDOARQUIVO_H
