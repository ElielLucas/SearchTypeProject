#include "orderdepttipocontratonome.h"

OrderDeptTipoContratoNome::OrderDeptTipoContratoNome(QString nomeDoArquivoNoDisco):
    MetodoDeOrdenacao(nomeDoArquivoNoDisco)
{
}
OrderDeptTipoContratoNome::OrderDeptTipoContratoNome(MetodoDeOrdenacao* dat):
    MetodoDeOrdenacao(dat)
{
}

bool OrderDeptTipoContratoNome::maior(Professor a, Professor b)const
{
    if(a.getDepartamento() > b.getDepartamento())return true;
    if(a.getDepartamento() == b.getDepartamento() && a.getTipoDeContrato() > b.getTipoDeContrato())return true;
    if(a.getDepartamento() == b.getDepartamento() && a.getTipoDeContrato() == b.getTipoDeContrato()  && a.getNome() > b.getNome())return true;

    return false;
}
