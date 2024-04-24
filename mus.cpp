#include <iostream>
#include "graphics.h"
#include "mouse.h"
#include <time.h>
#include <windows.h>
using namespace std;

class bot
{
     boton a,b;
public:
    bot(void){}
    ~bot(void){}
    void paso1(void)
    {
        a.posicion(400,300,600,400);
    }
    void paso2(void)
    {
        a.estado("poo\\jugar1.jpg","poo\\jugar2.jpg");
    }
    bool accion (void)
    {
        a.prueba();
    }
    void paso3(void)
    {
        b.posicion(400,450,600,550);
    }
    void paso4(void)
    {
        b.estado("poo\\salir1.jpg","poo\\salir2.jpg");
    }
    bool accion2 (void)
    {
        b.prueba();
    }
};

class iografico
{
protected:
    char k[2];
    int conta,malas;
public:
    iohgrafico(void){vacia(); conta =0; malas=0;}
    void vacia(void){for(int t=0; t<2; t++){k[t]= '\0';} }

    char captura(void)
    {
        vacia();
        Sleep(900);
        if(kbhit())
        {
            k[0]=getch();
            return k[0];
        }
        else{malas++;}

    }

};
class menusi
{ protected:
  void *portada[3];
  void *letras[26];
  void *numeros[10];
  void *erroresimg;
  void *puntajeimg;
  void *musbethimg;

  int x,y,z;
 public:
     menusi(void){x=0; y= x; z= x;}
     ~menusi(void){}
     void dinamizar (void)
     {
         readimagefile("poo\\lactea2.jpg",1,1,1000,650);
         portada[0] = malloc(imagesize(1,1,1000,650));
         getimage(1,1,1000,650,portada[0]);

        readimagefile("poo\\a.jpg",1,1,100,100);
        letras[0] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[0]);

        readimagefile("poo\\b.jpg",1,1,100,100);
        letras[1] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[1]);

        readimagefile("poo\\c.jpg",1,1,100,100);
        letras[2] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[2]);

        readimagefile("poo\\d.jpg",1,1,100,100);
        letras[3] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[3]);

        readimagefile("poo\\e.jpg",1,1,100,100);
        letras[4] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[4]);

        readimagefile("poo\\f.jpg",1,1,100,100);
        letras[5] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[5]);

        readimagefile("poo\\g.jpg",1,1,100,100);
        letras[6] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[6]);

        readimagefile("poo\\h.jpg",1,1,100,100);
        letras[7] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[7]);

        readimagefile("poo\\i.jpg",1,1,100,100);
        letras[8] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[8]);

        readimagefile("poo\j.jpg",1,1,100,100);
        letras[9] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[9]);

        readimagefile("poo\\k.jpg",1,1,100,100);
        letras[10] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[10]);

        readimagefile("poo\\l.jpg",1,1,100,100);
        letras[11] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[11]);

        readimagefile("poo\\m.jpg",1,1,100,100);
        letras[12] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[12]);

        readimagefile("poo\\n.jpg",1,1,100,100);
        letras[13] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[13]);

        readimagefile("poo\\o.jpg",1,1,100,100);
        letras[14] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[14]);

        readimagefile("poo\\p.jpg",1,1,100,100);
        letras[15] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[15]);

        readimagefile("poo\\q.jpg",1,1,100,100);
        letras[16] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[16]);

        readimagefile("poo\\r.jpg",1,1,100,100);
        letras[17] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[17]);

        readimagefile("poo\\s.jpg",1,1,100,100);
        letras[18] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[18]);

        readimagefile("poo\\t.jpg",1,1,100,100);
        letras[19] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[19]);

        readimagefile("poo\\u.jpg",1,1,100,100);
        letras[20] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[20]);

        readimagefile("poo\\v.jpg",1,1,100,100);
        letras[21] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[21]);

        readimagefile("poo\\w.jpg",1,1,100,100);
        letras[22] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[22]);

        readimagefile("poo\\x.jpg",1,1,100,100);
        letras[23] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[23]);

        readimagefile("poo\\y.jpg",1,1,100,100);
        letras[24] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[24]);

        readimagefile("poo\\z.jpg",1,1,100,100);
        letras[25] = malloc(imagesize(1,1,100,100));
        getimage(1,1,100,100,letras[25]);

        readimagefile("poo\\0.jpg",1,1,50,50);
        numeros[0] = malloc(imagesize(1,1,50,50));
        getimage(1,1,50,50,numeros[0]);

        readimagefile("poo\\1.jpg",1,1,50,50);
        numeros[1] = malloc(imagesize(1,1,50,50));
        getimage(1,1,50,50,numeros[1]);

        readimagefile("poo\\2.jpg",1,1,50,50);
        numeros[2] = malloc(imagesize(1,1,50,50));
        getimage(1,1,50,50,numeros[2]);

        readimagefile("poo\\3.jpg",1,1,50,50);
        numeros[3] = malloc(imagesize(1,1,50,50));
        getimage(1,1,50,50,numeros[3]);

        readimagefile("poo\\4.jpg",1,1,50,50);
        numeros[4] = malloc(imagesize(1,1,50,50));
        getimage(1,1,50,50,numeros[4]);

        readimagefile("poo\\5.jpg",1,1,50,50);
        numeros[5] = malloc(imagesize(1,1,50,50));
        getimage(1,1,50,50,numeros[5]);

        readimagefile("poo\\6.jpg",1,1,50,50);
        numeros[6] = malloc(imagesize(1,1,50,50));
        getimage(1,1,50,50,numeros[6]);

        readimagefile("poo\\7.jpg",1,1,50,50);
        numeros[7] = malloc(imagesize(1,1,50,50));
        getimage(1,1,50,50,numeros[7]);

        readimagefile("poo\\8.jpg",1,1,50,50);
        numeros[8] = malloc(imagesize(1,1,50,50));
        getimage(1,1,50,50,numeros[8]);

        readimagefile("poo\\9.jpg",1,1,50,50);
        numeros[9] = malloc(imagesize(1,1,50,50));
        getimage(1,1,50,50,numeros[9]);

        readimagefile("poo\\errores.jpg",1,1,200,50);
        erroresimg = malloc(imagesize(1,1,200,50));
        getimage(1,1,200,50,erroresimg);

        readimagefile("poo\\puntaje.jpg",1,1,200,50);
        puntajeimg = malloc(imagesize(1,1,200,50));
        getimage(1,1,200,50,puntajeimg);

        readimagefile("poo\\musbeth.jpg",1,1,300,50);
        musbethimg = malloc(imagesize(1,1,300,50));
        getimage(1,1,300,50,musbethimg);



     }
     void imprimirporta(void)
     {
         putimage(1,1,portada[0],0);

     }


};
class gera: public menusi, public iografico
{
    int x,y,z,c,o,p,q,beth,erro;
public:
    gera(void):iografico(){x=0; y=0; z=0; c=0;erro=0;}
    ~gera(void){}

