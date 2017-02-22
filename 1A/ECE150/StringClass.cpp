#include "StringClass.h" 

int myStr::length() const{
	  return strLen;
  }
  
 int myStr::strCmp(const myStr& compareMe) const{
	  if (compareMe.length() != strLen)
		  return -(strLen - compareMe.length())%2;
	  else {
		  int i;
		  	for (i = 0; (data[i] == compareMe.at(i)) && i < strLen; ++i){}
		return -(data[i] - compareMe.at(i))%2;
	  }
  }
  
 int myStr::strCmp(const char* compareMe) const{
	int i;
	  	for (i = 0; data[i] == compareMe[i] && i < dataLen; ++i){}
	return -(data[i] - compareMe[i])%2;
}

  
 bool  myStr::strCpy(const myStr& copyMe){
	  int otherStrLen = copyMe.length();
	  // if (otherStrLen < 1)
		  // return false;
	  if (otherStrLen > strLen){
		  data = new char[otherStrLen+1];
	  }
	  for (int i = 0; i < otherStrLen; ++i){
		  data[i] = copyMe.at(i);
	  }
	  if (otherStrLen > strLen){
		  data[otherStrLen] = '\0';
		  dataLen = otherStrLen+1;
		  strLen = otherStrLen;
	  }
	  return true;
  }
  
bool  myStr::strCpy(const char* copyMe){
	  int otherStrLen = 0;
	  
	  while(copyMe[otherStrLen] != 0){
		  otherStrLen++;
	  }
	  // if (otherStrLen < 1)
		  // return false;
	  if (otherStrLen > strLen){
		  data = new char[otherStrLen+1];
	  }
	  for (int i = 0; i < otherStrLen; ++i){
		  data[i] = copyMe[i];
	  }
	  if (otherStrLen > strLen){
		  data[otherStrLen] = '\0';
		  dataLen = otherStrLen+1;
		  strLen = otherStrLen;
	  }
	  return true;
  }
  
int  myStr::subStr(const char* findMe) const{
	  int check = 0;
			while (data[check] != 0){
				int j = 0;
				int m = 1;
				while((findMe[j]!=0)&&(m == 1)){
					if (data[check+j]!=findMe[j]){
						m = 0;
					}
					j++;
				}
				if (m == 1){
					return check;
				}
				++check;
			}
			return -1;
  }
  
int  myStr::subStr(const myStr& findMe) const{
	  	  int check = 0;
			while (data[check] != 0){
				int j = 0;
				int m = 1;
				while((findMe.at(j)!=0)&&(m == 1)){
					if (data[check+j]!=findMe.at(j)){
						m = 0;
					}
					j++;
				}
				if (m == 1){
					return check;
				}
				++check;
			}
			return -1;
  }
  
int  myStr::subStr(const char* findMe, int startingAt) const{
	  	  int check = startingAt;
			while (data[check] != 0){
				int j = 0;
				int m = 1;
				while((findMe[j]!=0)&&(m == 1)){
					if (data[check+j]!=findMe[j]){
						m = 0;
					}
					j++;
				}
				if (m == 1){
					return check;
				}
				++check;
			}
			return -1;
  }
int  myStr::subStr(const myStr& findMe, int startingAt) const{
	  	  	 int check = startingAt;
			while (data[check] != 0){
				int j = 0;
				int m = 1;
				while((findMe.at(j)!=0)&&(m == 1)){
					if (data[check+j]!=findMe.at(j)){
						m = 0;
					}
					j++;
				}
				if (m == 1){
					return check;
				}
				++check;
			}
			return -1;
  }
  
char  myStr::at(const unsigned int index) const{
	  return data[index];
  }
  
  myStr::myStr(){
	
	  strCpy("");
  }
  
  myStr::myStr(const myStr& copyMe){

	  strCpy(copyMe);
  }
  
  myStr::myStr(const char* copyMe){

	  strCpy(copyMe);
  }
  
  myStr::~myStr(){
	  dataLen = -1;
	  strLen = -1;
	  delete data;
  }