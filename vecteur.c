#include<stdio.h>
int main () {
    int x1,y1,z1,z2,y2,x2,C1,C2,C3;
    printf("COORDONNEES DU VECTEUR 1\n");
    printf("x1 = ");
    scanf("%d",&x1);
    printf("y1 = ");
    scanf("%d",&y1);
    printf("z1 = ");
    scanf("%d",&z1);
    printf("COORDONNEES DU VECTEUR 2\n");
    printf("x2 = ");
    scanf("%d",&x2);
    printf("y2 = ");
    scanf("%d",&y2);
    printf("z2 = ");
    scanf("%d",&z2);
    printf("Le produit vectoriel est \n");
    C1=(y1*z2)-(z1*y2);
    C2=(x2*z1)-(z2*x1);
    C3=(x1*y2)-(y1*x2);
    printf("(%d,%d,%d)",C1,C2,C3);

    return 0;
}
