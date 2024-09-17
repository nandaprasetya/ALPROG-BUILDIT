#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int jumlahinputan, i, j, temp;
    scanf("%d", &jumlahinputan);
    int nilai[jumlahinputan];
    for(i = 0; i < jumlahinputan; i++) {
        scanf("%d", &nilai[i]);
    } 
    for(i = 0; i < jumlahinputan-1; i++) {
        for(j = 0; j < jumlahinputan-i-1; j++) {
            if(nilai[j] > nilai[j+1]) {
                temp = nilai[j];
                nilai[j] = nilai[j+1];
                nilai[j+1] = temp;
            }
        }
    }
    for(i = 0; i < jumlahinputan; i++) {
        printf("%d\n", nilai[i]);
    }

    return 0;
}
