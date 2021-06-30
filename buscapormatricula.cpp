#include "buscapormatricula.h"

BuscaPorMatricula::BuscaPorMatricula(QString nomeDoArquivoNoDisco):
    MetodoDeOrdenacao(nomeDoArquivoNoDisco)
{
}
BuscaPorMatricula::BuscaPorMatricula(MetodoDeOrdenacao* dat):
    MetodoDeOrdenacao(dat)
{
}
