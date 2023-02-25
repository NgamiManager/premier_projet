#ifndef RATIONNAL_H_INCLUDED
#define RATIONNAL_H_INCLUDED
#define N 5
typedef struct
{
   int n,d;
}Rationnal;
typedef Rationnal T_Rationnal[N];
 //lecture d' un rationnal
 Rationnal read();
 //affichage d'un rationnal
 void print(Rationnal r);
 Rationnal normalise(Rationnal r);
 //normalise un ratinnal
 Rationnal ADD(Rationnal r1, Rationnal r2);
 //additionner un rationnal
 Rationnal Sub(Rationnal r1, Rationnal r2);
 //sub un rationnal
 void menu();



#endif // RATIONNAL_H_INCLUDED