    void dina(void){dinamizar();}

    void pos (void)
    {

        x = rand()%901;
        y = rand()%501;
        z = rand()%26;
    }
    int burbujas ()
    {
       putimage(x,y,letras[z],0);
       putimage(150,601,erroresimg,0);
       putimage(650,601,puntajeimg,0);
       putimage(350,601,musbethimg,0);

       beth = captura();
       if(beth == 'a' && z == 0)
       {
           c++;
       }
       else if(beth == 'b' && z==1)
       {
           c++;
       }
       else if(beth == 'c' && z==2)
       {
           c++;
       }
       else if(beth == 'd' && z==3)
       {
           c++;
       }
       else if(beth == 'e' && z==4)
       {
           c++;
       }
       else if(beth == 'f' && z==5)
       {
           c++;
       }
       else if(beth == 'g' && z==6)
       {
           c++;
       }
       else if(beth == 'h' && z==7)
       {
           c++;
       }
       else if(beth == 'i' && z==8)
       {
           c++;
       }
       else if(beth == 'j' && z==9)
       {
           c++;
       }
       else if(beth == 'k' && z==10)
       {
           c++;
       }
       else if(beth == 'l' && z==11)
       {
           c++;
       }
       else if(beth == 'm' && z==12)
       {
           c++;
       }
       else if(beth == 'n' && z==13)
       {
           c++;
       }
       else if(beth == 'o' && z==14)
       {
           c++;
       }
       else if(beth == 'p' && z==15)
       {
           c++;
       }
       else if(beth == 'q' && z==16)
       {
           c++;
       }
       else if(beth == 'r' && z==17)
       {
           c++;
       }
       else if(beth == 's' && z==18)
       {
           c++;
       }
       else if(beth == 't' && z==19)
       {
           c++;
       }
       else if(beth == 'u' && z==20)
       {
           c++;
       }
       else if(beth == 'v' && z==21)
       {
           c++;
       }
       else if(beth == 'w' && z==22)
       {
           c++;
       }
       else if(beth == 'x' && z==23)
       {
           c++;
       }
       else if(beth == 'y' && z==24)
       {
           c++;
       }
       else if(beth == 'z' && z==25)
       {
           c++;
       }
       else{malas++;}


       return c;
    }
    void marcador (int a, int b, int c)
    {


            putimage(950,601,numeros[c],0);
            putimage(900,601,numeros[b],0);
            putimage(850,601,numeros[a],0);

    }
    void errores()
    {
        erro = malas;
        o = erro/100;
        p = (erro-(o*100))/10;
        q = (erro-(o*100+p*10))/1;


        putimage(1,601,numeros[o],0);
        putimage(51,601,numeros[p],0);
        putimage(101,601,numeros[q],0);
    }
    void puntaje(int a, int b, int c)
    {
        putimage(400,100,puntajeimg,0);
        putimage(425,200,numeros[a],0);
        putimage(475,200,numeros[b],0);
        putimage(525,200,numeros[c],0);

        putimage(400,400,erroresimg,0);
        putimage(425,500,numeros[o],0);
        putimage(475,500,numeros[p],0);
        putimage(525,500,numeros[q],0);
    }


};
int main()
{ regresa:
    menusi x;
    bot y;
    gera d;
    int a,b,c,o,p,q,l = 0,r = 0, e=0;
srand(time(NULL));

    initwindow(1000,650,"musbeth",200,50);
    setbkcolor(RGB(20,255,255)); cleardevice();
    x.dinamizar();
    d.dina();

    x.imprimirporta();

    while(true)
    {
        y.paso1();
        y.paso3();
        y.paso2();
        y.paso4();
        if(y.accion())
        {
          PlaySound("audio\\cancion.wav",NULL,SND_FILENAME|SND_ASYNC);
        while(true)
        {

            d.pos();
           readimagefile("poo\\lactea.jpg",1,1,1000,600);
            r = d.burbujas();

            a = r/100;
            b = (r-(a*100))/10;
            c = (r-(a*100+b*10))/1;
            d.marcador(a,b,c);
            d.errores();


            e++;
            if(e == 266)
            {
                Sleep(500);
                cleardevice();
                readimagefile("poo\\lactea3.jpg",1,1,1000,700);
                d.puntaje(a,b,c);
                Sleep(5000);
                break;
            }



        }
            goto regresa;


        }
        if(y.accion2())
        {
            break;
        }
    }
    return 0;
}
