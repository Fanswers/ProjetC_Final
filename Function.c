#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include "Player.h"
#include "Weapon.h"
#include "Potion.h"

void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
                 //Mask out all but the background attribute, and add in the forgournd color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
 }

int errorFunction()
{
    SetColor(4);
    printf("Veuillez faire un choix valide\n");
    SetColor(15);
    return;
}

void credit(error)
{
SetColor(2);
printf("   .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.    \n");
printf(" .'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `.  \n");
printf("(    .     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .    ) \n");
printf(" `.   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                           ");
SetColor(5);
printf("Credit :");
SetColor(2);
printf("                                                      .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                         ");
SetColor(5);
printf("LARRODE Alexis       ");
SetColor(2);
printf("                                               )    ) \n");
printf(" `.   `.                                       ");
SetColor(5);
printf("CRUZ Julien          ");
SetColor(2);
printf("                                             .'   .'  \n");
printf("   )    )                                           ");
printf("                                                            (    (    \n");
printf(" ,'   ,'                                           ");
printf("                                                              `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )       _       _       _       _       _       _       _       _       _       _       _       _       (    (    \n");
printf(" ,'   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   `.  \n");
printf("(    '  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `    )  \n");
printf(" `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .'   \n");
printf("   `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     \n");
SetColor(15);

    if (error == 1)
        errorFunction();

    char choiceCred = "3";
    scanf("%s", &choiceCred);
    if (choiceCred != '3')
    {
        Menu(0);
    }
    else
        credit(1);
}

void ornementMenu()
{
SetColor(2);
printf("   .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.    \n");
printf(" .'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `.  \n");
printf("(    .     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .    ) \n");
printf(" `.   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                      ");
SetColor(15);
printf("Bienvenue dans Bob in the forest IV");
SetColor(2);
printf("                                .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                    ");
SetColor(15);
printf("1-Commencer une partie");
SetColor(2);
printf("                                                   )    ) \n");
printf(" `.   `.                                  ");
SetColor(15);
printf("2-Charger une partie");
SetColor(2);
printf("                                                   .'   .'  \n");
printf("   )    )                                 ");
SetColor(15);
printf("3-A propos");
SetColor(2);
printf("                                                            (    (    \n");
printf(" ,'   ,'                                  ");
SetColor(15);
printf("4-Quitter");
SetColor(2);
printf("                                                              `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )       _       _       _       _       _       _       _       _       _       _       _       _       (    (    \n");
printf(" ,'   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   `.  \n");
printf("(    '  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `    )  \n");
printf(" `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .'   \n");
printf("   `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     \n");
SetColor(15);

}

void ornementPersonnage()
{
    SetColor(2);
printf("   .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.    \n");
printf(" .'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `.  \n");
printf("(    .     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .    ) \n");
printf(" `.   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                      ");
SetColor(15);
printf("Veuillez choisir une classe");
SetColor(2);
printf("                                        .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                    ");
SetColor(15);
printf("1-Archer");
SetColor(2);
printf("                                                                 )    ) \n");
printf(" `.   `.                                  ");
SetColor(15);
printf("2-Assassin");
SetColor(2);
printf("                                                             .'   .'  \n");
printf("   )    )                                 ");
SetColor(15);
printf("3-Guerrier");
SetColor(2);
printf("                                                            (    (    \n");
printf(" ,'   ,'                                  ");
SetColor(15);
printf("4-Mage");
SetColor(2);
printf("                                                                  `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )                                                                                                       (    (    \n");
printf(" ,'   ,'                                                                                                         `.   `.  \n");
printf("(    (                                                                                                             )    ) \n");
printf(" `.   `.                                                                                                         .'   .'  \n");
printf("   )    )       _       _       _       _       _       _       _       _       _       _       _       _       (    (    \n");
printf(" ,'   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   `.  \n");
printf("(    '  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `    )  \n");
printf(" `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .'   \n");
printf("   `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     \n");
SetColor(15);

}

void Gloub()
{
    SetColor(1);
    printf("           /\\            \n");
    printf("          /  \\           \n");
    printf("         /    \\          \n");
    printf("        / 0  0 \\         \n");
    printf("       /   _    \\        \n");
    printf("      (__________)       \n");
    SetColor(15);
}

