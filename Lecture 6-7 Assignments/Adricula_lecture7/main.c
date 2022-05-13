# include <stdio.h>

int main(){
int point; // declared variable
  int road_networks[8][8] = // initialized array
  {
    {1, 1, 0, 0, 0, 1, 0, 0},
    {1, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 1, 0, 0},
    {1, 0, 0, 1, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 1, 0, 1}
  };

  printf("    | A |  B | [C] | [D] | E  | F |  G |  H |\n------------------------------------------------\n");

  // prints out the table of arrays
  for(int i = 0; i < 9; ++i)
  {
     printf("%d   |",i);
     for(int j = 0; j < 8; ++j)
     {
        if(road_networks[i][j] > 9)
        {
          printf(" %d |", road_networks[i][j]);
        } else {
          printf(" %d  |", road_networks[i][j]);
        }
     }
     printf("\n---------------------------------------------------\n");
  }

  // Shows where point are located using switch statements
            printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H \n");
            scanf("%d", &point);
            switch(point){
            case 0:
                printf("At point: A\n");
                break;
            case 1:
                printf("At point: B\n");
                break;
            case 2:
                printf("point: C is a charging station\n");
                break;
            case 3:
                printf("point: D is a charging station\n");
                break;
            case 4:
                printf("At point: E\n");
                break;
            case 5:
                printf("At point: F\n");
                break;
            case 6:
                printf("At point: G\n");
                break;
            case 7:
                printf("At point: H\n");
                break;
            }
// shows nearest charging station
    if (point = 0 || 1 || 5)
        printf("point: C arrived to charging station");
    else
        if(point = 4 || 7|| 6)
        printf("point: D arrived to charging station");


  return 0;
}
