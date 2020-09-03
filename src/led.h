/*! ===========================================================================================================================
  Classe: Led.h                        Fichier de déclaration
  Editor: Lycée Marcel Callo
  date:02-10-2016
//============================================================================================================================*/


#include <Arduino.h>
class Led
{
  private:
  /// Attributs
	  byte _pin;
	  
  ///Méthodes
  void Rafraichir();
  public:
  /// constructeur
	  Led(byte broche);
  
  ///Attributs
      byte _etat;
  ///Méthodes
	  void Allumer(bool enable);
	  void Eteindre(bool enable);
	  void Flash(bool enable,int temps,byte nb);
};
