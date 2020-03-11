typedef struct Personnage Personnage;


struct Personnage{
    int pv;
    int lvl;
    int xp;
    int xpCap;
    int force;
    int defense;
    char name[50];
    char classe[20];
};
