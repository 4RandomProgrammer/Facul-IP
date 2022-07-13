#include <stdio.h>

int main(){
    int mis, te, ri, o, contador;

    scanf("%d %d", &mis, &te);

    if (mis == te || te == 0) te++;

    if (!mis) mis += 3;

    ri = mis;
    o = te;

    while (mis != te) {
        if (mis < te) {
            while (te > mis) mis += ri;
        } else {
            while (mis > te) te += o;
        }
    }

    for (contador = 0; contador < 3; contador++) {
        printf("%d\n", mis);
        mis -= ri - o;
    }

    return 0;

}