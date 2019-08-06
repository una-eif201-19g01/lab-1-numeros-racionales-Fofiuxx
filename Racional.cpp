#include <iostream>
#include <cmath>
#include"Racional.h"
#include <string>
#include <math.h>


Racional::Racional(){

	setNum(0);
	setDeno(1);

}

Racional::Racional(int num, int deno) : num(num){}


int Racional::calcularMCD(int n, int d) {
	int resultado = 0;

	if (d == 0) {

		resultado = n;
	}
	else
	{
		resultado = calcularMCD(d, n % d);


	}
	return resultado;

}

void Racional::SimpliFraccion(Racional &fraccion) {

	if (fraccion.num != 0) {

		int numMCD = calcularMCD(abs(fraccion.getNum()), fraccion.getDeno());

		int num = fraccion.getNum() / numMCD;

		int deno = fraccion.getDeno() / numMCD;

		fraccion.setNum(num);
		fraccion.setDeno(deno);

	}
}
 Racional Racional::SumaFraccion(Racional fraccion) {

	 Racional result;

	 result.setNum(
		 getNum() * fraccion.getDeno() + getDeno() * fraccion.getNum());

	 result.setDeno(getDeno() * fraccion.getDeno());

	 SimpliFraccion(result);

	 return result;
	}

 Racional Racional::RestaFraccion(Racional fraccion) {

	 Racional result;

	 result.setNum(getNum() * fraccion.getDeno() - getDeno() * fraccion.getNum());

	 result.setDeno(getDeno() * fraccion.getDeno());

	 SimpliFraccion(result);

	 return result;

	
 }

 Racional Racional::MultiFraccion(Racional fraccion) {

	 Racional result;
	 
	 result.setNum(getNum() * fraccion.getNum());

	 result.setDeno(getDeno() * fraccion.getDeno());

	 SimpliFraccion(result);

	 return result;
 }

 Racional Racional::DiviFraccion(Racional fraccion) {

	 Racional result;

	 result.setNum(getNum() * fraccion.getDeno());

	 result.setDeno(getDeno() * fraccion.getNum());

	 SimpliFraccion(result);

	 return result;
 }


 /*Racional Racional::ElevaFraccion( Racional fraccion) {
	 Racional result;

	 result.setNum( pow(getNum(), a));

	 result.setDeno( pow(getDeno(), a));

	 SimpliFraccion(result);
 
	 return result;
 }*/

 Racional Racional::ElevaEquivalente(Racional fraccion) {

	 Racional result;
	 
	 result.setNum(getNum() * fraccion.getDeno());
	 
	 result.setDeno(getDeno() * fraccion.getNum());

	 SimpliFraccion(result);

	 if (getNum() == getDeno()) {

		return result;
	 }
	 else {

		 return result;
	 }


 }

 std::string Racional::ObtenerString() {

	 std::string result;

	 result = std::to_string(getNum()) + "/" + std::to_string(getDeno());

	 return result;
 
 }

 int Racional::getNum() const {

	 return num;
 }

 void Racional::setNum(int num) {

	 Racional::num = num;
 }

 int Racional::getDeno() const {

	 return  deno;
 }

 void Racional::setDeno(int deno) {

	 Racional::deno = deno;

 }

