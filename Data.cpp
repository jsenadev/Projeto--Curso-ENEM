#include <iostream>
#include "Data.h"

using namespace std;

int Data::checkDia(int dia) const
{
    static const int diasPorMes[13] = {0, 31, 28, 31, 30, 30, 31, 31, 30, 31, 30, 31};

    if (dia > 0 && dia <= diasPorMes[mes])
        return dia;
    if (mes == 2 && dia == 29 && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)))
        return dia;
    cout << "Dia inválido.\n";

    return 1;
}