void GloubZoubi()
{
    SetColor(1);
    printf("           /\\            \n");
    printf("          /  \\           \n");
    printf("         /    \\          \n");
    printf("        / 0  0 \\         \n");
    printf("       /   ");
    SetColor(4);
    printf(" 3");
    SetColor(1);
    printf("   \\        \n");
    printf("      (__________)       \n");
    SetColor(15);
}

int Menu(error)
{
    char choiceMenu;
    int choix = 0;

    ornementMenu();

    if (error == 1)
        errorFunction();


    scanf("%s",&choiceMenu);
    if (choiceMenu == '1')
    {
        choix = 1;
    } else if (choiceMenu == '2')
    {
        choix = 2;
    } else if (choiceMenu == '3')
    {
        choix = 3;
    } else if (choiceMenu == '4')
    {
        choix = 4;
    } else {
        Menu(1);
    }

    return choix;
}

void Tuto()
{
    //////Tutoriel scripte//////
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(1);
    printf("Un Gloub vous fonce dessus !\n");
    printf("Que voulez-vous faire ? \n");
    SetColor(15);
    printf("1-Attaquer \n");
    SetColor(8);
    printf("2-Utiliser un objet \n3-Fuir \n");
    SetColor(1);
    printf("Vous avez 40/40 points de vie. \n");
    SetColor(14);
    printf("Utilisez une attaque.\n");
    SetColor(15);
    char choice;
    scanf("%s",&choice);
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(1);
    while (choice != '1')
    {
        printf("Un Gloub vous fonce dessus !\n");
        SetColor(1);
        printf("Que voulez-vous faire ? \n");
        SetColor(15);
        printf("1-Attaquer \n");
        SetColor(8);
        printf("2-Utiliser un objet \n3-Fuir \n");
        SetColor(1);
        printf("Vous avez 40/40 points de vie. \n");
        SetColor(14);
        printf("Utilisez une attaque. \n");
        SetColor(15);
        scanf("%s",&choice);
        SetColor(2);
        printf("----------------------------------------------------------------------------------------------------------------------------\n");
        SetColor(1);
    }
    SetColor(1);
    printf("Quelle competence voulez-vous utiliser ?\n");
    SetColor(15);
    printf("1-Attaque simple\n");
    SetColor(8);
    printf("2-Brise Armure\n");
    SetColor(14);
    printf("Utilisez attaque simple.\n");
    SetColor(15);
    scanf("%s",&choice);
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(1);
    while (choice != '1')
    {
        SetColor(1);
        printf("Quelle competence voulez-vous utiliser ?\n");
        SetColor(15);
        printf("1-Attaque simple\n");
        SetColor(8);
        printf("2-Brise Armure\n");
        SetColor(14);
        printf("Utilisez attaque simple.\n");
        SetColor(15);
        scanf("%s",&choice);
        SetColor(2);
        printf("----------------------------------------------------------------------------------------------------------------------------\n");
        SetColor(1);
    }
    printf("Vous attaquez le Gloub !\nIl recoit 10 points de degats.\n");
    SetColor(4);
    printf("Le gloub vous attaque !\nCOUP CRITIQUE !\nVous recevez 30 point de degats\n");
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(1);
    printf("Que voulez-vous faire ? \n");
    SetColor(8);
    printf("1-Attaquer \n");
    SetColor(15);
    printf("2-Utiliser un objet \n");
    SetColor(8);
    printf("3-Fuir \n");
    SetColor(1);
    printf("Vous avez 10/40 points de vie. \n");
    SetColor(14);
    printf("Utilisez un objet.\n");
    SetColor(15);
    scanf("%s",&choice);
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(1);
    while (choice != '2')
    {
        SetColor(1);
        printf("Que voulez-vous faire ? \n");
        SetColor(8);
        printf("1-Attaquer \n");
        SetColor(15);
        printf("2-Utiliser un objet \n");
        SetColor(8);
        printf("3-Fuir \n");
        SetColor(1);
        printf("Vous avez 10/40 points de vie. \n");
        SetColor(14);
        printf("Utilisez un objet.\n");
        SetColor(15);
        scanf("%s",&choice);
        SetColor(2);
        printf("----------------------------------------------------------------------------------------------------------------------------\n");
        SetColor(1);
    }
    SetColor(1);
    printf("Quelle potion voulez-vous utiliser ?\n");
    SetColor(15);
    printf("1-Potion de soin : 1\n");
    SetColor(8);
    printf("2-Potion d'armure : 0\n3-Potion de force : 1\n");
    SetColor(14);
    printf("Utilisez une potion de soin.\n");
    SetColor(15);
    scanf("%s",&choice);
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(1);
    while (choice != '1')
    {
        SetColor(1);
        printf("Quelle potion voulez-vous utiliser ?\n");
        SetColor(15);
        printf("1-Potion de soin : 1\n");
        SetColor(8);
        printf("2-Potion d'armure : 0\n3-Potion de force : 1\n");
        SetColor(14);
        printf("Utilisez une potion de soin.\n");
        SetColor(15);
        scanf("%s",&choice);
        SetColor(2);
        printf("----------------------------------------------------------------------------------------------------------------------------\n");
        SetColor(1);
    }
    printf("Vous utilisez une potion de soin !\nVous recuperez 20 points de vie.\n");
    SetColor(4);
    printf("Le gloub vous attaque !\nVous recevez 15 point de degats.\n");
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(1);
    printf("Que voulez-vous faire ? \n");
    SetColor(15);
    printf("1-Attaquer \n");
    SetColor(8);
    printf("2-Utiliser un objet \n3-Fuir \n");
    SetColor(1);
    printf("Vous avez 40/40 points de vie. \n");
    SetColor(14);
    printf("Utilisez une attaque pour l'achever.\n");
    SetColor(15);
    scanf("%s",&choice);
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(1);
    while (choice != '1')
    {
        SetColor(1);
        printf("Que voulez-vous faire ? \n");
        SetColor(15);
        printf("1-Attaquer \n");
        SetColor(8);
        printf("2-Utiliser un objet \n3-Fuir \n");
        SetColor(1);
        printf("Vous avez 40/40 points de vie. \n");
        SetColor(14);
        printf("Utilisez une attaque pour l'achever.\n");
        SetColor(15);
        scanf("%s",&choice);
        SetColor(2);
        printf("----------------------------------------------------------------------------------------------------------------------------\n");
        SetColor(1);
    }
    printf("Vous attaquez le Gloub !\nCOUP CRITIQUE !\nIl recoit 20 points de degats.\n");
    SetColor(14);
    printf("Le gloub est mort.\nFelicitation ! vous avez remporte le combat !\n");
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
}

