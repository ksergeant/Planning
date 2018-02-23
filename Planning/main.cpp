//
//  main.cpp
//  Planning
//
//  Created by Kevin on 28/09/2017.
//  Copyright © 2017 Kevin. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <time.h>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    const char * NomJourSemaine[] = {"Dim", "Lun", "Mar", "Mer", "Jeu", "Ven", "Sam"};
    const char * NomMois[] = {"Jan", "Fev", "Mar"     , "Avr"  , "Mai"     , "Jui"    , "Juy", "Aou"   , "Sep", "Oct", "Nov", "Dec"};
    
    int compteurJourVac = 1;
   
    char format[128];
    
    time_t timestamp;
    time_t start = 1510272000; // le 10/11/2017
    struct tm * t;
    long int decal = 86400;
    
    timestamp = start;
    t = localtime(&timestamp);
    
    printf("Nous sommes %s,  ", NomJourSemaine[t->tm_wday]);
    printf("le %02u %s %04u,  ", t->tm_mday, NomMois[t->tm_mon], 1900 + t->tm_year);
    cout << "Start" <<endl<<endl;
    
    
    for(int i = 0; i<3649; i++){
        
        timestamp = start+decal;
        t = localtime(&timestamp);
        printf("Nous sommes %s,  ", NomJourSemaine[t->tm_wday]);
        printf("le %02u %s %04u,  ", t->tm_mday, NomMois[t->tm_mon], 1900 + t->tm_year);
        
        if (compteurJourVac>84) {
            compteurJourVac = 1;
        
        }
        
        switch (compteurJourVac) {
            case 1: cout << "Aprem" <<endl;
                
                
                strftime(format, 128, "%x\n", t);
                cout << format <<endl;
                
                break; //debut vac aprem
                
            case 2: cout << "Aprem" <<endl; break;
            case 3: cout << "Aprem" <<endl; break;
            case 4: cout << "Aprem" <<endl<<endl; break;
                
            case 5: cout << "Repos" <<endl; break;
            case 6: cout << "Repos" <<endl; break;
            case 7: cout << "Repos" <<endl; break;
            case 8: cout << "Repos" <<endl; break;
            case 9: cout << "Repos" <<endl<<endl; break;
                
            case 10: cout << "Aprem" <<endl; break;
            case 11: cout << "Aprem" <<endl; break;
            case 12: cout << "Aprem" <<endl; break;
            case 13: cout << "Aprem" <<endl; break;
            case 14: cout << "Aprem" <<endl<<endl; break;
                
            case 15: cout << "Repos" <<endl; break;
            case 16: cout << "Repos" <<endl; break;
            case 17: cout << "Repos" <<endl; break;
            case 18: cout << "Repos" <<endl<<endl; break;
                
            case 19: cout << "Aprem" <<endl; break;
            case 20: cout << "Aprem" <<endl; break;
            case 21: cout << "Aprem" <<endl; break;
            case 22: cout << "Aprem" <<endl; break;
            case 23: cout << "Aprem" <<endl<<endl; break;
                
            case 24: cout << "Repos" <<endl; break;
            case 25: cout << "Repos" <<endl; break;
            case 26: cout << "Repos" <<endl; break;
            case 27: cout << "Repos" <<endl; break;
            case 28: cout << "Repos" <<endl<<endl; break; //fin vac aprem
                
            case 29: cout << "Matin" <<endl; break; //debut vac matin
            case 30: cout << "Matin" <<endl; break;
            case 31: cout << "Matin" <<endl; break;
            case 32: cout << "Matin" <<endl<<endl; break;
                
            case 33: cout << "Repos" <<endl; break;
            case 34: cout << "Repos" <<endl; break;
            case 35: cout << "Repos" <<endl; break;
            case 36: cout << "Repos" <<endl; break;
            case 37: cout << "Repos" <<endl<<endl; break;
                
            case 38: cout << "Matin" <<endl; break;
            case 39: cout << "Matin" <<endl; break;
            case 40: cout << "Matin" <<endl; break;
            case 41: cout << "Matin" <<endl; break;
            case 42: cout << "Matin" <<endl<<endl; break;
                
            case 43: cout << "Repos" <<endl; break;
            case 44: cout << "Repos" <<endl; break;
            case 45: cout << "Repos" <<endl; break;
            case 46: cout << "Repos" <<endl<<endl; break;
                
            case 47: cout << "Matin" <<endl; break;
            case 48: cout << "Matin" <<endl; break;
            case 49: cout << "Matin" <<endl; break;
            case 50: cout << "Matin" <<endl; break;
            case 51: cout << "Matin" <<endl<<endl; break;
                
            case 52: cout << "Repos" <<endl; break;
            case 53: cout << "Repos" <<endl; break;
            case 54: cout << "Repos" <<endl; break;
            case 55: cout << "Repos" <<endl; break;
            case 56: cout << "Repos" <<endl<<endl; break; //fin vac matin
                
            case 57: cout << "Nuit" <<endl; break; //debut vac nuit
            case 58: cout << "Nuit" <<endl; break;
            case 59: cout << "Nuit" <<endl; break;
            case 60: cout << "Nuit" <<endl<<endl; break;
                
            case 61: cout << "Repos" <<endl; break;
            case 62: cout << "Repos" <<endl; break;
            case 63: cout << "Repos" <<endl; break;
            case 64: cout << "Repos" <<endl; break;
            case 65: cout << "Repos" <<endl<<endl; break;
                
            case 66: cout << "Nuit" <<endl; break;
            case 67: cout << "Nuit" <<endl; break;
            case 68: cout << "Nuit" <<endl; break;
            case 69: cout << "Nuit" <<endl; break;
            case 70: cout << "Nuit" <<endl<<endl; break;
                
            case 71: cout << "Repos" <<endl; break;
            case 72: cout << "Repos" <<endl; break;
            case 73: cout << "Repos" <<endl; break;
            case 74: cout << "Repos" <<endl<<endl; break;
                
            case 75: cout << "Nuit" <<endl; break;
            case 76: cout << "Nuit" <<endl; break;
            case 77: cout << "Nuit" <<endl; break;
            case 78: cout << "Nuit" <<endl; break;
            case 79: cout << "Nuit" <<endl<<endl; break;
                
            case 80: cout << "Repos" <<endl; break;
            case 81: cout << "Repos" <<endl; break;
            case 82: cout << "Repos" <<endl; break;
            case 83: cout << "Repos" <<endl; break;
            case 84: cout << "Repos" <<endl<<endl; break; //fin vac nuit
                
            default:
                cout << "erreur" <<endl;
                break;
        }
        
        decal = decal+86400;
        compteurJourVac = compteurJourVac+1;
    
    }

    
    
    
    
    return 0;
}
