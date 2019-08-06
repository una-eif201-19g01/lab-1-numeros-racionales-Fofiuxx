#ifndef Racional_h
#define Racional_h

class Racional {

private:
	int a;
	int num, deno;

	static int calcularMCD(int n, int d);


public:

	Racional();
	Racional(int num, int deno);
	Racional(int a);
	

	static void SimpliFraccion(Racional& fraccion);
	Racional SumaFraccion(Racional fraccion);
	std::string ObtenerString();
	Racional RestaFraccion(Racional fraccion);
	Racional MultiFraccion(Racional fraccion);
	Racional DiviFraccion(Racional fraccion);
	Racional ElevaFraccion( Racional fraccion);
	Racional ElevaEquivalente(Racional fraccion);

	int getNum() const;

	void setNum(int num);

	int getDeno() const;

	void setDeno(int deno);

	
};

#endif