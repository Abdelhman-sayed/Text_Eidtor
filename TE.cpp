/*FACULTY OF COMPUTERS AND ARTIFICIAL INTELLIGENCE, CAIRO UNIVERSITY
Author :Abdelrhman sayed ali
Program Name: Text Editor Program.c plus plus*/


#include <iostream>
#include <string>
#include <regex>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <map>
#include <cctype>
#include <cstdlib>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
using namespace std;

int displayMenu();
void loadFile();
void toLower();
void toUpper();
void read();
void ConvertFirstCharUpper();
void EncryptionText();
void DencryptionText();
void CountTheNumberOfWords();
void append();
void EmptyFile();
void toCountNumberOfChars();
void toSearchAboutWord();
void toCountNumberOfWord();
void merge();
void saveChanges();
void save();


int choice;
char nameFile[100];
char savefile[100];
fstream SaveFile;
fstream file;
vector<string>text;




int main()
{
    
    system("cls");
    cout << "\n         *********************************************************************************************************\n";
    cout << "\n                   <<<<<<<<<<<<<<<<<<<<<<<***WELCOME USER IN TEXT EDIDTOR PROGRAM***>>>>>>>>>>>>>>>>>>>>>>>\n\n";
    cout << "         *********************************************************************************************************\n\n";
    
    loadFile();

    
    while(true)
    {
        
        choice = displayMenu();


        if (choice == 1)//Add new text to the end of the file
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
            append();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();
        }

        else if(choice == 2)
        {
            
            cout << "\n\n                      ----------------------------- Content Of File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();
            
        }

        else if (choice == 3)
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
            EmptyFile();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();
        }


        else if (choice == 4 )
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
            EncryptionText();
            for(string line: text)
            {
                cout << line << endl;
            }
            saveChanges();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();

        }

        else if(choice == 5)
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
            DencryptionText();
            for(string line: text)
            {
                cout << line << endl;
            }
            saveChanges();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();

        }

        else if(choice == 6)
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
            merge();
            for(string line: text)
            {
                cout << line << endl;
            }
            saveChanges();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();


        }


        else if(choice == 7)
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
            CountTheNumberOfWords();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();
        }


        else if(choice == 8)
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
            toCountNumberOfChars();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();
        }
        
        else if(choice == 9)
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
            cout << "Number of  lines is equal = " << text.size() << endl;
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();
        }

        else if(choice == 10)
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
            toSearchAboutWord();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();
        }

        else if(choice == 11)
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }

            toCountNumberOfWord();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();
        }
        
        else if(choice == 12)
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
            toUpper();
            for(string line: text)
            {
                cout << line << endl;
            }
            saveChanges();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();
            
        }

        else if(choice == 13)
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
       
            toLower();
            for(string line: text)
            {
                cout << line << endl;
            }
            saveChanges();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();
            
            
            
        }
        
        else if (choice == 14)
        {
            cout << "\n\n                      ----------------------------- Original File -----------------------------\n\n";
            for(string line: text)
                {
                    cout << line << "\n";
                }
            ConvertFirstCharUpper();
            for(string line: text)
            {
                cout << line << endl;
            }
            saveChanges();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();

        }
        
        else if(choice == 15)
        {
            save();
            cout <<"   -------------------------------------------------------------------------------------------------------------------\n"; 
            cout <<"   --------------------------------------------------------------------------------------------------------------------\n\n\n"; 
            //system("cls");
            displayMenu();

            
        }
        else if(choice == 16)
        {
            return 0;
        }
        
        
    
    }
}

