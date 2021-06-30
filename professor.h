#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <QString>
#include <iostream>

using namespace std;
class Professor
{
    private:
        QString matricula;
        QString nome;
        QString departamento;
        QString titulacao;
        QString tipoDeContrato;
    public:
        Professor();
        Professor(QString matricula, QString nome, QString departamento, QString titulacao, QString tipoDeContrato);
        void setAll(QString matricula, QString nome, QString departamento, QString titulacao, QString tipoDeContrato);
        QString getMatricula() const{return matricula;}
        void setMatricula(QString value){matricula=value;}
        QString getNome() const{return nome;}
        void setNome(QString value){nome=value;}
        QString getDepartamento() const{return departamento;}
        void setDepartamento(QString value){departamento=value;}
        QString getTitulacao() const{return titulacao;}
        void setTitulacao(QString value){titulacao=value;}
        QString getTipoDeContrato() const{return tipoDeContrato;}
        void setTipoDeContrato(QString value){tipoDeContrato=value;}
};
#endif // PROFESSOR_H
