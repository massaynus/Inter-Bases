#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void WlcmMsg(){
    printf("\nC'est une calculatrice des converstions inter-bases Programmer Par:\n");
    printf("Elmassaoudi Yassine...\n\n");
    printf("#################\n");
    printf("# Realiser pour #\n");
    printf("#  t'aider sur  #\n");
    printf("#Les conversions#\n");
    printf("#  Inter-bases  #\n");
    printf("#################\n\n");
}

void ShowResults(int R){
    system("cls");
    printf("Octal\tDecimal\tHexaD\tBinaire\n");
    printf("%o\t%d\t%X\t", R, R, R);
    ToBin(R);
    printf("\n_____________________________\n\n\n");
    Menu();
}

void read(int b){
    
    int Num = 0;
    if(b == 1){
        readBin();
    }else if(b == 2){
        scanf("%o", &Num);
    }else if(b == 3){
        scanf("%d", &Num);
    }else{
        scanf("%x", &Num);
    }

    ShowResults(Num);
}

void Menu(){
    int Choix = 555;
    while(Choix == 555 || Choix > 4){
        printf("Menu principale:\nConvertir de:\n");
        printf("1) Binaire\n");
        printf("2) Octale\n");
        printf("3) Decimale\n");
        printf("4) Hexadecimale\n");
        printf("0) EXIT\n");
        scanf("%d", &Choix);
        switch (Choix)
        {
            case 1: {
                printf("Binaire (0-1): ");
                read(1); 
                break;
            }
            case 2: {
                printf("Octale (0~7): ");
                read(2);
                break;
            }
            case 3: {
                printf("Decimale (0~9): "); 
                read(3);
                break;
            }
            case 4: {
                printf("Hexadecimale (0~F): "); 
                read(4);
                break;
            }
            case 0: printf("thanks!!!"); break;
            default: printf("choisir entre 1-4 SVP!!\n");break;
        }
    }
}

void ToDec(char n[]){
    int B[65];
    int c = 0;
    int R = 0;
    int i = 0;
    while(*(n+i) != '\0'){
        B[i+1] =*(n+i) - '0';
        i++;
    }
    
    for(int i= strlen(n); i>0; i--){
        R += B[i] * pow(2, c);
        c++;
    }

    printBin(R, n);
}

void readBin(){
    char B[64];
    scanf("%s", B);

    ToDec(B);

}

void printBin(int R ,char* T){
    system("cls");
    printf("_____________________________\n");
    printf("Octal\tDecimal\tHexaD\tBinaire\n");
    printf("%o\t%d\t%X\t", R, R, R);

    
    printf("%s\n", T);
    
    printf("_____________________________\n\n\n");
    Menu();
}

void ToBin(int N){
    int i = 0, k=0;
    int b[64];

    for( i = 0; N != 0; i++)
    {
        b[i] = N % 2;
        N/=2;
    }

    for(k = 0; k < i; k++)
    {
        printf("%d", b[i-1-k]);
    }
}