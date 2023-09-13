#include <stdio.h>
#define sword 1

void play_game() {
    int hero = 60, attack;
    printf("\nCurrent health : %i"
	   "\nAttack with what ?"
	   "\n1. Sword"
	   "\n2. Lighting"
	   "\n3. Fist"
	   "\n", hero);
    scanf("%i", &attack);
    if (attack == sword) {
	printf("Bash !!! Damage \n\n");


    }
}

int main() {
    play_game();
}
