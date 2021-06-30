#ifndef METODODEORDENACAO_H
#define METODODEORDENACAO_H
#include <dadosdoarquivo.h>
#include <professor.h>


class MetodoDeOrdenacao
{
    private:
        Professor* dados;
        int tamanho;
    public:
        MetodoDeOrdenacao(QString nomeDoArquivoNoDisco);
        MetodoDeOrdenacao(MetodoDeOrdenacao* dat);

        int getTamanho(){return tamanho;}
        Professor * getDados()const{return dados;}

        void quickSort(int PI, int PF);
        int buscaSequencial(Professor buscado)const;
        int buscaBinaria(Professor buscado, int inicio, int fim)const;

        virtual bool Igual(Professor a, Professor b)const=0;
        virtual bool maior(Professor a, Professor b)const=0;
};



#endif // METODODEORDENACAO_H
