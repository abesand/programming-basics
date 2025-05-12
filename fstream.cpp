#include <iostream>
#include <fstream>
#include <string>

void acp_45()
{}

void uzi()
{
  std::cout << std::endl;

  std::cout <<   "     OO                    QQQQ     OO           "            << std::endl;
  std::cout <<   "    OOOO                    QQ     OOOO          "            << std::endl;
  std::cout <<   "    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW       "            << std::endl;
  std::cout <<   " SSSXXXXXXXXXXXX--------XXXXXXXXXXXXXXXXXWmmmmmm "            << std::endl;
  std::cout <<   " SSSXXXXXXXXXXXX--------XXXXXXWWWWWWWWWWWWMMMMMM "            << std::endl;
  std::cout <<   "  SSSXXXXXXXXXXXXxxxxxxxxXXXXXXWWWWWWWWWWWW      "            << std::endl;
  std::cout <<   "  SSS   SSS     CEEEEEEEE C  Z                   "            << std::endl;
  std::cout <<   "  SSS SS        CWXXXXXXW  C Z                   "            << std::endl;
  std::cout <<   "  SSSS          CWXXXXXXWZZZZ                    "            << std::endl;
  std::cout <<   "  SSS            WXXXXXXW                        "            << std::endl;
  std::cout <<   "  SSS            WXXXXXXW                        "            << std::endl;
  std::cout <<   "                 WXX++XXW                        "            << std::endl;
  std::cout <<   "                  NNNNNN                         "            << std::endl;
  std::cout <<   "                  NNNNNN                         "            << std::endl;

  std::cout << std::endl;
}

int main()
{
 // std::ofstream ghostFace("ghostface.txt");
 // ghostFace << "the pupils burn from the gaze of the sunlight" << std::endl;
 // ghostFace << "tryna go legit this time with no gun fights" << std::endl;
 // ghostFace.close();

  std::ofstream reciept("reciept.txt");
  std::cout << std::endl;
  std::cout << "Welcome to the Gun Shop!" << std::endl;
  std::cout << "We have a wide selection of guns to choose from." << std::endl;
  std::cout << "Which gun would you like to see?" << std::endl;

  std::string gunChoice;
  std::cin >> gunChoice;
  if(gunChoice == "Uzi")
  {
    uzi();
    std::cout << "That's a good choice!" << std::endl;
    std::cout << "Price: $888.88" << std::endl;
    std::cout << "Standard Issue." << std::endl;
    std::cout << "Type of round: .45 ACP" << std::endl;
    std::cout << "We just so happen to also carry .45 ACP if you're interested." << std::endl;
  }
  return 0;
}
