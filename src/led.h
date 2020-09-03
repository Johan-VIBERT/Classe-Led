/*! ===========================================================================================================================
  Classe: Led.h                        Fichier de d�claration
  Editor: Lyc�e Marcel Callo
  date:02-10-2016
//============================================================================================================================*/


#include <Arduino.h>
class Led
{
  private:
  /// Attributs
	  byte _pin;
	  
  ///M�thodes
  void Rafraichir();
  public:
  /// constructeur
	  Led(byte broche);
  
  ///Attributs
      byte _etat;
  ///M�thodes
	  void Allumer(bool enable);
	  void Eteindre(bool enable);
	  void Flash(bool enable,int temps,byte nb);
};
