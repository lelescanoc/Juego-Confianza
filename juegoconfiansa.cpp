#include "jugador.h"
#include <iostream>
using namespace std;



jugador::jugador(int _puntaje, string _nombre,int _monedas)

{
	puntaje=_puntaje;
	nombre=_nombre;
	monedas= _monedas;
}


jugador::~jugador()
{


}
ostream & operator<<(ostream & os, const Jugador & a)
{
	os<<"Animal:"<<a.name<<"_"<<a.age;
	return os;
	
}
void jugador:: get_puntaje(int _puntaje)
{
	puntaje =_puntaje;

}
int jugador:: set_monedas(int _monedas)
{
	monedas =_monedas;

}
void jugador:: get_nombre(string  _nombre)
{
	nombre =_nombre;

}


