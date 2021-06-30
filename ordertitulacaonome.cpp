#include "ordertitulacaonome.h"

OrderTitulacaoNome::OrderTitulacaoNome(QString nomeDoArquivoNoDisco):
    MetodoDeOrdenacao(nomeDoArquivoNoDisco)
{
}
OrderTitulacaoNome::OrderTitulacaoNome(MetodoDeOrdenacao* dat):
    MetodoDeOrdenacao(dat)
{
}

bool OrderTitulacaoNome::maior(Professor a, Professor b)const
{
    if(a.getTitulacao() > b.getTitulacao())return true;
    if(a.getTitulacao() == b.getTitulacao() && a.getNome() > b.getNome())return true;
    return false;
}
