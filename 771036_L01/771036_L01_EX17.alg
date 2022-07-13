
inicio
	inteiro n, k, c1, c2, f1, f2, res, nek, f3, c3
              f1 <- 1
              f2 <- 1
              f3 <- 1
       Ler n, k
       nek <- n - k
        Para c1 de n ate 1 passo -1
            f1 <- f1 * c1
        Proximo
          Para c2 de k ate 1 passo -1
            f2 <- f2 * c2
          Proximo
           Para c3 de nek ate 1 passo -1
            f3 <- f3 * c3
            Proximo 
         
              res <- f1 / f2 * f3
       Escrever res
    
      
fim
