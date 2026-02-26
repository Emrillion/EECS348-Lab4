#include <stdio.h>
// Program to find possible combinations of scoring plays

int main() {
    int num;
    num = -1; // Initialize num to a value that is not 0 or 1 to enter the loop 
    while (num != 0 && num != 1) {
        printf("Enter 0 or 1 to STOP\n");
        printf("Enter the NFL score: ");
        scanf("%d", &num);
        
        // Print all possible combinations of scoring plays
        printf("Possible combinations of scoring plays if a team's score is %d:\n", num);
        // Format: X TD + 2pt, X TD +FG, X TD, X 3pt FG, X Safety
        for (int td2pt = 0; td2pt <= num / 8; td2pt++) {
            for (int tdfg = 0; tdfg <= num / 7; tdfg++) {
                for (int td = 0; td <= num / 6; td++) {
                    for (int fg = 0; fg <= num / 3; fg++) {
                        for (int safety = 0; safety <= num / 2; safety++) {
                            if (8 * td2pt + 7 * tdfg + 6 * td + 3 * fg + 2 * safety == num) {
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td2pt, tdfg, td, fg, safety);
                            } 
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}
