#pragma once

#include "Imovel.h"

class Apartamento : public Imovel
{
public:
    Apartamento();
    Apartamento(std::string t, std::string l, std::string b, std::string cep, std::string c, int n, double v, char tN, double ar, double vC,
        int q, int an, int vG, std::string p);

    int getQuartos();

    int getAndar();

    int getVagasGaragem();

    double getArea();

    void setValorCondominio(double vC);
    double getValorCondominio();

    std::string getPosicao();

protected:

private:
    double area, valorCondominio;
    int quartos, andar, vagasGaragem;
    std::string posicao;
};



