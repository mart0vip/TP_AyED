#include <iostream>
#include <string>
#include <string.h>
#include <ctime>
#include <cstdlib>
using namespace std;

#include "Ejercicio1.hpp"
#include "Ejercicio2.hpp"
#include "Ejercicio3.hpp"


void cargarGruposEnVector(Consolidado vecGrupos[], GenerarArchivo regGrupo, Consolidado gruposConsolidado, int &lenGrupos)
{

	FILE * grupoA = fopen("GrupoA.dat", "rb");
	FILE * grupoB = fopen("GrupoB.dat", "rb");
	FILE * grupoC = fopen("GrupoC.dat", "rb");
	FILE * grupoD = fopen("GrupoD.dat", "rb");
	FILE * grupoE = fopen("GrupoE.dat", "rb");
	FILE * grupoF = fopen("GrupoF.dat", "rb");
	FILE * grupoG = fopen("GrupoG.dat", "rb");
	FILE * grupoH = fopen("GrupoH.dat", "rb");
	
    
    fread(&regGrupo, sizeof(GenerarArchivo), 1, grupoA);	
	while (!feof(grupoA))
	{
		gruposConsolidado.numGrupo = regGrupo.numGrupo;
		strcpy(gruposConsolidado.equipo.nombre, regGrupo.equipo.nombre);
		strcpy(gruposConsolidado.equipo.federacion, regGrupo.equipo.federacion);
		strcpy(gruposConsolidado.letra,"A");
		insertarOrdenado(vecGrupos,lenGrupos,gruposConsolidado);
  		fread(&regGrupo,sizeof(GenerarArchivo),1, grupoA);
	}

	
	fread(&regGrupo, sizeof(GenerarArchivo), 1, grupoB);	
	while (!feof(grupoB))
	{
		gruposConsolidado.numGrupo = regGrupo.numGrupo;
		strcpy(gruposConsolidado.equipo.nombre, regGrupo.equipo.nombre);
		strcpy(gruposConsolidado.equipo.federacion, regGrupo.equipo.federacion);
		strcpy(gruposConsolidado.letra,"B");
		insertarOrdenado(vecGrupos,lenGrupos,gruposConsolidado);
  		fread(&regGrupo,sizeof(GenerarArchivo),1, grupoB);
	}
	
	//REPETIDO
	
/*	fread(&regGrupo, sizeof(GenerarArchivo), 1, grupoB);	
	while (!feof(grupoB))
	{
		gruposConsolidado.numGrupo = regGrupo.numGrupo;
		strcpy(gruposConsolidado.equipo.nombre, regGrupo.equipo.nombre);
		strcpy(gruposConsolidado.equipo.federacion, regGrupo.equipo.federacion);
		insertarOrdenado(vecGrupos,lenGrupos,gruposConsolidado);
  		fread(&regGrupo,sizeof(GenerarArchivo),1, grupoB);
	}*/ 
	
	fread(&regGrupo, sizeof(GenerarArchivo), 1, grupoC);	
	while (!feof(grupoC))
	{
		gruposConsolidado.numGrupo = regGrupo.numGrupo;
		strcpy(gruposConsolidado.equipo.nombre, regGrupo.equipo.nombre);
		strcpy(gruposConsolidado.equipo.federacion, regGrupo.equipo.federacion);
		strcpy(gruposConsolidado.letra,"C");
		insertarOrdenado(vecGrupos,lenGrupos,gruposConsolidado);
  		fread(&regGrupo,sizeof(GenerarArchivo),1, grupoC);
	}
	
	fread(&regGrupo, sizeof(GenerarArchivo), 1, grupoD);	
	while (!feof(grupoD))
	{
		gruposConsolidado.numGrupo = regGrupo.numGrupo;
		strcpy(gruposConsolidado.equipo.nombre, regGrupo.equipo.nombre);
		strcpy(gruposConsolidado.equipo.federacion, regGrupo.equipo.federacion);
		strcpy(gruposConsolidado.letra,"D");
		insertarOrdenado(vecGrupos,lenGrupos,gruposConsolidado);
  		fread(&regGrupo,sizeof(GenerarArchivo),1, grupoD);
	}
	
	fread(&regGrupo, sizeof(GenerarArchivo), 1, grupoE);	
	while (!feof(grupoE))
	{
		gruposConsolidado.numGrupo = regGrupo.numGrupo;
		strcpy(gruposConsolidado.equipo.nombre, regGrupo.equipo.nombre);
		strcpy(gruposConsolidado.equipo.federacion, regGrupo.equipo.federacion);
		strcpy(gruposConsolidado.letra,"E");
		insertarOrdenado(vecGrupos,lenGrupos,gruposConsolidado);
  		fread(&regGrupo,sizeof(GenerarArchivo),1, grupoE);
	}
	
	fread(&regGrupo, sizeof(GenerarArchivo), 1, grupoF);	
	while (!feof(grupoF))
	{
		gruposConsolidado.numGrupo = regGrupo.numGrupo;
		strcpy(gruposConsolidado.equipo.nombre, regGrupo.equipo.nombre);
		strcpy(gruposConsolidado.equipo.federacion, regGrupo.equipo.federacion);
		strcpy(gruposConsolidado.letra,"F");
		insertarOrdenado(vecGrupos,lenGrupos,gruposConsolidado);
  		fread(&regGrupo,sizeof(GenerarArchivo),1, grupoF);
	}
	
	fread(&regGrupo, sizeof(GenerarArchivo), 1, grupoG);	
	while (!feof(grupoG))
	{
		gruposConsolidado.numGrupo = regGrupo.numGrupo;
		strcpy(gruposConsolidado.equipo.nombre, regGrupo.equipo.nombre);
		strcpy(gruposConsolidado.equipo.federacion, regGrupo.equipo.federacion);
		strcpy(gruposConsolidado.letra,"G");
		insertarOrdenado(vecGrupos,lenGrupos,gruposConsolidado);
  		fread(&regGrupo,sizeof(GenerarArchivo),1, grupoG);
	}
	
	fread(&regGrupo, sizeof(GenerarArchivo), 1, grupoH);	
	while (!feof(grupoH))
	{
		gruposConsolidado.numGrupo = regGrupo.numGrupo;
		strcpy(gruposConsolidado.equipo.nombre, regGrupo.equipo.nombre);
		strcpy(gruposConsolidado.equipo.federacion, regGrupo.equipo.federacion);
		strcpy(gruposConsolidado.letra,"H");
		insertarOrdenado(vecGrupos,lenGrupos,gruposConsolidado);
  		fread(&regGrupo,sizeof(GenerarArchivo),1, grupoH);
	}
	
	fclose(grupoA);
	fclose(grupoB);
	fclose(grupoC);
	fclose(grupoD);
	fclose(grupoE);
	fclose(grupoF);
	fclose(grupoG);
	fclose(grupoH);
	
	
    return;
}

