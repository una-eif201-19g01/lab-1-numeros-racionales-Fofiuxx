#include<iostream>
#include <string>
#include "Racional.h"


int main() {
	
	Racional fraccionA(20, 8);
	Racional fraccionB(10, 4);
	Racional fraccionAux;

	std::cout << "Simplificacion de la fraccion A: " << fraccionA.ObtenerString() << std::endl;
	Racional::SimpliFraccion(fraccionA);
	std::cout << "Resultado: " << fraccionA.ObtenerString() << std::endl;

	std::cout << "Simplificacion de la fraccion B: " << fraccionB.ObtenerString();
	Racional::SimpliFraccion(fraccionB);
	std::cout << "Resultado: " << fraccionB.ObtenerString() << std::endl;

	std::cout << "\nSumar de Fracciones " << std::endl;
	fraccionAux = fraccionA.SumaFraccion(fraccionB);
	std::cout << "Resultado: " << fraccionA.ObtenerString() << " + " << fraccionB.ObtenerString() <<
		" = " << fraccionAux.ObtenerString() << std::endl;

	std::cout << "\nResta de Fracciones " << std::endl;
	fraccionAux = fraccionA.RestaFraccion(fraccionB);
	std::cout << "Resultado: " << fraccionA.ObtenerString() << " - " << fraccionB.ObtenerString() <<
		" = " << fraccionAux.ObtenerString() << std::endl;

	std::cout << "\nMultiplicacion de Fracciones " << std::endl;
	fraccionAux = fraccionA.MultiFraccion(fraccionB);
	std::cout << "Resultado: " << fraccionA.ObtenerString() << " * " << fraccionB.ObtenerString() <<
		" = " << fraccionAux.ObtenerString() << std::endl;

	std::cout << "\nDivision de Fracciones " << std::endl;
	fraccionAux = fraccionA.DiviFraccion(fraccionB);
	std::cout << "Resultado: " << fraccionA.ObtenerString() << " / " << fraccionB.ObtenerString() <<
		" = " << fraccionAux.ObtenerString() << std::endl;
	
	/*std::cout << "\nElevacion de Fracciones " << std::endl;
	fraccionAux = fraccionA.ElevaFraccion(fraccionB);
	std::cout << "Resultado: " << fraccionA.ObtenerString() << " / " << fraccionB.ObtenerString() <<
		" = " << fraccionAux.ObtenerString() << std::endl;*/

	std::cout << "\nElevacion Equivalente de Fracciones " << std::endl;
	fraccionAux = fraccionA.SumaFraccion(fraccionB);
	std::cout << "Resultado: " << fraccionA.ObtenerString() << " / " << fraccionB.ObtenerString() <<
		" = " << fraccionAux.ObtenerString() << std::endl;


	return 0;
}

