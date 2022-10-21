#ifndef CURSOENEM_H
#define CURSOENEM_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

class Data
{

private:
    // Função membro auxiliar
    int checkDia(int) const;
    int dia;
    int mes;
    int ano;

public:
    Data(int = 1, int = 1, int = 1);
    ~Data();
};

#endif