void Guerrier(Personnage *Player)
{
    (*Player).force = 10;
    (*Player).pv = 60;
    (*Player).defense = 15;
    (*Player).lvl = 1;
    (*Player).xp = 0;
    (*Player).xpCap = 50;
    (*Player).classe[0] = 'G';
    (*Player).classe[1] = 'u';
    (*Player).classe[2] = 'e';
    (*Player).classe[3] = 'r';
    (*Player).classe[4] = 'r';
    (*Player).classe[5] = 'i';
    (*Player).classe[6] = 'e';
    (*Player).classe[7] = 'r';
    (*Player).classe[8] = '\0';

    SetColor(1);
    printf("Comment vous appelez vous ? \n");
    SetColor(15);
    scanf("%s", (*Player).name);
    SetColor(1);
    printf("Bonjour");
    printf(" %s ", (*Player).name);
    printf("vous etes desormais un %s ! \n", (*Player).classe);
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(15);
}

void Archer(Personnage *Player)
{
    (*Player).force = 20;
    (*Player).pv = 50;
    (*Player).defense = 10;
    (*Player).lvl = 1;
    (*Player).xp = 0;
    (*Player).xpCap = 50;
    (*Player).classe[0] = 'A';
    (*Player).classe[1] = 'r';
    (*Player).classe[2] = 'c';
    (*Player).classe[3] = 'h';
    (*Player).classe[4] = 'e';
    (*Player).classe[5] = 'r';
    (*Player).classe[6] = '\0';

    SetColor(1);
    printf("Comment vous appelez vous ? \n");
    SetColor(15);
    scanf("%s", (*Player).name);
    SetColor(1);
    printf("Bonjour");
    printf(" %s ", (*Player).name);
    printf("vous etes desormais un %s ! \n", (*Player).classe);
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(15);
}

