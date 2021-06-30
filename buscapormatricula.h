#ifndef BUSCAPORMATRICULA_H
#define BUSCAPORMATRICULA_H

#include <metododeordenacao.h>

class BuscaPorMatricula: public MetodoDeOrdenacao
{
    public:
        bool Igual(Professor a, Professor b)const{return a.getMatricula() == b.getMatricula();}
        bool maior(Professor a, Professor b)const{return a.getMatricula().toInt() > b.getMatricula().toInt();}
        BuscaPorMatricula(QString nomeDoArquivoNoDisco);
        BuscaPorMatricula(MetodoDeOrdenacao* dat);
};

#endif // BUSCAPORMATRICULA_H