int displayMenu()
{
    
    cout << "          [<==================================PLEASE ENTER THE CHOICE FROM THE LIST===================================>]"<< endl;
    
    cout << endl << endl;
    cout << "1* Add new text to the end of the file" << endl;
    cout << "2* Display the content of the file" <<endl;
    cout << "3* Empty the file \n";
    cout << "4* Encrypt the file content \n";
    cout << "5* Decrypt the file content \n";
    cout << "6* Merge another file" << endl;
    cout << "7* Count the number of words in the file "  << endl;
    cout << "8* Count the number of characters in the file " << endl;
    cout << "9* Count the number of lines in the file " << endl;
    cout << "10* Search for a word in the file " << endl;
    cout << "11* Count the number of times a word exists in the file " << endl;//
    cout << "12* Turn the file content to upper case " << endl;
    cout << "13* Turn the file content to lower case "<< endl;
    cout << "14* Turn file content to 1st caps (1st char of each word is capital)" << endl;
    cout << "15* Save " << endl;
    cout << "16* Exit"<< endl;
    
    while(true)
    {
        cout << ">>>>Please enter the chioce : " << endl;
        cin >> choice;
        cout << endl;
        if(choice >= 1 && choice <= 16)
        {
            system("cls");
            return choice;
            
        }
        else
        {
            
            cout << ">>>>This input not correct !!" << endl;
            cout << "****Please enter the number (from 1 to 16)****" << endl;
            cin.clear();
            cin.ignore();
            continue;
        }
        
        

    }
    
    
    

}


  
//To get afile from pc
void loadFile()
{
   char line[100];
    while (true)
    {
        cout << ">>>>Please enter the file : " << endl;
        cin >> nameFile;
        cout << endl ;
        file.open(strcat(nameFile, ".txt"));
        if(file)
        {
            cout << "****Congratulations!****" << endl;
            cout << "****File was opened successfully****" << endl;
            cout << endl;
            while(!file.eof()) 
                {
                    file.getline(line, 100, '\n');
                    text.push_back(string(line));
                }
            
            
            break;

        }
        else 
        {
            cout << "****This file could not be opened because does not exit**** \n";
            cout << "****A new file will be created when saving****\n";
            
            file.open(nameFile);
            break;
            



            }

    }

}  


//Turn the file content to lower case
void toLower()
{
    
    cout << "\n\n                      ----------------------------- Lowercase File -----------------------------\n\n";
    for(int i = 0; i < text.size(); i++)
        {
            for(int j = 0 ; j < text[i].size(); j++)
            {
                text[i][j] = tolower(text[i][j]);
            }
        }


}



//Turn the file content to upper case
void toUpper()
{
    
    cout << "\n\n                      ----------------------------- Uppercase File -----------------------------\n\n";
    for(int i = 0; i < text.size(); i++)
        {
            for(int j = 0 ; j < text[i].size(); j++)
            {
                text[i][j] = toupper(text[i][j]);
            }
        }


}

//Display the content of the file
void read()
{
    for(string line: text)
    {
        cout << line << endl;
    }

}


//Turn file content to 1st caps (1st char of each word is capital)
void ConvertFirstCharUpper()
{
    cout << "\n\n                      ----------------------------- First Caps File -----------------------------\n\n";
    for(int i = 0; i < text.size(); i++)// i ...>>row
        {
            for(int j = 0 ; j < text[i].size(); j++)//j .. >> colume
            {
                if (j == 0)
                {
                    text[i][j] = toupper(text[i][j]);

                }
                
            }
            
          
        }
}
 //Encrypt the file content
 void EncryptionText()
 {
     cout << "\n\n                      ----------------------------- Encrypted File -----------------------------\n\n";
     
     string alphabit ="abcdefghijklmnopqrstuvwxyz";
     string alphabitReverse = alphabit;
     reverse(alphabitReverse.begin(),alphabitReverse.end());
     //toLower(text);
     for(int i = 0; i < text.size(); i++)// i ...>>row
        {
            for(int j = 0 ; j < text[i].size(); j++)//j .. >> colume
            {
                for(int x = 0; x < alphabit.size(); x++)
                {
                    if(text[i][j] == alphabit[x])
                    {
                        text[i][j] = alphabitReverse[x];
                        break;
                    }

            
            }
        }

    }
    /*for(int i = 0; i < text.size(); i++)// i ...>>row
        {
            for(int j = 0 ; j < text[i].size(); j++)//j .. >> colume
            {
                text[i][j] += 1;

            }
        }*/
}


 //Decrypt the file content
 void DencryptionText()
 {
     cout << "\n\n                      ----------------------------- Dencrypted File -----------------------------\n\n";
     
     string alphabit ="abcdefghijklmnopqrstuvwxyz";
     string alphabitReverse = alphabit;
     reverse(alphabitReverse.begin(),alphabitReverse.end());
     toLower();
     for(int i = 0; i < text.size(); i++)// i ...>>row
        {
            for(int j = 0 ; j < text[i].size(); j++)//j .. >> colume
            {
                for(int x = 0; x < alphabit.size(); x++)
                {
                    if(text[i][j] == alphabitReverse[x])
                    {
                        text[i][j] = alphabit[x];
                        break;
                    }

            
            }
        }

    }
    /*for(int i = 0; i < text.size(); i++)// i ...>>row
        {
            for(int j = 0 ; j < text[i].size(); j++)//j .. >> colume
            {
                text[i][j] -= 1;

            }
        }*/

 }



 //Count the number of words in the file
 void CountTheNumberOfWords()
 {
     int counter = 0;
     for(int i = 0; i < text.size(); i++)// i ...>>row
        {
            for(int j = 0 ; j < text[i].size(); j++)//j .. >> colume
            {
                if((text[i][j] == ' ' && text[i][j+1] != ' ' && text[i][j+1] != '\n')|| (text[i][j+1] == '\0') ) //j == 0
                {
                    counter += 1;

                }

            }
        }
    cout << "The number of words in the file = " << counter  << endl;
}


