class boton
{

public:
int xi,yi,yf,xf;
       
void posicion(int a, int b, int c, int d)
{xi=a;xf=c;yi=b;yf=d;//rectangle(xi,yi,xf,yf);
}

int prueba(void)
{  
    if(mousex()>xi&&mousex()<xf&&mousey()>yi&&mousey()<yf&&ismouseclick(WM_LBUTTONDOWN))
    {clearmouseclick(WM_LBUTTONDOWN);return 1; }
    else if(!mousex()>xi||!mousex()<xf)
    { return 0;}  
}

void estado(char *nom, char *nom2)
{
if(mousex()>xi&&mousex()<xf&&mousey()>yi&&mousey()<yf)
           {readimagefile(nom2,xi,yi,xf,yf);}
           
     else {readimagefile(nom,xi,yi,xf,yf);} 
 
}
};
