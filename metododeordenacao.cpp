#include "metododeordenacao.h"

MetodoDeOrdenacao::MetodoDeOrdenacao(QString nomeDoArquivoNoDisco):
    dados(0),
    tamanho(0)
{
    DadosDoArquivo aux(nomeDoArquivoNoDisco);
    dados = aux.obterDadosDoArquivo();
    tamanho = aux.getTamanhoDoArquivo();
}

MetodoDeOrdenacao::MetodoDeOrdenacao(MetodoDeOrdenacao* dat)
{
    dados=dat->getDados();
    tamanho=dat->getTamanho();
}

void MetodoDeOrdenacao::quickSort(int PI, int PF)
{
    Professor pivo, aux;
    int i, j, meio;

    i = PI;
    j = PF;

    meio = (int) ((i + j) / 2);
    pivo = dados[meio];

    do
    {
       while (maior(pivo, dados[i])) i = i + 1;
       while (maior(dados[j], pivo)) j = j - 1;

       if(i <= j)
       {
          aux = dados[i];
          dados[i] = dados[j];
          dados[j] = aux;
          i = i + 1;
          j = j - 1;
       }
    }while(j > i);

    if(PI < j) quickSort(PI, j);
    if(i < PF) quickSort(i, PF);
}


int MetodoDeOrdenacao::buscaSequencial(Professor buscado)const
{
    for(int i=0;i<tamanho;i++)
    {
        if(Igual(buscado, dados[i])) return i;
    }
    return -1;
}

int MetodoDeOrdenacao::buscaBinaria(Professor buscado, int inicio, int fim)const
{   
     int meio;
     if(inicio<=fim)
     {
         meio = (inicio + fim)/2;
         if(Igual(buscado, dados[meio]))
             return meio;
         else
         {
             if(maior(buscado , dados[meio]))
                 return buscaBinaria(buscado, meio+1, fim);
             else
                 return buscaBinaria(buscado, inicio, meio-1);
         }
     }
     return -1;
}

