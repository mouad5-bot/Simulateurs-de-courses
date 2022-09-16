#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <windows.h>
#ifdef _WIN32
#endif


typedef struct {
        int numberOfLaps;
        int currentLap;
        char firstPlaceDriverName[100];
        char firstPlaceRaceCarColor[100];
    }Race;

typedef struct {
        char driverName[100];
        char raceCarColor[100];
        int totalLapTime;
    }RaceCar;

void printIntro();
void printCountDown();
void printFirstPlaceAfterLap();
void printCongratulation();

int main()
{

//this code help to read the �
SetConsoleOutputCP(GetACP());
SetConsoleCP(GetACP());



}


void printIntro() {

    printf("Bienvenue a notre evenement principal, les fans de course numerique ! ");
    printf("\nJ'espere que tout le monde a pris son gouter car nous allons commencer !");

  }

  //Countdown fonction
void printCountDown(){
printf("\nCoureurs pr�ts ! Dans...\n");

int counter;

for(counter=5;counter>0;counter--){

    printf("%d\n",counter);
   sleep(1);

}
void printFirstPlaceAfterLap(Race race){
    printf("Apr�s le tour num�ro %d\nLa premi�re place est occup�e par : %s dans la voiture de course %s !"
           ,race.numberOfLaps,race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
}

void printCongratulation(Race race){
    printf("F�licitons tous %s, dans la voiture de course %s, pour son incroyable performance.\nC'�tait vraiment une belle course et bonne nuit � tous !\n"
           , race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

int calculateTimeToCompleteLap(){

    int vitesse;
    int acceleration;
    int nerves;
    int somme=0;
    srand(time(NULL));
 	vitesse = rand()%3 +1 ;
 	acceleration = rand()%3 +1 ;
 	nerves = rand()%3 +1 ;

 	printf("%d %d %d\n",nerves,vitesse,acceleration);

 	somme = vitesse + acceleration + nerves ;
 	return somme ;
 }

