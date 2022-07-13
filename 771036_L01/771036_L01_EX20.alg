
inicio
	inteiro num, n1 <- 1, n2 <- 1, contador <- 2, novo <- 1,aux
           Ler num
              Se num = 1 ou num = 2 entao 
                 Escrever 1
              Senao
                    Enquanto contador < num faz 
                     aux <- novo                  
                     novo <- n1 + n2
                     n1 <- n2
                     n2 <- novo
                      
                     contador <- contador + 1
                    Fimenquanto 
                  Escrever n2
               Fimse 
           
                     
fim
