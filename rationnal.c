#include <stdio.h>
#include "rationnal.h"
 Rationnal read()
 {
     Rationnal r;
     printf("entrer le numerateur\n");
     printf("n : ");
     scanf("%d",&r.n);
     printf("entrer le denominateur\n");
     printf("d : ");
     scanf("%d",&r.d);
     return r;
 }
 void print(Rationnal r)
 {
     printf("%d/%d",r.n,r.d);
 }
  Rationnal Sub(Rationnal r1, Rationnal r2)
 {
     Rationnal c;
     c.n = r1.n*r2.d-r2.n*r1.d;
     c.d = r1.d*r2.d;
     return c;
 }
    Rationnal ADD(Rationnal r1, Rationnal r2)
 {
     Rationnal r;
     r.n = r1.n+r2.n;
     r.d = r1.d;
 }
  void menu()
  {
      int choix;
      char c;
      Rationnal r,d,r3,//r4//;
      r.d = 2;
      r.n = 3;
      do
      {
      printf("gestion des rationnal\n");
      printf("1. lire un nombre rationnal\n");
      printf("2. afficher un nombre rationnal\n");
      printf("3. somme de deux rationnal\n\n");
      //printf("4.difference de deux rationnal\n\n");//
      scanf("%d",&choix);
      switch(choix)
      {
      case 1:
        print(read());
        break;
      case 2:
        print(r);
        break;
      case 3:
        r = read();
        d = read();
        r3 = ADD(r, d);
        print(r3);
        break;
      /*case4:
        r = read();
        d = read();
        r4 = sub(r,d);
        print(r4);
        break;*/
      default:
        printf("choix non conforme");
      }
      printf("voulez vous continuero=oui n=non\n");
      scanf("%c",&c);
      if(c != 'o' && c != 'o')
        break;
      }while(c =='o'|| c =='o');


  }
