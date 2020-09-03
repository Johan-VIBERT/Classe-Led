/*! ===========================================================================================================================
  Classe: Led.cpp                        Fichier d'impémentation
  Editor: Lycée Marcel Callo
  date:02-10-2017
//============================================================================================================================*/


/*! ===========================================================================================================================
//                         Directives
// ===========================================================================================================================*/
#include <Arduino.h>
#include <Led.h>


Led::Led(byte broche)
   /// le constructeur permet d'initialiser les attributs privés
   /// et de faire le setup des pins Arduino
{
  _pin = broche;

  pinMode(_pin, OUTPUT);
  Eteindre(1);
}


void Led::Allumer(bool enable)
{
  if (enable)
  {
     _etat = HIGH; // Allumé
     Rafraichir();
  }



}
void Led::Eteindre(bool enable)
{

  if (enable)
  {
   _etat = LOW; // Eteint
   Rafraichir();
  }


}

void Led::Rafraichir()
{
  digitalWrite(_pin, _etat);
}

void Led:: Flash(bool enable,int temps,byte nb)
{
 if (enable)
 {
     for (char i=0;i<nb;i++)
     {
      Allumer(enable);
      delay(temps);
      Eteindre(enable);
      delay(temps);
     }
 }




}
