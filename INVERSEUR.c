//
//  INVERSEUR.c
//  pointeur
//
//  Created by Grégoire Mariette on 16/09/2018.
//  Copyright © 2018 Grégoire Mariette. All rights reserved.
//

#include <stdio.h>
#include "INVERSEUR.h"

void inverse( int *pta, int *ptb) // fct inverser 2 valeurs.
{
    int temp = 0;
    
    temp = *ptb;
    *ptb = *pta;
    *pta = temp;
} // !!! les variables locals sont detruites à la fin d'un fonction. pointeur necessaire !!!
