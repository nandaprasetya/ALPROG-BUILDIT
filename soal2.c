#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char texta[101], textb[101];

    scanf("%s", texta);
    scanf("%s", textb);

    if (strlen(texta) != strlen(textb)) {
        printf("BERBEDA\n");
    } else {
        if (strcmp(texta, textb) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
            
        }
    }

    return 0;
}
