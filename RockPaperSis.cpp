#include <iostream>
#include <string>
#include <unistd.h>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
using namespace std;

void RockPaperSis(string name);
string playagin;
string choice1;
string codename;

int main() {

  cout << "Welcoe to my rock paper scissors game! Have fun" << endl;
  cout << "Enter a codename:" << endl;
  cin >> codename;
  cout << endl;
  std ::system("clear");

  RockPaperSis(codename);

  cout << "Would you like to play again? Enter yes or no.. : " << endl;
  cin>> playagin;
  if(playagin == "yes" || "YES" || "Yes") {
    RockPaperSis(codename);
    }
  else {
    exit(0);
  }

  return 0;
}

void RockPaperSis(string name) {

  string GameChoice;
  string RobotChoice;
  int roboChoice;

  cout << "";
  cout << "Enter you choice, Rock Paper or Scissors" << endl;
  cout << "Make sure you capitilize the first letter!" << endl;
  cin >> GameChoice;


  int RandomNum;
  srand(time(0));
  RandomNum = 1+(rand() % 3);

  if (RandomNum == 1) {
    RobotChoice = "Rock";

  }
  else if(RandomNum == 2) {
    RobotChoice = "Paper";
  }
  else {
    RobotChoice = "Scissors";
  }


  cout << "3" << endl;
  usleep(1000000);
  cout << "2" << endl;
  usleep(1000000);
  cout << "1" << endl;
  usleep(1000000);
  cout << "";



  // influx of if statements :


  if(RobotChoice == "Paper" && GameChoice == "Rock") {
    cout << "RESULTS: " << endl;
    cout << "HumanDestroyer: " << RobotChoice << endl;
    cout << name << " " << GameChoice << endl;
    cout << "--------------------" << endl;
    cout << "You have lost!" << endl;
  }

  else if (RobotChoice == "Paper" && GameChoice == "Paper") {
      std ::system("clear");
    cout << "----------------------------" << endl;
    cout << "You have tied, and have been granted another chance" << endl;
    cout << "----------------------------" << endl;
    cout << endl;
    RockPaperSis(name);
  }

  else if (RobotChoice == "Paper" && GameChoice == "Scissors") {
    cout << "RESULTS: " << endl;
    cout << "HumanDestroyer: " << RobotChoice << endl;
    cout << name << " " << GameChoice << endl;
    cout << "--------------------" << endl;
    cout << "YOU HAVE WON!!" << endl;
  }

  else if (RobotChoice == "Rock" && GameChoice == "Scissors") {
    cout << "RESULTS: " << endl;
    cout << "HumanDestroyer: " << RobotChoice << endl;
    cout << name << " " << GameChoice << endl;
    cout << "--------------------" << endl;
    cout << "You have lost!" << endl;
  }

  else if (RobotChoice == "Rock" && GameChoice == "Rock") {
    std ::system("clear");
    cout << "----------------------------" << endl;
    cout << "You have tied, and have been granted another chance" << endl;
    cout << "----------------------------" << endl;
    cout << endl;
    RockPaperSis(name);
  }
  else if (RobotChoice == "Rock" && GameChoice == "Paper") {
    cout << "RESULTS: " << endl;
    cout << "HumanDestroyer: " << RobotChoice << endl;
    cout << name << " " << GameChoice << endl;
    cout << "--------------------" << endl;
    cout << "YOU HAVE WON!!" << endl;

  }

  else if (RobotChoice == "Scissors" && GameChoice == "Scissors") {
    std ::system("clear");
    cout << "----------------------------" << endl;
    cout << "You have tied, and have been granted another chance" << endl;
    cout << "----------------------------" << endl;
    cout << endl;
    RockPaperSis(name);
  }
  else if (RobotChoice == "Scissors" && GameChoice == "Rock") {
    cout << "RESULTS: " << endl;
    cout << "HumanDestroyer: " << RobotChoice << endl;
    cout << name << " " << GameChoice << endl;
    cout << "--------------------" << endl;
    cout << "YOU HAVE WON!" << endl;

  }
  else if (RobotChoice == "Scissors" && GameChoice == "Paper") {
    cout << "RESULTS: " << endl;
    cout << "HumanDestroyer: " << RobotChoice << endl;
    cout << name << " " << GameChoice << endl;
    cout << "--------------------" << endl;
    cout << "You have lost!" << endl;

  }

  else {
    cout << "looks like you spelled your choice wrong!" << endl;
    cout << "Lets try that again!" << endl;
    RockPaperSis(codename);
  }

  // end of if statements

  }
