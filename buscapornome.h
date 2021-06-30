#ifndef BUSCAPORNOME_H
#define BUSCAPORNOME_H


#include <metododeordenacao.h>

class BuscaPorNome: public MetodoDeOrdenacao
{
public:
    bool Igual(Professor a, Professor b)const{return a.getNome() == b.getNome();}
    bool maior(Professor a, Professor b)const{return a.getNome().toStdString() > b.getNome().toStdString();}
    BuscaPorNome(QString nomeDoArquivoNoDisco);
    BuscaPorNome(MetodoDeOrdenacao* dat);
};


#endif // BUSCAPORNOME_H
