#include <iostream>
#include <fstream>
#include <string>

void glock19()
{
  std::cout << std::endl;

  std::cout <<   "  8888o.o.o.o.ooooooo00||00oooooooooooooooooooo88o"            << std::endl;
  std::cout <<   "   88:8:8:8:8:888888800||0088888888888888888888888:"            << std::endl;
  std::cout <<   "   88:8:8:8:8:888888888888888888888888888888888888:"            << std::endl;
  std::cout <<   "  Y88:8:8:8:8:8888888888888888888oooooooooooooooP"""            << std::endl;
  std::cout <<   "   ""8oooooooooooooooooooooooooo"""""""""""""""" "           << std::endl;
  std::cout <<   "     .88888888888.`:::      8"                                << std::endl;
  std::cout <<   "     88888888888Yo   `` *   8"                                   << std::endl;
  std::cout <<   "    .88888888888 `oooooooood8o"                                 << std::endl;
  std::cout <<   "    88888888888'"                                               << std::endl;
  std::cout <<   "   .88888888888"                                                 << std::endl;
  std::cout <<   "   88888888888'"                                                  << std::endl;
  std::cout <<   "  .88888888888"                                                   << std::endl;
  std::cout <<   "  98888888888'"                                                 << std::endl;
  std::cout <<   "   ``""YY888P"                                         << std::endl;

  std::cout << std::endl;
}

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

void rob()
{
   std::cout <<"           ^                                                         "<< std::endl;
   std::cout <<"          | |                                                        "<< std::endl; 
   std::cout <<"        @#####@                                                     " << std::endl;
   std::cout <<"      (###   ###)-.                                                 " << std::endl; 
   std::cout <<R"    .(###     ###) \                                                 "<< std::endl; 
   std::cout <<"   /  (###   ###)   )                                               "<< std::endl;   
   std::cout <<"  (=-  .@#####@|_--" 	"This is a hold up! Put all your money in the" << std::endl;   
   std::cout <<"  /\    \_|l|_/ (\   	disk drive slot, and no one gets hurt!        "<< std::endl; 
   std::cout <<" (=-\     |l|    /                                                "  << std::endl; 
   std::cout <<"  \  \.___|l|___/                                                 "  << std::endl; 
   std::cout <<"  /\      |_|   /                                                 "  << std::endl; 
   std::cout <<" (=-\._________/\                                                 "  << std::endl;   
   std::cout <<"  \             /                                                 "  << std::endl;   
   std::cout <<"    \._________/                                                  "  << std::endl;   
   std::cout <<"      #  ----  #                                                  "  << std::endl;  
   std::cout <<"      #   __   #                                                  "  << std::endl;    
   std::cout <<"      \########/                                                  "  << std::endl;  
   std::cout <<"                                                                  "  << std::endl;  
   std::cout <<"          V                                                       "  << std::endl;    
   std::cout <<"              V                                                   "  << std::endl;        
   std::cout <<"            V                                                     "  << std::endl;      
}                                                                                  
                                                                                   
int main()                                                                         
{                                                                                  
   // std::ofstream ghostFace("ghostface.txt");                                     << std::endl;
   // ghostFace << "the pupils burn from the gaze of the sunlight" << std::endl;    << std::endl;
   // ghostFace << "tryna go legit this time with no gun fights" << std::endl;      << std::endl;
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
  if(gunChoice == "Glock19")
  {
    glock19();
    std::cout << "Solid choice. We are unforuntaely out of 9mm however." << std::endl;
  }
  if(gunChoice == "rob")
  {
    rob();
    std::cout << "you punk ***** ill ****** **** ***!" << std::endl;
  }
  return 0;
}
