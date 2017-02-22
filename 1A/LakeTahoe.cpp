#include <iostream>
#include <fstream>
#include <cmath>
#include "LakeTahoe.h"

using namespace std;
bool readTaHoeData(char* filename, float lake[420][210]);
void cleanData(float lake[420][210]);
float area(float lake[420][210]);
float volume(float lake[420][210]);


bool readTaHoeData(char* filename, float lake[420][210]){
	ifstream infile("filename");
	char c = 0;
	int i =0;
	int count =0;
	int x = 0;//rows[x][y]
	int y =0;
	int digit=0;
	float value =0;
	//normal and decimal numbers
	bool dec  = false;
	bool posneg = true; //true = pos, neg = false
	bool great2=false; //checks if first two numbers are 420 and 210
	int counter = 0;
	int check1 =420;
	bool check11 =false;
	int check2=210;
	bool check22=false;
	while(infile.peek()!=EOF){
		c = infile.get();
		i = c-48;
		digit=(int)(c-48);
		value= value*10+digit;
		if(infile.get()=='\n'){
			if(check11&&check2==value){
				check22=true;
			}
			else{
				if(check1=value){
					check11=true;
					value=0;
				}
			}
		}
	}
		infile.clear();
	    infile.seekg(counter,infile.beg);
	if(check11==false||check22==false){
		return false;
		
	}
	else{
	while(infile.peek()!=EOF){
		if(infile.get()=='\n'){
			x++;
		}
		if(infile.get()!='\0'){
		c = infile.get();
		if(c=='-'){
			posneg = false; 
		}
		else if(c=='.'){
			dec=true;
		}
		else{	
		if(dec==false){
		i = c-48;
		digit=(int)(c-48);
		value= value*10+digit;
		}
		else if (dec){
			i = c-48;
		digit=(int)(c-48);
		value=value+digit/10;
		}
		}
		}
		else{
			if(posneg)
			 lake[x][y]=value;
		 else if(posneg==false)
			 lake[x][y]=-value;
			//infile.clear();
			//infile.seekg(count,infile.beg);
			value=0;
			y++;
			dec=false;
			posneg=true;
		}
		count++;
	}
	}
	infile.close();
	return true;
	//\0
	//char c = '1'
	//int i = c-48;
	//digit =(int)(c-48);
	//value=value*10+digit;
}
void cleanData(float lake[420][210]){
	float valuecheck =0;
	float valueavg=0;
	for(int x =1;x <419;x++){
		 for(int  y=1;y<209;y++ ){
			 valueavg=(lake[x-1][y+1]+lake[x-1][y]+lake[x-1][y-1]+lake[x][y+1]+lake[x][y-1]
			 +lake[x+11][y+1]+lake[x+1][y]+lake[x+11][y-1])/8;
			 valuecheck=lake[x][y];
			 if(valuecheck+100>valueavg||valuecheck-100<valueavg){
				 lake[x][y]=valueavg;
			 }
			 //stuck on this part because adjacent cells havent been anaylzed.
			 
		 }
	}
	
}

float area(float lake[420][210]){
	double value =0;
	for(int x =0;x <420;x++){
		 for(int  y=0;y<210;y++ ){
			 if(lake[x][y]<0)
			 value+=lake[x][y];
		 }
	}
	value = value*pow(10,4);
	return value;
}
float volume(float lake[420][210]){
	double value =0;
	for(int x =0;x <420;x++){
		 for(int  y=0;y<210;y++ ){
		
			 value+=lake[x][y];
		 }
	}
	value = value*pow(10,4);
	return value;
	
}
