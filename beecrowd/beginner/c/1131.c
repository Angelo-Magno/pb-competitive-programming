#include <stdio.h>

int main() {
    int inter_goals, gremio_goals, inter_victories, gremio_victories, count_grenais, draws, x = 1;

    inter_goals = gremio_goals = inter_victories = gremio_victories = count_grenais = draws = 0;

    do {
        scanf("%d %d", &inter_goals, &gremio_goals);

        count_grenais++;

        if (inter_goals > gremio_goals){ 
            inter_victories++;
        } else if (gremio_goals > inter_goals) {
            gremio_victories++;
        } else {
            draws++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &x);
        
    } while (x == 1);

    printf("%d grenais\n", count_grenais);
    printf("Inter:%d\n", inter_victories);
    printf("Gremio:%d\n", gremio_victories);
    printf("Empates:%d\n", draws);
    
    if (inter_victories == gremio_victories){
        printf("Não houve vencedor\n");
    } else{
        printf("%s venceu mais\n", inter_victories > gremio_goals ? "Inter" : "Gremio");
    }

    return 0;
}
