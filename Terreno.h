#pragma once

#include "Imovel.h"

class Terreno : public Imovel
{
public:
    Terreno();
    Terreno(std::string t, std::string l, std::string b, std::string cep, std::string c, int n, double v, char tN, double a);

    double getArea();

protected:

private:
    double area;
};

