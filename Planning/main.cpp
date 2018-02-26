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
#include <curl/curl.h>

using namespace std;



struct data { // structure data

    string vacation;
    string date;
    string jour;
};



int main(int argc, const char * argv[]) {
    
    // initialisation des variables
    int nombreElement = 0;
    struct data dataX;
    vector<data> Tabdata;
    const char * NomJourSemaine[] = {"Dim", "Lun", "Mar", "Mer", "Jeu", "Ven", "Sam"};
    const char * NomMois[] = {"Jan", "Fev", "Mar", "Avr", "Mai", "Jui", "Juy", "Aou", "Sep", "Oct", "Nov", "Dec"};
    int compteurJourVac = 1;
    char format[128];
    time_t timestamp;
    time_t start = 1510272000; // le 10/11/2017 nombre de secondes
    struct tm * t;
    long int decal = 86400;
    timestamp = start;
    t = localtime(&timestamp);
    
    cout << "       @@@@@ Planning 1.0 By MOKS @@@@@" <<endl<<endl;
    
    // Phrase de départ pour le commencement des calculs dans le temps
    
    cout << "\n### Lancement du calcul des dates\n"<<endl;
    printf("Nous sommes %s,  ", NomJourSemaine[t->tm_wday]);
    printf("le %02u %s %04u,  ", t->tm_mday, NomMois[t->tm_mon], 1900 + t->tm_year); // départ le 10 novembre 2017
    cout << "Start" <<endl<<endl;
    
    // Boucle qui calcule les jours sur les 10 prochaines années (84 cas possibles)
    for(int i = 0; i<3649; i++){
        
        timestamp = start+decal;
        t = localtime(&timestamp);
        
        if (compteurJourVac>84)
        {
            compteurJourVac = 1;
        }
        
        // switch des 84 possibilitées
        switch (compteurJourVac) {
            
            case 1:
                strftime(format, 128, "%Y/%m/%d", t); // format de date utilisable pour la base de données
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                
                break;//debut vac aprem
                
            case 2:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 3:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 4:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 5:break;//Repos
            case 6:break;
            case 7:break;
            case 8:break;
            case 9:break;
                
            case 10:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 11:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 12:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 13:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 14:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 15:break;//Repos
            case 16:break;
            case 17:break;
            case 18:break;
                
            case 19:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 20:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 21:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 22:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 23:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Après-midi";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 24:break; // Repos
            case 25:break;
            case 26:break;
            case 27:break;
            case 28:break; //fin vac aprem
                
            case 29:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break; //debut vac matin
                
            case 30:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 31:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 32:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 33:break;// Repos
            case 34:break;
            case 35:break;
            case 36:break;
            case 37:break;
                
            case 38:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 39:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 40:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 41:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 42:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
                
            case 43:break; //Repos
            case 44:break;
            case 45:break;
            case 46:break;
                
            case 47:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 48:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 49:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 50:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 51:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Matin";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 52:break; // Repos
            case 53:break;
            case 54:break;
            case 55:break;
            case 56:break; //fin vac matin
                
            case 57:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break; //debut vac nuit
                
            case 58:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 59:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 60:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 61:break; // Repos
            case 62:break;
            case 63:break;
            case 64:break;
            case 65:break;
                
            case 66:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 67:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 68:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 69:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 70:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 71:break; //Repos
            case 72:break;
            case 73:break;
            case 74:break;
                
            case 75:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 76:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 77:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 78:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 79:
                strftime(format, 128, "%Y/%m/%d", t);
                dataX.vacation ="Nuit";
                dataX.date = format;
                dataX.jour = NomJourSemaine[t->tm_wday];
                Tabdata.push_back(dataX);
                break;
                
            case 80:break; //Repos
            case 81:break;
            case 82:break;
            case 83:break;
            case 84:break; //fin vac nuit
                
            default:
                cout << "erreur" <<endl;
                break;
        }
        
        decal = decal+86400; // nombre de secondes par jour
        compteurJourVac = compteurJourVac+1;
    
    }

    //Affichage du vector
    cout << "### Affichage du conteneur de data ### \n" <<endl;
    string dataDate, dataVaction, dataAll;
    const char *dataSend;
    CURL *curl;
    CURLcode res;
    
    int compteur =0;
    
    for(int i = 0; Tabdata.size()!= i  ;++i)
    {
        if (compteur ==14 )
        {
            cout << "\n############\n";
            compteur = 0;
        }
       
       // cout << Tabdata.at(i).date <<" : "<< Tabdata.at(i).vacation <<" : "<< Tabdata.at(i).jour <<endl;
        
        cout << "\n ### Envoie Via Curl ### \n" << endl;
        dataDate = Tabdata.at(i).date;
        dataVaction = Tabdata.at(i).vacation;
        dataAll = "DAY="+dataDate+"&VACATION="+dataVaction;
        dataSend = dataAll.c_str();
        curl = curl_easy_init();
        cout << "Data : "<<dataAll << endl;
        
        if(curl)
        {
            curl_easy_setopt(curl, CURLOPT_URL, "http://localhost:8888/Vacation/EnregistrerVacation.php");
            /* Now specify the POST data */
            curl_easy_setopt(curl, CURLOPT_POSTFIELDS, dataSend);
            
            /* Perform the request, res will get the return code */
            res = curl_easy_perform(curl);
            
            /* always cleanup */
            curl_easy_cleanup(curl);
            
        }
        else
        {
            cerr << "Fail to create curl handle for post method\n";
            exit(1);
        };
        
        
        
        compteur = compteur +1;
        nombreElement = i ;
    }
    
    cout <<"\nNombre de jours travaillé sur 10 ans : " << nombreElement << endl;
    
    
    cout <<"        \n@@@@@ Planning 1.0 By MOKS @@@@@" << endl << endl;
    
    return 0;
}
