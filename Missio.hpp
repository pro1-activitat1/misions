#ifndef MISSIO_HPP
#define MISSIO_HPP
#include <iostream>
using namespace std;


class Missio{
	// Tipus de modul: dades
	// Descripcio del tipus: nom de la misio (misio1,misio2...,misio9),
		//una descripcio i punts a obtenir
private:
	string nom;
	string def;
	int punts;

public:

	//Constructors:
	Missio();
	/* Pre: cert */
    /* Post: el resultat es una misio amb nom= nameless,
    	def=null, punts=0*/
	Missio(const string &name, const string &definicio, const int &puntuacio);
	/* Pre: cert */
    /* Post: el resultat es una missio amb nom=name,def=definicio
    	i punts=puntuacio*/
	Missio(const Missio &mision);
	/* Pre: cert */
    /* Post: el resultat es una missio amb les dades de mision */
    
    //Destructor 
    ~Missio();
    /* Post: esborra automaticament els objectes locals en sortir d'un ambit 
	   de visibilitat */

    //Modificadors
    void modifica_nom(const string &name);
    /* Pre: cert */
    /* Post: El nom de la missio pasara a ser name*/
    void modifica_punts(const int &p);
    /* Pre: cert */
    /* Post: La missio pasara a tenir p punts*/
    void modifica_def(const string &s)
    /* Pre: cert */
    /* Post: La definicio la missio pasara a ser s */
    
    //Consultors
    string mira_nom() const;
    /* Pre: cert */
    /* Post: el resultat es el nom del p.i*/

    string mira_def() const;
    /* Pre: cert */
    /* Post: el resultat es la descripcio del p.i*/

    int mira_punts() const;
    /* Pre: cert */
    /* Post: el resultat es el punts que dona ell p.i*/






};
#endif