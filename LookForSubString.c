
char** ExtraireMots(char chaine[], char sep, int* dim)
{
    int i, j, k, deb, lgmot, lgch;
    char** tab;

    // compter le nb de mots en recherchant leurs premieres lettres
    *dim = 0;
    lgch = (int)strlen(chaine);
    if (!EstDans(chaine[0], sep))	// si le premier caractere n'est pas
        (*dim)++;					// un separateur (est donc une "lettre")
    for (i = 1; i < lgch; i++)
        if (!EstDans(chaine[i], sep) && EstDans(chaine[i - 1], sep))
            (*dim)++;				// si le caractere observe est un non
                                    // separateur precede d'un separateur

    tab = (char**)malloc(*dim * sizeof(char*));
    // allocation du tableau de pointeurs
    if (tab == NULL)
        return NULL;

    i = 0; j = 0;
    while (i < lgch)
    {
        while (i < lgch && EstDans(chaine[i], sep)) i++;
        // on neglige les separateurs
        deb = i;			// indice du debut du mot

        while (i < lgch && !EstDans(chaine[i], sep)) i++;
        // on compte les "lettres"
        lgmot = i - deb;	// longueur du mot
        if (lgmot > 0)
        {
            // printf("%c %d %d\n", chaine[deb], deb, lgmot);
            tab[j] = (char*)malloc((lgmot + 1) * sizeof(char));
            if (!tab[j])	// allocation du mot j
            {
                LibererTableauGrandsEntiers(tab, j);
                return NULL;
            }
            for (k = 0; k < lgmot; k++)		// copie du mot j
                tab[j][k] = chaine[deb + k];
            tab[j][lgmot] = '\0';			// y compris le '\0'
            j++;
        }
    }
    return tab;
}

int EstDans(char chaine[], char carATrouver)
{
    int i;
    for (i = 0; i < strlen(chaine); i++)
    {
        if (chaine[i] == carATrouver)
        {
            return 1;
        }
    }
    return 0;
}

