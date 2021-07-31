void rush(int x,int y)  //(5,3)
{
    int    yi;
    yi =    0;

    while (yi < y) //loop externo --> linhas             //yi = 0
    {
        int xi = 0;
        while (xi < x) //loop interno --> colunas        // xi = 0
        {
            //se for primeira coluna e (primeira linha ou última linha)
            if(xi == 0 && (yi == 0 || yi == y - 1))               //
            {                                                     // 
                ft_putchar('A');                                  // 
            }                                                     // 
                                                                  // 
            //se for a última coluna e (primeira linha ou última linha)
            else if(xi == x - 1 && (yi == 0 || yi == y - 1))
            {
                ft_putchar('C');
            }
            
            //se for primeira linha ou a última linha ou primeira coluna ou a última coluna
            else if(yi == 0 || yi == y - 1 || xi == 0 || xi == x - 1)
            {
                ft_putchar('B');
            }
            else
            {
                ft_putchar(' ');
            }
            
            xi++;
        }
        yi++;
        ft_putchar('\n');
    }

    /*Estado das variáveis (xi, yi)
        ABBC      (0,0)(0,1)(0,2)(0,3) → loop externo (yi)
        B  B ---> (1,0)(1,1)(1,2)(1,3)
        B  B ---> (2,0)(2,1)(2,2)(2,3)
        ABBC      (3,0)(3,1)(3,2)(3,3)
                    ↓
                loop interno
                    (xi)
    */              

}