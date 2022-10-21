#ifndef CURSOENEM_H
#define CURSOENEM_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "Data.h"

using namespace std;

class Aluno
{

private:
    string nomeAluno;
    float media;
    int colocacao;

public:
    Aluno(string, float, int);
    ~Aluno();
    string getNomeAluno();
    float getMedia();
    int getColocacao();

    void setNomeAluno(string);
    void setMedia(float);
    void setColocacao(int);

    void printAluno();
};

#endif