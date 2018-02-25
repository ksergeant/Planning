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



struct data { // structure data

    string vacation;
    string date;

};



int main(int argc, const char * argv[]) {
    
    // initialisation des variables
    int nombreElement = 0;
    int nombreRepos = 0;
    struct data dataX;
    vector<data> Tabdata;
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
    
    // Phrase de départ pour le commencemebt des calculs dans le temps
    
    printf("Nous sommes %s,  ", NomJourSemaine[t->tm_wday]);
    printf("le %02u %s %04u,  ", t->tm_mday, NomMois[t->tm_mon], 1900 + t->tm_year); // départ le 10 novembre 2017
    cout << "Start" <<endl;
    strftime(format, 128, "%Y/%m/%d\n", t);
    cout << format <<endl;
    
    // Boucle qui calcule les jours sur les 10 prochaines années (84 cas possibles)
    
    for(int i = 0; i<3649; i++){
        
        timestamp = start+decal;
        t = localtime(&timestamp);
        printf("Nous sommes %s,  ", NomJourSemaine[t->tm_wday]);
        //printf("le %02u %s %04u,  ", t->tm_mday, NomMois[t->tm_mon], 1900 + t->tm_year);
        
        if (compteurJourVac>84) {
            compteurJourVac = 1;
        
        }
        
        // switch des 84 possibilitées
        
        switch (compteurJourVac) {
            
            case 1: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t); // format de date utilisable pour la base de données
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                
                break; //debut vac aprem
                
            case 2: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 3: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 4: cout << "Aprem" <<endl<<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 5: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 6: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 7: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 8: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 9: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
                
            case 10: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 11: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 12: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 13: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 14: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 15: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 16: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 17: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 18: cout << "Repos" <<endl<<endl;
                nombreRepos =nombreRepos +1;
                break;
                
            case 19: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 20: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 21: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 22: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 23: cout << "Aprem" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 24: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 25: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 26: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 27: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 28: cout << "Repos" <<endl<<endl;
                nombreRepos =nombreRepos +1;
                break; //fin vac aprem
                
            case 29: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break; //debut vac matin
                
            case 30: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 31: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 32: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 33: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 34: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 35: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 36: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 37: cout << "Repos" <<endl<<endl;
                nombreRepos =nombreRepos +1;
                break;
                
            case 38: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 39: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 40: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 41: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 42: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 43: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 44: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 45: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 46: cout << "Repos" <<endl<<endl;
                nombreRepos =nombreRepos +1;
                break;
                
            case 47: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 48: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 49: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 50: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 51: cout << "Matin" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 52: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 53: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 54: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 55: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 56: cout << "Repos" <<endl<<endl;
                nombreRepos =nombreRepos +1;
                break; //fin vac matin
                
            case 57: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break; //debut vac nuit
                
            case 58: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 59: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 60: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 61: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 62: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 63: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 64: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 65: cout << "Repos" <<endl<<endl;
                nombreRepos =nombreRepos +1;
                break;
                
            case 66: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 67: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 68: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 69: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
            case 70: cout << "Nuit" <<endl<<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                cout << format <<endl;
                break;
                
            case 71: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 72: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 73: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 74: cout << "Repos" <<endl<<endl;
                nombreRepos =nombreRepos +1;
                break;
                
            case 75: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 76: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 77: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 78: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                break;
                
            case 79: cout << "Nuit" <<endl;
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                cout << dataX.date << " : " << dataX.vacation <<endl;
                Tabdata.push_back(dataX);
                
                break;
                
            case 80: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 81: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 82: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 83: cout << "Repos" <<endl;
                nombreRepos =nombreRepos +1;
                break;
            case 84: cout << "Repos" <<endl<<endl;
                nombreRepos =nombreRepos +1;
                break; //fin vac nuit
                
            default:
                cout << "erreur" <<endl;
                break;
        }
        
        decal = decal+86400;
        compteurJourVac = compteurJourVac+1;
    
    }

    //Affichage du vector
    for(int i = 0; Tabdata.size()!= i  ;++i)
    {
        cout << Tabdata.at(i).date <<" : "<< Tabdata.at(i).vacation <<endl;
        
        nombreElement = i ;
    }
    
    cout <<"\nNombre de jours travaillé sur 10 ans : " <<nombreElement<<endl;
    
    return 0;
}