void mostrarVectorGruposConsolidado(Consolidado vecGrupos[], int lenConsolidado)
{


    	cout<< "------------------------------------------------"<<endl;	
	for (int i = 0; i < lenConsolidado; i++){


    	cout  << "Grupo: "<< vecGrupos[i].letra << " (" << vecGrupos[i].numGrupo << ")" << endl;
		cout << "Fed: " << vecGrupos[i].equipo.federacion << " // Nom: " << vecGrupos[i].equipo.nombre << endl;
    	cout<< "------------------------------------------------"<<endl;
	}
			

	return;
}

void ordenaVectorPorFederacion(Consolidado vecGrupos[], int lenConsolidado) //Funcion que ordena el vector por federacion.
{
Consolidado temp;   

    for ( int i = 0; i < lenConsolidado; i++ ){
    	
        for ( int j = i + 1; j < lenConsolidado; j++ ){

            // strcoll() devuelve -1 si el 1� parametro es mayor que el 2�, 0 si el 1� es igual al 2�, o

            //1 si el 1� mayor que el 2�. Lo hace caracter a caracter hasta encontrar una diferencia o un nulo que es cuando retorna uno de los valores mensionados.
          
            if ( ( strcoll(/*1�*/ vecGrupos[i].equipo.federacion, /*2�*/vecGrupos[j].equipo.federacion) ) > 0 ) {

                //esto va subiendo los nombres a la cabeza de la lista
        	        
			//ordenado general para todos
			
				strcpy(temp.letra, vecGrupos[i].letra);
								
                temp.equipo = vecGrupos[i].equipo;

                vecGrupos[i].equipo = vecGrupos[j].equipo;
				strcpy (vecGrupos[i].letra, vecGrupos[j].letra);

                vecGrupos[j].equipo = temp.equipo;
				strcpy (vecGrupos[j].letra, temp.letra);
            }
        }

    }        
	
	return;

}

