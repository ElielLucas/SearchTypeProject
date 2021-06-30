#include "buscapornome.h"

BuscaPorNome::BuscaPorNome(QString nomeDoArquivoNoDisco):
    MetodoDeOrdenacao(nomeDoArquivoNoDisco)
{
}
BuscaPorNome::BuscaPorNome(MetodoDeOrdenacao* dat):
    MetodoDeOrdenacao(dat)
{
}
