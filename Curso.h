#ifndef CURSOENEM_H
#define CURSOENEM_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

class Curso
{
private:
    int nota;
    vector<string *> uf;

public:
    Curso(int, string, string);
    ~Curso();

    int getNota();
    void setNota();
    void printUf();
};

#endif