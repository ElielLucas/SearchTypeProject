#ifndef ORDERDEPARTAMENTOTITULACAONOME_H
#define ORDERDEPARTAMENTOTITULACAONOME_H
#include<metododeordenacao.h>

class OrderDepartamentoTitulacaoNome:public MetodoDeOrdenacao
{
public:
    bool Igual(Professor a, Professor b)const{return a.getDepartamento() == b.getDepartamento() && a.getTitulacao() == b.getTitulacao() && a.getNome() == b.getNome();}
    bool maior(Professor a, Professor b)const;
    OrderDepartamentoTitulacaoNome(QString nomeDoArquivoNoDisco);
    OrderDepartamentoTitulacaoNome(MetodoDeOrdenacao* dat);
};

#endif // ORDERDEPARTAMENTOTITULACAONOME_H
