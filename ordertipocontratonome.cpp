#include "ordertipocontratonome.h"

OrderTipoContratoNome::OrderTipoContratoNome(QString nomeDoArquivoNoDisco):
    MetodoDeOrdenacao(nomeDoArquivoNoDisco)
{
}
OrderTipoContratoNome::OrderTipoContratoNome(MetodoDeOrdenacao* dat):
    MetodoDeOrdenacao(dat)
{
}

bool OrderTipoContratoNome::maior(Professor a, Professor b)const
{
    if(a.getTipoDeContrato() > b.getTipoDeContrato())return true;
    if(a.getTipoDeContrato() == b.getTipoDeContrato() && a.getNome() > b.getNome())return true;
    return false;
}