void Mage(Personnage *Player)
{
    (*Player).force = 20;
    (*Player).pv = 50;
    (*Player).defense = 10;
    (*Player).lvl = 1;
    (*Player).xp = 0;
    (*Player).xpCap = 50;
    (*Player).classe[0] = 'M';
    (*Player).classe[1] = 'a';
    (*Player).classe[2] = 'g';
    (*Player).classe[3] = 'e';
    (*Player).classe[4] = '\0';

    SetColor(1);
    printf("Comment vous appelez vous ? \n");
    SetColor(15);
    scanf("%s", (*Player).name);
    SetColor(1);
    printf("Bonjour");
    printf(" %s ", (*Player).name);
    printf("vous etes desormais un %s ! \n", (*Player).classe);
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(15);
}

void Assassin(Personnage *Player)
{
    (*Player).force = 25;
    (*Player).pv = 40;
    (*Player).defense = 10;
    (*Player).lvl = 1;
    (*Player).xp = 0;
    (*Player).xpCap = 50;
    (*Player).classe[0] = 'A';
    (*Player).classe[1] = 's';
    (*Player).classe[2] = 's';
    (*Player).classe[3] = 'a';
    (*Player).classe[4] = 's';
    (*Player).classe[5] = 's';
    (*Player).classe[6] = 'i';
    (*Player).classe[7] = 'n';
    (*Player).classe[8] = '\0';

    SetColor(1);
    printf("Comment vous appelez vous ? \n");
    SetColor(15);
    scanf("%s", (*Player).name);
    SetColor(1);
    printf("Bonjour");
    printf(" %s ", (*Player).name);
    printf("vous etes desormais un %s ! \n", (*Player).classe);
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(15);
}

int NewGame(error)
{
    ornementPersonnage();

    int choix = 0;
    if (error == 1)
    errorFunction();

    char choicePerso;
    scanf("%s",&choicePerso);

    if (choicePerso == '1')
    {
        choix = 1;
    }
    else if (choicePerso == '2')
    {
        choix = 2;
    }
    else if (choicePerso == '3')
    {
        choix = 3;
    }
    else if (choicePerso == '4')
    {
        choix = 4;
    }
    else
    {
        NewGame(1);
    }
    return choix;
}

void quit(error)
{
    int choiceMenu = 0;

    if (error == 1)
        errorFunction();

    printf("Etes vous sur de vouloir quitter ?\n\n1-Oui\n2-Non\n");
    scanf("%d", &choiceMenu);

    if (choiceMenu != 1 && choiceMenu != 2)
        quit(1);
    else
    {
        if (choiceMenu == 1)
            return 0;
        else if (choiceMenu == 2)
            Menu(0);
    }
}

void scenario(Personnage *Ours, Personnage *Glout, Personnage *Treant, Personnage *Boss, Personnage *Player)
{
    printf("J'etais en train de couper du bois au bord de la foret. \nMa tete me fait mal. \nDu sang ? \nQuelque chose a du m'attaquer, il faut que je sorte de cette foret. \n");
    SetColor(1);
    printf("Vous avez encore votre arme sur vous.\n");
    SetColor(15);
    map(Ours, Glout, Treant, Boss, Player);
}

void map(Personnage *Ours, Personnage *Glout, Personnage *Treant, Personnage *Boss, Personnage *Player)
{
    int inv[10];
    inv[1] = 1;
    inv[2] = 0;
    inv[3] = 0;

    int map[5][5];
    int playerI = 4;
    int playerJ = 2;

    int combatCount[4];
    combatCount[0] = 0;
    combatCount[1] = 0;
    combatCount[2] = 0;
    combatCount[3] = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            map[i][j] = 0;
        }
    }
    map[1][2] = 2;
    map[1][4] = 2;
    map[2][0] = 2;
    map[2][1] = 3;
    map[3][2] = 2;
    map[3][4] = 3;
    map[playerI][playerJ] = 1;
    playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
}

