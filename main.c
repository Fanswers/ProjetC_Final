#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include "Function.h"
#include "Player.h"
#include "Weapon.h"
#include "Potion.h"

int main()
{
    Personnage Player;
    Personnage Glout;
    Personnage Treant;
    Personnage Ours;
    Personnage Boss;
    Potion Heal;
    Potion Force;
    Potion Def;
    Weapon Dragon;

    InitMonster(&Glout, &Treant, &Ours, &Boss);
    InitPotion(&Heal, &Force, &Def);
    InitWeapon(&Dragon);
    int boucleMenu = 0;
    int error = 0;
    int lancement = Menu(error);
    if (lancement == 1)
    {
        int NewPlayer = NewGame(error);
        if (NewPlayer == 1)
        {
            Archer(&Player);
        } else if (NewPlayer == 2)
        {
            Assassin(&Player);
        } else if (NewPlayer == 3)
        {
            Guerrier(&Player);
        } else if (NewPlayer == 4)
        {
            Mage(&Player);
        } else
        {
            NewPlayer = NewGame(1);
        }
        scenario(&Ours, &Glout, &Treant, &Boss, &Player);
    } else if (lancement == 2)
    {
        SetColor(4);
        printf("Aucune sauvegarde disponible.");
        SetColor(15);
    } else if (lancement == 3)
    {
        Tuto();
        credit(error);
    } else if (lancement == 4)
    {
        exit(0);
    }

}
