#include "aluno.h"

Aluno::Aluno(string name, float med, int coloc) : nomeAluno(""), media(0), colocacao(0){};

Aluno::~Aluno()
{
}

string Aluno::getNomeAluno()
{
    return nomeAluno;
}
float Aluno::getMedia()
{
    return media;
}
int Aluno::getColocacao()
{
    return colocacao;
}

void Aluno::setNomeAluno(string name)
{
    nomeAluno = name;
}
void Aluno::setMedia(float med)
{
    media = med;
}
void Aluno::setColocacao(int coloc)
{
    colocacao = coloc;
}

void Aluno::printAluno()
{
    cout << "\n\n== Melhor Aluno do curso ==";
    cout << "\nALuno: " << getNomeAluno;
    cout << "\nMedia: " << getMedia;
    cout << "\nColocacao: " << getColocacao;
}