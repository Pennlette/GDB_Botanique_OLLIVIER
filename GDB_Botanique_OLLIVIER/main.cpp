/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>
#include "Vegetable.h"
#include "Grass.h"
#include "Flower.h"
#include "Niak.h"
using namespace std;

int main ()
{
  int routine = 3;
  int choiceGrass = 0;
  int choiceFlower = 0;
  int choiceNiak = 0;
  int choice = 0;
  int moula = 10;
  int numGrass = 1;
  int numFlower = 0;
  int numNiak = 0;
  
  Grass gGrass;
  Flower gFlower;
  
  
  cout << "Vous êtes un botaniste débutant,\n";
  cout << "vous voulez vous lancer dans le noble art de la plante en pot. \n";
  cout << "Vous avez actuellement en votre possesion un pot d'herbe classiqe... Le début de la gloire. \n\n";
  cout << "Votre épargne s'élève à " << moula << " Couronnes Polovlandaises. \n\n"; 
  cout << "Actuellement en votre possession : \n";
  cout << numGrass << " Herbe en pot \n";
  cout << numFlower << " Fleurs \n";
  cout << numNiak << " Niaks \n\n";
  while (routine < 4)
  {
    if (routine == 3) 
    {
      cout << "Le soleil vient juste de se lever, une nouvelle journée commence. \n";
      cout << "Que voulez vous faire ? \n\n";
      cout << "1-Inspecter Herbe en pot \n";
      cout << "2-Inspecter Fleurs \n";
      cout << "3-Inspecter Niaks \n";
      cout << "4-Faire la grasse matinée \n";
      cin >> choice;
      if (choice == 1)
      {
        cout << "Vous inspectez les Herbes en pot \n";
        cout << "Que faire avec les plantes en pot ? \n\n";
        cout << "1-Arroser \n";
        cout << "2-Tailler \n";
        cout << "3-Observer \n";
        cout << "4-Retour \n";
        cin >> choiceGrass;
        if (choiceGrass == 1)
        {
          cout << gGrass.wat + gGrass.txtWat;
          gGrass.nWat += 1;
          if (gGrass.nWat == 4)
          {
            cout << "Oh non, il semblerait que vous ayez noyez votre Herbe en pot ! \n";
            gGrass.health -= 1;
          }
          routine -= 1;
        }
        else if (choiceGrass == 2)
        {
          cout << gGrass.cut + gGrass.txtCut;
          gGrass.nCut += 1;
          gGrass.health += 1; 
          if (gGrass.nCut == 3)
          {
            cout << "Oh non, il semblerait que vous ayez performé une coupure fatale ! \n";
            gGrass.health -= 1;
          }
          routine -= 1;
        }
        else if (choiceGrass == 3)
        {
          cout << "Une Herbe en pot tout à fait classique \n";
          cout << gGrass.inspect + gGrass.txtIns;
          cout << gGrass.health << "\n";
        }
        else if (choiceGrass == 4)
        {
          cout << "Vous jugez que vous avez des choses plus importantes à faire \n";    
        }
      }
      else if (choice == 2)
      {
        cout << "Vous inspectez les Fleurs \n";
        cout << "Que faire avec les Fleurs ? \n\n";
        cout << "1-Arroser \n";
        cout << "2-Tailler \n";
        cout << "3-Observer \n";
        cout << "4-Retour \n";
        cin >> choiceFlower;
        if (choiceFlower == 1)
        {
          cout << gFlower.wat + gFlower.txtWat;
          gFlower.nWat += 1;
          if (gFlower.nWat == 4)
          {
            cout << "Oh non, il semblerait que vous ayez noyez votre Herbe en pot ! \n";
            gFlower.health -= 1;
          }
          routine -= 1;
        }
        else if (choiceFlower == 2)
        {
          cout << gFlower.cut + gFlower.txtCut;
          gFlower.nCut += 1;
          gFlower.health += 1; 
          if (gFlower.nCut == 3)
          {
            cout << "Oh non, il semblerait que vous ayez performé une coupure fatale ! \n";
            gFlower.health -= 1;
          }
          routine -= 1;
        }
        else if (choiceFlower == 3)
        {
          cout << "Une jolie Fleur des montagnes \n";
          cout << gFlower.inspect + gFlower.txtIns;
          cout << gFlower.health << "\n";
        }
        else if (choiceFlower == 4)
        {
          cout << "Vous jugez que vous avez des choses plus importantes à faire \n";    
        }
      }
    } 
    else if (routine == 2)
    {
      cout << "La matinée est désormais bien entamée, \n";
      cout << "le magasin devrait être ouvert maintenant. \n";
      cout << "Que voulez vous faire ? \n\n";
      cout << "1-Inspecter Herbe en pot \n";
      cout << "2-Inspecter Fleurs \n";
      cout << "3-Inspecter Niaks \n";
      cout << "4-Vous avez bien mérité une petite sieste... \n";
    } 
    else if (routine == 1)
    {
      cout << "La journée touche à sa fin, \n";
      cout << "Vous vous faite la remarque que les jours passent plutôt vite dans le coin. \n";
      cout << "Que voulez vous faire ? \n\n";
      cout << "1-Inspecter Herbe en pot \n";
      cout << "2-Inspecter Fleurs \n";
      cout << "3-Inspecter Niaks \n";
      cout << "4-Se coucher tôt c'est important aussi \n";
    }
    else if (routine == 0)
    {
      cout << "What a horrible night to have a curse... \n";
      cout << "Vous vous rappelez soudainement que vous êtes dans le mauvais jeu \n";
      cout << "Que voulez vous faire ? \n\n";
      cout << "1-Rien à faire à part dormir \n";
      cin >> choice;
      if (choice ==1)
      {
       cout << "Vous vous mettez au lit, vous pensez à toutes les aventures que vous avez vécu, \n";
       cout << "Et que vous vivrez encore \n";
       routine += 3;
      }
    }
  }
  
  return 0;
}
