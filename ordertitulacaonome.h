#ifndef ORDERTITULACAONOME_H
#define ORDERTITULACAONOME_H
#include<metododeordenacao.h>

class OrderTitulacaoNome:public MetodoDeOrdenacao
{
public:
    bool Igual(Professor a, Professor b)const{return a.getTitulacao() == b.getTitulacao() && a.getNome() == b.getNome();}
    bool maior(Professor a, Professor b)const;
    OrderTitulacaoNome(QString nomeDoArquivoNoDisco);
    OrderTitulacaoNome(MetodoDeOrdenacao* dat);
};

#endif // ORDERTITULACAONOME_H
