#include "professor.h"

Professor::Professor():
    matricula(""),
    nome(""),
    departamento(""),
    titulacao(""),
    tipoDeContrato("")
{
}

Professor::Professor(QString matricula, QString nome, QString departamento, QString titulacao, QString tipoDeContrato)
{
    this->matricula=matricula;
    this->nome=nome;
    this->departamento=departamento;
    this->titulacao=titulacao;
    this->tipoDeContrato=tipoDeContrato;
}

void Professor::setAll(QString matricula, QString nome, QString departamento, QString titulacao, QString tipoDeContrato)
{
    this->matricula=matricula;
    this->nome=nome;
    this->departamento=departamento;
    this->titulacao=titulacao;
    this->tipoDeContrato=tipoDeContrato;
}