//to append text in the file
 void append()
 {
     cout << "\n\n                      ----------------------------- Adding content -----------------------------\n\n";
     file.close();
     string str ="";
    
     file.open(nameFile, ios::app);//open(nameFile, ios::in) // open(nameFile, ios::out)
     cout << "enter any text you want append it in file : " << endl;
     for (int  i = 0; i < 1000; i++)
     {
         str += getchar();
         if(str[i] == (char)26)//(str.size()-1)
         {
             break;
         }
     }


     file << str;
     file.close();
}


//to clear file
void EmptyFile()
{
    file.close();
    string str = "";
    file.open(nameFile, ios::out);//write
    //in read

    file << str;
    file.close();
}

void toCountNumberOfChars()
{
    int counter = 0;
     for(int i = 0; i < text.size(); i++)// i ...>>row
        {
            for(int j = 0 ; j < text[i].size(); j++)//j .. >> colume
            {
                if(text[i][j] != ' ')
                {
                    counter += 1;

                }

            }
        }
    cout << "The number of chars in the file = " << counter << endl;

}

//*****************************************************************

//to search about word in file
void toSearchAboutWord()
{
    string strFile;
    string searchStr;
 
    int x = 0;
    file.close();
    file.open(nameFile);
    getline(file, strFile);
    cout << ">>>>Please, enter that you want to search it : \n"; 
    cin.ignore();
    getline(cin, searchStr);
    for(char i : strFile)
    {
        strFile[x] = char(tolower(i));
        x++;
    }
    if(strFile.find(searchStr,0)<1000)
    {
        cout << "The word you search for is found in the index: "<<strFile.find(searchStr,0) << "\n\n";
    }
    else
    {
        cout << "****Couldn't find that word!**** \n";
    }
}



//*******************************************************
void toCountNumberOfWord()
{
    string strFile;
    string searchStr;
    int counter = 0;
    
    
    fstream file2(nameFile);
    getline(file2, strFile);
    cout<<">>>>Add the word to be searched : \n";
    cin.ignore();
    getline(cin, searchStr);
    for(int i = 0; strFile.find(searchStr,0) <10000 ;i += strFile.find(searchStr,0))
    {
        if(strFile.find(searchStr,0) < 10000)
        {
            counter += 1;

        }
    }
    cout << "The word was found " << (counter-1) << " Times! \n";
  


}

void merge()
{
    char line[100];
    file.close();
    char mfile[100];
    fstream mergeFile;
    cout << "Please, Enter file to merge it to orginail file : \n";
    cin >> mfile;
    mergeFile.open(mfile, ios::in);
    file.open(nameFile, ios::app);
    string str;
    while (!mergeFile.eof()) 
    {
        mergeFile.getline(line, 100, '\n');
        text.push_back(string(line));        
    }



}


//to save anew change
void saveChanges()
{
    file.close();
    file.open(nameFile, ios::out);

    for (int i = 0; i< text.size() ; i++)
    {
        file << text[i];
        file << '\n';

    }
    file.close();
}



void save()
{
   
    char line[100];
    cin >> savefile;
    SaveFile.open(strcat(savefile, ".txt"));
  
    SaveFile.close();
    SaveFile.open(savefile, ios::out);

    for (int i = 0; i< text.size() ; i++)
    {
        SaveFile << text[i];
        SaveFile << '\n';

    }
    SaveFile.close();
    
}


