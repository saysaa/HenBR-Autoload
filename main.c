#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void hud() {
    system("title HenBR-Autoload");
    printf("HenBR-Autoload - Alpha v0.1.0\n");
    printf("-------------------------------\n");
    //Version PS4 exploit
    printf("1. >> Lapse Exploit ( Firmware 9.00 - 12.02 )\n");
    printf("2. >> GoldHEN AUTO-LOADER | LAPSE + POOPS (A.I.O) Deluxe ( Firmware 9.00 - 12.52 )\n");
    printf("3. >> HenLoader LP Lapse (9.00-12.02) + Poops (9.00-12.52)\n");
}

int exploit_ver = 0;
char command [80];

void python_open() {
    printf("Install/Reinstall requests, please wait...\n");
    system("pip install requests");
    sprintf(command, "start get_exploit.py %d", exploit_ver);
    system(command);
}
int main()
{
    hud();
    while (1) {
        printf(">> ");
        scanf("%d", &exploit_ver);

        if (exploit_ver == 1) {
            printf("debug: Lapse exploit <- Selected !!\n");
            system("cls");
            python_open();
            break;
        } if (exploit_ver == 2) {
            printf("debug: GoldHEN AUTO-LOAD <- Selected !!\n");
            python_open();
            break;
        } if (exploit_ver == 3) {
            printf("debug: HenLoader LP Lapse (9.00-12.02) + Poops (9.00-12.52) <- Selected !!\n");
            python_open();
            break;
        } else {
            printf("Invalid option\n");
        }
    }
    return 0;
}
