
inicio
    real custo, pre_fab, lucro, imp, vl,vi
        Ler pre_fab, lucro, imp
         custo <- pre_fab + (pre_fab * (imp/100 + lucro/100))
         vi <- pre_fab * (imp/100)
         vl <- pre_fab * (lucro/100)
        Escrever vl, "\n", vi, "\n", custo
fim
