#include<stdio.h>
#include<conio.h>
void main()
{
    char prompt;
    int alur_chap=0,
    beguni=0,fuluri=0,
    peaji=0,egg_debil=0,
    sandoich=0,cachuri=0,vegetable=0;
    printf("\n********Bangla chaper dokan********");
    printf("\nAlur chap-Rs 5\nBeguni-Rs 6\nfuluri-Rs 5\npeaji-Rs 6\negg debil-Rs 15\nsandoich-Rs 8\nkachuri-Rs 5\nvegetable chap-rs 7 ");
    do{
        printf("\n enter A (alur chap),B(beguni),F(fuluri),P(peaji),D(egg debil),S(sandoich),k(kachuri),v(vegetable chap),C(Cancel)");
        scanf(" %c",&prompt);
        switch(prompt)
        {
        case'a':
        case'A': alur_chap++;
                 break;
        case'b':
        case'B': beguni++;
                 break;
        case'f':
        case'F': fuluri++;
                 break;
        case'p':
        case'P': peaji++;
                 break;
        case'd':
        case'D': egg_debil++;
                 break;
        case's':
        case'S': sandoich++;
                 break;
        case'k':
        case'K': cachuri++;
                 break;
        case'v':
        case'V':vegetable++;
                 break;
        case'\n':
        case'c':
        case'C': break;
        default:
            printf("\n enter a valid choice!");
            break;
        }

    }while(!((prompt=='c')||(prompt=='C')));
    printf("\n total sell:");
    printf("\n alur chap=%dx5=%d",alur_chap,alur_chap*5);
    printf("\n beguni=%dx6=%d",beguni,beguni*6);
    printf("\n fuluri=%dx5=%d",fuluri,fuluri*5);
    printf("\n peaji=%dx6=%d",peaji,peaji*6);
    printf("\n egg debil=%dx10=%d",egg_debil,egg_debil*15);
    printf("\n sandoich=%dx8=%d",sandoich,sandoich*8);
    printf("\n kachru=%dx5=%d",cachuri,cachuri*5);
    printf("\n vegetable chap=%dx7=%d",vegetable,vegetable*7);
    printf("\n Total bill=%d",alur_chap*5+beguni*6+fuluri*5
    +peaji*6+egg_debil*15+sandoich*8+cachuri*5+vegetable*7);
getch();
}
