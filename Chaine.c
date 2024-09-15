//
//  Chaine.c
//  Seance6_chaine
//
//  Created by Grégoire Mariette on 14/08/2019.
//  Copyright © 2019 Grégoire Mariette. All rights reserved.
//

#include "Chaine.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int EstDans(char* a, char* b) {
    
    int z = 0;
    
    if (strcpy(a, b) != NULL) {
        z = 1;
    }
    
    return z;
}


char* MiseenMaj(char* a) {
    
    char* Maj = NULL;
    unsigned long Lg = strlen(Maj);
    
    return Maj;
}


char* SuppChar(char* a, char b) {
    
    char supp[256];
    unsigned long lg = strlen(a);
    int i = 0, k = 0;
    
    for (i; i < lg; i++) {
        if (a[i] != b) {
            supp[i - k] = a[i];
            i++;
        }
        else {
            i++;
            k++;
        }
    }
    
    return supp;
}
