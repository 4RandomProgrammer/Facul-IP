
inicio
	Inteiro n1, contador <- 3
      Logico ver <- falso
         Ler n1
             Enquanto contador <= n1 faz
                      Se (contador + (contador - 1) + (contador - 2)) = n1 entao 
                        ver <- verdadeiro
                      Fimse
                      contador <- contador + 1
              Fimenquanto
              Escrever ver
                        
fim
