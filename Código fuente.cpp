#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main (){
struct stRegistro{
int ofstream;

	char nombre[32];
	char apellido[2][32];
	char telefono[12];
	char calle[45];
	int numero;
	char ciudad[32];
	char fechanacimiento[9]; // Formato AAMMDD.
	char estadoCivil;
	int hijos;
};

	ofstream myfile ("example.txt");
	  if (myfile.is_open())
	  {
	    myfile << "This is a line.\n";
	    myfile << "This is another line.\n";
	    myfile.close();
	  } else cout << "Unable to open file";


          return 0;
    }