void ordenaVectorPorNombre(Consolidado vecGrupos[], int lenConsolidado)
{
	
Consolidado temp;   

    for ( int i = 0; i < lenConsolidado; i++ ){
    	
        for ( int j = i + 1; j < lenConsolidado; j++ ){

            // strcoll() devuelve -1 si el 1� parametro es mayor que el 2�, 0 si el 1� es igual al 2�, o

            //1 si el 1� mayor que el 2�. Lo hace caracter a caracter hasta encontrar una diferencia o un nulo que es cuando retorna uno de los valores mensionados.
          
            if ( ( strcoll(/*1�*/ vecGrupos[i].equipo.nombre, /*2�*/vecGrupos[j].equipo.nombre) ) > 0 ) {

                //esto va subiendo los nombres a la cabeza de la lista
        	        
			//ordenado general para todo
			
				strcpy(temp.letra, vecGrupos[i].letra);
								
                temp.equipo = vecGrupos[i].equipo;

                vecGrupos[i].equipo = vecGrupos[j].equipo;
				strcpy (vecGrupos[i].letra, vecGrupos[j].letra);

                vecGrupos[j].equipo = temp.equipo;
				strcpy (vecGrupos[j].letra, temp.letra);

            }
        }

    }

    return;
}


void ordenaVectorPorGrupo(Consolidado vecGrupos[], int lenConsolidado) // lo h
{
	
Consolidado temp;   

    for ( int i = 0; i < lenConsolidado; i++ ){
    	
        for ( int j = i + 1; j < lenConsolidado; j++ ){

            // strcoll() devuelve -1 si el 1� parametro es mayor que el 2�, 0 si el 1� es igual al 2�, o

            //1 si el 1� mayor que el 2�. Lo hace caracter a caracter hasta encontrar una diferencia o un nulo que es cuando retorna uno de los valores mensionados.
          
            if ( ( strcoll(/*1�*/ vecGrupos[i].letra, /*2�*/vecGrupos[j].letra) ) > 0 ) {

                //esto va subiendo los nombres a la cabeza de la lista
        	        
			//ordenado general para todo
			
				strcpy(temp.letra, vecGrupos[i].letra);
								
                temp.equipo = vecGrupos[i].equipo;

                vecGrupos[i].equipo = vecGrupos[j].equipo;
				strcpy (vecGrupos[i].letra, vecGrupos[j].letra);

                vecGrupos[j].equipo = temp.equipo;
				strcpy (vecGrupos[j].letra, temp.letra);
            }
        }

    }
        cout<< "____________________________________________________\n"<<endl;
		cout << "Mostrando los equipos ordenados por GRUPO:\n";
    	cout<< "____________________________________________________\n"<<endl;

    mostrarVectorGruposConsolidado(vecGrupos, lenConsolidado);
    return;
}



void insertar(Consolidado vecGrupos[], int &lenGrupos, Consolidado gruposConsolidado, int pos)
{

	for (int i=lenGrupos-1; i>=pos; i--)
	{
		vecGrupos[i+1]=vecGrupos[i];
	}
	
	vecGrupos[pos] = gruposConsolidado;
	lenGrupos ++;
	return;
}

int insertarOrdenado(Consolidado vecGrupos[], int &lenGrupos, Consolidado gruposConsolidado)
{
	int i=0;

	while(i < lenGrupos && vecGrupos[i].numGrupo <= gruposConsolidado.numGrupo) {
		i++;
	}	
	
	insertar(vecGrupos, lenGrupos, gruposConsolidado, i);
	return i;
	
}