int playerMove(int playerI, int playerJ, int map[5][5], int inv[10], Personnage *Ours, Personnage *Glout, Personnage *Treant, Personnage *Boss, Personnage *Player, int combatCount[4])
{
    int choiceMenu = 0;
    SetColor(11);
    printf("~~ MAP ~~\n\n");
    SetColor(15);
    for (int i = 0; i < 5; i ++){
        for (int j = 0; j < 5; j++){
            if (map[i][j] == 1){
                SetColor(11);
                printf("J");
                SetColor(15);
            }
            else if (map[i][j] == 2){
                SetColor(4);
                printf("?");
                SetColor(15);
            }
            else if (map[i][j] == 3){
                SetColor(2);
                printf("?");
                SetColor(15);
            }
            else {
                SetColor(0);
                printf("%d", map[i][j]);
            SetColor(15);
            }
        }
        printf("\n");
    }
    printf("________________________________________________________________________________\nDans quelle direction souhaitez vous aller ?\n1-Nord\n2-Sud\n3-Est\n4-Ouest\n");
    scanf("%d", &choiceMenu);
    if (choiceMenu == 1 && playerI > 0){
        map[playerI][playerJ] = 0;
        playerI--;
        map[playerI][playerJ] = 1;
        mapCase(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (choiceMenu == 2 && playerI < 4){
        map[playerI][playerJ] = 0;
        playerI++;
        map[playerI][playerJ] = 1;
        mapCase(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (choiceMenu == 3 && playerJ < 4){
        map[playerI][playerJ] = 0;
        playerJ++;
        map[playerI][playerJ] = 1;
        mapCase(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (choiceMenu == 4 && playerJ > 0){
        map[playerI][playerJ] = 0;
        playerJ--;
        map[playerI][playerJ] = 1;
        mapCase(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else {
        errorFunction();
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
}

void combat(Personnage *Monstre, Personnage *Player, int inv[10])
{
    SetColor(2);
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    SetColor(1);
    printf("Un monstre vous attaque ! C'est un %s de niveau %d ! \n", (*Monstre).name, (*Monstre).lvl);
    SetColor(15);
    int Life = 0;
    int PointDeVie = (*Player).pv;
    int PointDeForce = (*Player).force;
    int PointDeDefense = (*Player).defense;
    char choiceCbt;
    char choiceAtk;
    char choicePot;
    int i = 0;
    while (Life == 0)
    {
        SetColor(1);
        printf("Que voulez-vous faire ? \n");
        SetColor(15);
        printf("1-Attaquer \n2-Utiliser un objet \n3-Fuir \n");
        SetColor(1);
        printf("Vous avez %d/%d points de vie. \n", (*Player).pv, PointDeVie);
        SetColor(15);
        int BoucleAtk = 0;
        while (BoucleAtk != 1)
        {
            scanf("%s",&choiceCbt);
            SetColor(2);
            printf("----------------------------------------------------------------------------------------------------------------------------\n");
            if (choiceCbt == '1')
            {
                SetColor(1);
                printf("Quelle competence voulez-vous utiliser ?\n");
                SetColor(15);
                printf("1-Attaque simple\n2-Brise Armure\n3-Jet de boue\n4-Retour\n");
                scanf("%s",&choiceAtk);
                if (choiceAtk == '1')
                {
                    int degatsP = (*Player).force - (*Monstre).defense;
                    SetColor(1);
                    printf("Vous attaquez avec votre arme !\n");
                    (*Monstre).pv = (*Monstre).pv - degatsP;
                    printf("Le monstre recoit %d points de degats.\n", degatsP);
                    BoucleAtk = 1;
                } else if (choiceAtk == '2') {
                    int degatsP = ((*Player).force - (*Monstre).defense)/2;
                    SetColor(1);
                    printf("Vous attaquez avec votre arme en visant les points faibles !\n");
                    (*Monstre).pv = (*Monstre).pv - degatsP;
                    (*Monstre).defense -= 5;
                    printf("Le monstre recoit %d points de degats et sa defense baisse.\n", degatsP);
                    BoucleAtk = 1;
                } else if (choiceAtk == '3') {
                    int degatsP = ((*Player).force - (*Monstre).defense)/2;
                    SetColor(1);
                    printf("Vous attaquez avec votre arme en visant les points faibles !\n");
                    (*Monstre).pv = (*Monstre).pv - degatsP;
                    (*Monstre).force -= 5;
                    printf("Le monstre recoit %d points de degats et sa defense baisse.\n", degatsP);
                    BoucleAtk = 1;
                } else if (choiceAtk == '4')
                {
                    break;
                }
            } else if (choiceCbt == '2')
            {
                SetColor(1);
                printf("Quelle potion voulez-vous utiliser ?\n");
                SetColor(15);
                printf("1-Potion de heal : %d\n2-Potion d'armure : %d\n3-Potion de force : %d\n4-Retour\n",inv[1], inv[2], inv[3]);
                scanf("%s",&choicePot);
                if (choicePot == '1') {
                    if (inv[1] > 0){
                        inv[1]--;
                        SetColor(1);
                        printf("Vous utilisez une potion de soin !\n");
                        SetColor(15);
                        (*Player).pv += 20;
                        if ((*Player).pv > PointDeVie)
                            (*Player).pv = PointDeVie;
                        BoucleAtk = 1;
                    }
                    else {
                        SetColor(4);
                        printf("Vous n'avez pas l'objet\n");
                        SetColor(2);
                        printf("----------------------------------------------------------------------------------------------------------------------------\n");
                        SetColor(15);
                        break;
                    }
                } else if (choicePot == '2')
                {
                    if (inv[2] > 0){
                        inv[2]--;
                        SetColor(1);
                        printf("Vous utilisez une potion d'armure !\n");
                        SetColor(15);
                        (*Player).defense += 5;
                        BoucleAtk = 1;
                    }
                    else {
                        SetColor(4);
                        printf("Vous n'avez pas l'objet\n");
                        SetColor(2);
                        printf("----------------------------------------------------------------------------------------------------------------------------\n");
                        SetColor(15);
                        break;
                    }
                } else if (choicePot == '3')
                {
                    if (inv[3] > 0){
                        inv[3]--;
                        SetColor(1);
                        printf("Vous utilisez une potion de force !\n");
                        SetColor(15);
                        (*Player).force += 5;
                        BoucleAtk = 1;
                    }
                    else {
                        SetColor(4);
                        printf("Vous n'avez pas l'objet\n");
                        SetColor(2);
                        printf("----------------------------------------------------------------------------------------------------------------------------\n");
                        SetColor(15);
                        break;
                    }
                } else if (choicePot == '4')
                {
                    break;
                }
            } else if (choiceCbt == '3')
            {
                Life = 3;
                break;
            } else
            {
                SetColor(4);
                printf("Veuillez faire un choix valide\n");
                SetColor(15);
            }
        }
        if (BoucleAtk == 1)
        {
            int degatsM = (*Monstre).force - (*Player).defense;
            SetColor(4);
            printf("Le monstre vous attaque !\n");
            (*Player).pv = (*Player).pv - degatsM;
            printf("Vous recevez %d points de degats\n", degatsM);
            SetColor(2);
            printf("----------------------------------------------------------------------------------------------------------------------------\n");
            if ((*Monstre).pv <= 0)
            {
                Life = 1;
                (*Player).pv = PointDeVie;
                (*Player).force = PointDeForce;
                (*Player).defense = PointDeDefense;
                SetColor(1);
                printf("Bravo ! Vous avez vaincu un %s !\n", (*Monstre).name);
                printf("Vous avez gagne %d points d'experience. \n", (*Monstre).xp);
                (*Player).xp += (*Monstre).xp;
                if ((*Player).xp > (*Player).xpCap)
                {
                    (*Player).xp = (*Player).xp - (*Player).xpCap;
                    (*Player).lvl += 1;
                    SetColor(14);
                    printf("Felicitation vous avez gagne 1 niveau ! Vous etes desormais niveau %d ! Vos caracteristiques augmentent. \n", (*Player).lvl);
                    (*Player).pv += 5;
                    (*Player).force += 3;
                    (*Player).defense += 3;
                    (*Player).xpCap *= 1.25;
                    SetColor(2);
                    printf("----------------------------------------------------------------------------------------------------------------------------\n");
                    SetColor(15);
                }
            }
        }
        if ((*Player).pv <= 0)
        {
            Life = 2;
        }
    }
    if(Life == 2){
        SetColor(4);
        printf("Vous avez perdu le combat. Vous etes mort\n");
        Menu();
        SetColor(15);
    }
    else if(Life == 3){
        SetColor(1);
        printf("Vous avez fuis le combat.\n");
        SetColor(15);
    }
}

void InitMonster(Personnage *Monstre1, Personnage *Monstre2, Personnage *Monstre3, Personnage *Boss)
{
    (*Monstre1).force = 20;
    (*Monstre1).pv = 25;
    (*Monstre1).defense = 5;
    (*Monstre1).lvl = 1;
    (*Monstre1).xp = 51;
    (*Monstre1).name[0] ='G';
    (*Monstre1).name[1] ='l';
    (*Monstre1).name[2] ='o';
    (*Monstre1).name[3] ='u';
    (*Monstre1).name[4] ='t';
    (*Monstre1).name[5] ='\0';

    (*Monstre2).force = 25;
    (*Monstre2).pv = 35;
    (*Monstre2).defense = 10;
    (*Monstre2).lvl = 2;
    (*Monstre2).xp = 101;
    (*Monstre2).name[0] = 'T';
    (*Monstre2).name[1] = 'r';
    (*Monstre2).name[2] = 'e';
    (*Monstre2).name[3] = 'a';
    (*Monstre2).name[4] = 'n';
    (*Monstre2).name[5] = 't';
    (*Monstre2).name[6] = '\0';

    (*Monstre3).force = 30;
    (*Monstre3).pv = 40;
    (*Monstre3).defense = 15;
    (*Monstre3).lvl = 3;
    (*Monstre3).xp = 151;
    (*Monstre3).name[0] = 'O';
    (*Monstre3).name[1] = 'u';
    (*Monstre3).name[2] = 'r';
    (*Monstre3).name[3] = 's';
    (*Monstre3).name[4] = '\0';

    (*Boss).force = 35;
    (*Boss).pv = 60;
    (*Boss).defense = 30;
    (*Boss).lvl = 5;
    (*Boss).xp = 301;
    (*Boss).name[0] = 'C';
    (*Boss).name[1] = 'e';
    (*Boss).name[2] = 'n';
    (*Boss).name[3] = 't';
    (*Boss).name[4] = 'a';
    (*Boss).name[5] = 'u';
    (*Boss).name[6] = 'r';
    (*Boss).name[7] = 'e';
    (*Boss).name[8] = '\0';
}

void InitPotion(Potion *Heal, Potion *Atk, Potion *Def)
{
    (*Heal).pv = 20;
    (*Heal).name[0] = 'P';
    (*Heal).name[1] = 'o';
    (*Heal).name[2] = 't';
    (*Heal).name[3] = 'i';
    (*Heal).name[4] = 'o';
    (*Heal).name[5] = 'n';
    (*Heal).name[6] = ' ';
    (*Heal).name[7] = 'd';
    (*Heal).name[8] = 'e';
    (*Heal).name[9] = ' ';
    (*Heal).name[10] = 's';
    (*Heal).name[11] = 'o';
    (*Heal).name[12] = 'i';
    (*Heal).name[13] = 'n';
    (*Heal).name[14] = '\0';

    (*Atk).force = 10;
    (*Atk).name[0] = 'P';
    (*Atk).name[1] = 'o';
    (*Atk).name[2] = 't';
    (*Atk).name[3] = 'i';
    (*Atk).name[4] = 'o';
    (*Atk).name[5] = 'n';
    (*Atk).name[6] = ' ';
    (*Atk).name[7] = 'd';
    (*Atk).name[8] = 'e';
    (*Atk).name[9] = ' ';
    (*Atk).name[10] = 'f';
    (*Atk).name[11] = 'o';
    (*Atk).name[12] = 'r';
    (*Atk).name[13] = 'c';
    (*Atk).name[14] = 'e';
    (*Atk).name[15] = '\0';

    (*Def).defense = 5;
    (*Def).name[0] = 'P';
    (*Def).name[1] = 'o';
    (*Def).name[2] = 't';
    (*Def).name[3] = 'i';
    (*Def).name[4] = 'o';
    (*Def).name[5] = 'n';
    (*Def).name[6] = ' ';
    (*Def).name[7] = 'd';
    (*Def).name[8] = 'e';
    (*Def).name[9] = ' ';
    (*Def).name[10] = 'd';
    (*Def).name[11] = 'e';
    (*Def).name[12] = 'f';
    (*Def).name[13] = 'e';
    (*Def).name[14] = 'n';
    (*Def).name[15] = 's';
    (*Def).name[16] = 'e';
    (*Def).name[17] = '\0';
}

void InitWeapon(Weapon *Dragon)
{
    (*Dragon).force = 20;
    (*Dragon).defense = 5;
    (*Dragon).pv = 10;
    (*Dragon).name[0] = 'E';
    (*Dragon).name[1] = 'p';
    (*Dragon).name[2] = 'e';
    (*Dragon).name[3] = 'e';
    (*Dragon).name[4] = ' ';
    (*Dragon).name[5] = 'd';
    (*Dragon).name[6] = 'u';
    (*Dragon).name[7] = ' ';
    (*Dragon).name[8] = 'd';
    (*Dragon).name[9] = 'r';
    (*Dragon).name[10] = 'a';
    (*Dragon).name[11] = 'g';
    (*Dragon).name[12] = 'o';
    (*Dragon).name[13] = 'n';
    (*Dragon).name[14] = '\0';
}

int mapCase(int playerI, int playerJ, int map[5][5], int inv[10], Personnage *Ours, Personnage *Glout, Personnage *Treant, Personnage *Boss, Personnage *Player, int combatCount[4])
{

    //premi�re ligne de case
    if (playerI == 0 && playerJ == 0){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 0 && playerJ == 1){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 0 && playerJ == 2){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 0 && playerJ == 3){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 0 && playerJ == 4){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    //seconde
    else if (playerI == 1 && playerJ == 0){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 1 && playerJ == 1){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 1 && playerJ == 2){
        if (combatCount[2] == 0){
            combatCount[2] = 1;
            combat(Ours, Player, inv);
            playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
        }
        else
            playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 1 && playerJ == 3){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 1 && playerJ == 4){
        if (combatCount[3] == 0){
            combatCount[3] = 1;
            combat(Boss, Player, inv);
            SetColor(2);
            printf("~~~ FELICITATION!!! ~~~\n\n Vous avez terminez le jeu !");
        }
    }
    //troisi�me
    else if (playerI == 2 && playerJ == 0){
        if (combatCount[1] == 0){
            combatCount[1] = 1;
            combat(Treant, Player, inv);
            playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
        }
        else
            playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 2 && playerJ == 1){
        SetColor(2);
        printf("Vous avez ramassé une potion d'armure !\n");
        SetColor(15);
        inv[2]++;
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 2 && playerJ == 2){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 2 && playerJ == 3){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 2 && playerJ == 4){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    //quatri�me
    else if (playerI == 3 && playerJ == 0){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 3 && playerJ == 1){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 3 && playerJ == 2){
        if (combatCount[0] == 0){
            combatCount[0] = 1;
            combat(Glout, Player, inv);
            SetColor(2);
            printf("Vous ramassez une potion de force !\n");
            SetColor(15);
            inv[3]++;
            playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
        }
        else
            playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);

    }
    else if (playerI == 3 && playerJ == 3){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 3 && playerJ == 4){
        SetColor(2);
        printf("Vous avez ramasse une potion d'armure + une potion de soin !\n");
        SetColor(15);
        inv[1]++;
        inv[2]++;
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    //cinqui�me
    else if (playerI == 4 && playerJ == 0){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 4 && playerJ == 1){
        int caseIndicator = 0;
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 4 && playerJ == 2){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 4 && playerJ == 3){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
    else if (playerI == 4 && playerJ == 4){
        playerMove(playerI, playerJ, map, inv, Ours, Glout, Treant, Boss, Player, combatCount);
    }
}
