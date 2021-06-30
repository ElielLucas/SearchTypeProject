#include "orderdepartamentotitulacaonome.h"

OrderDepartamentoTitulacaoNome::OrderDepartamentoTitulacaoNome(QString nomeDoArquivoNoDisco):
    MetodoDeOrdenacao(nomeDoArquivoNoDisco)
{
}
OrderDepartamentoTitulacaoNome::OrderDepartamentoTitulacaoNome(MetodoDeOrdenacao* dat):
    MetodoDeOrdenacao(dat)
{
}

bool OrderDepartamentoTitulacaoNome::maior(Professor a, Professor b)const
{
    if(a.getDepartamento() > b.getDepartamento())return true;
    if(a.getDepartamento() == b.getDepartamento() && a.getTitulacao() > b.getTitulacao())return true;
    if(a.getDepartamento() == b.getDepartamento() && a.getTitulacao() == b.getTitulacao()  && a.getNome() > b.getNome())return true;

    return false;
}
