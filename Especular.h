#pragma once

#define TAMANHOTERRENO 3500
#define AREACONSTRUIDA 2500
#define VAGASGARAGEM 10000

double precoquartos(int a)
{
	int s;

	if (a == 1)
		s = 10717;
	else if (a == 2)
		s = 13142;
	else if (a == 3)
		s = 18102;
	else if (a == 4)
		s = 22096;
	else if (a == 5)
		s = a * 4845;

	return s;
}

double precobase(int a, int b, int c, int d, int e)
{
	double s;

	s = precoquartos(d) + a * TAMANHOTERRENO + b * AREACONSTRUIDA + c * VAGASGARAGEM;
	
	return s;
}

double precobairro(int a, int b)
{
	double s;

	if (a == 1)
		s = b;
	else if (a == 2)
		s = b * 1.3;
	else if (a == 3)
		s = b * 1.8;
	else if (a == 4)
		s = b * 2.4;
	else if (a == 5)
		s = b * 3.6;

	return s;
}
	

