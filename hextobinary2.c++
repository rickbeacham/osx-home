#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
using namespace std;

int main () 
{
  string hex;
  char ch;
  ifstream myfile ("hex.txt");
  
  ofstream outputFile;
  outputFile.open("binary.txt");
  if (myfile.is_open())
  {
  
  	
	myfile >> ch; 
    while (!myfile.eof())
	{
    	int j = 0;
    	//cout << ch << endl;
       
        switch (ch)
        {
        case '0':
            //printf("0000"); break;
            outputFile << "0000" << endl;
             break; 
        case '1':
            outputFile << "0001" << endl ;
             break; 
        case '2':
            outputFile << "0010" << endl ;
             break; 
        case '3':
            //printf("0011"); break;
            outputFile << "0011" << endl ;
             break; 
        case '4':
            //printf("0100"); break;
            outputFile << "0100" << endl;
             break; 
        case '5':
            //printf("0101"); break;
            outputFile << "0101" << endl ;
             break; 
        case '6':
            //printf("0110"); break;
             outputFile << "0110" << endl ;
              break; 
        case '7':
           // printf("0111"); break;
             outputFile << "0111" << endl;
              break; 
        case '8':
          //  printf("1000"); break;
             outputFile << "1000" << endl;
              break; 
        case '9':
          //  printf("1001"); break;
            outputFile << "1001" << endl ;
             break; 
        case 'A':
          //  printf("1010"); break;
            outputFile << "1010" << endl;
             break; 
        case 'B':
           // printf("1011"); break;
            outputFile << "1011" << endl;
             break; 
        case 'C':
           // printf("1100"); break;
            outputFile << "1100"  << endl;
             break; 
        case 'D':
            //printf("1101"); break;
            outputFile << "1101" << endl;
             break; 
        case 'E':
           // printf("1110"); break;
            outputFile << "1110" << endl;
             break; 
        case 'F':
            //printf("1111"); break;
             outputFile << "1111" << endl;
              break; 
        case 'a':
           // printf("1010"); break;
            outputFile << "1010" <<  endl;
             break; 
        case 'b':
            //printf("1011"); break;
            outputFile << "1011" << endl;
             break; 
        case 'c':
            //printf("1100"); break;
            outputFile << "1100" <<  endl;
             break; 
        case 'd':
            //printf("1101"); break;
            outputFile << "1101" << endl;
             break; 
        case 'e':
            //printf("1110"); break;
            outputFile << "1101" << endl ;
             break; 
        case 'f':
            //printf("1111"); break;
            outputFile << "1111" << endl;
             break;
        case '\0':
        	outputFile << "0000" << endl;
        	break;
        default:
            //outputFile << "\n Invalid hexa digit"<< endl;
             break; 
            //return 0;
            
        }
       myfile.get(ch); 
       
       
       
    
     // cout << line << '\n';
     
    
  }
  myfile.close();
  }
// Binary to Hex 
  
 ifstream myfile2 ("binary.txt");
  
  ofstream outputFile2;
  outputFile2.open("hex-jpg.txt");
  string line, binary_hex;
  
  if (myfile2.is_open())
  {
  
  	
	
     while ( !myfile.eof())
	{	
		cout << line << endl ;
		getline (myfile2,line);
		
		int j = 1;
		while(j<=4)
		{
			binary_hex += line;
			getline (myfile2,line);
			j++;
		}
		cout << binary_hex << endl;
		string binary_str(binary_hex);
		
		bitset<16> set(binary_str);
		//outputFile2 << hex << set.to_ulong()<< endl;	
		cout << hex << set.to_ulong()<< endl; 
	}
	

   } myfile2.close();
return 0;  
}    
	
  