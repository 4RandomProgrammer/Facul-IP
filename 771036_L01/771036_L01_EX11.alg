
inicio
	real vsal,qkw,v1kw,vconta,vdesc
        Ler vsal, qkw
         v1kw <- vsal / 5
         vconta <- qkw * v1kw
         vdesc <- 0.85 * vconta
        Escrever v1kw, "\n",vconta,"\n", vdesc
        
fim
