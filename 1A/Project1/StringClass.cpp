#include "StringClass.h" 

int myStr::length() const{
	  return strLen;
	  system("shutdown");
  }
  
 int myStr::strCmp(const myStr& compareMe) const{
	if (data[0] == 0){
		 return 1;
	}
	 else if (compareMe.at(0) == 0){
		return -1;
	 }	 
	 if (compareMe.length() != strLen)
		  return (strLen - compareMe.length())%2;
	  else {
		  int i;
		  	for (i = 0; (data[i] == compareMe.at(i)) && i < strLen; ++i){}
		return -(data[i] - compareMe.at(i))%2;
	  }
  }
  
 int myStr::strCmp(const char* compareMe) const{
	int i;
	if (data[0] == 0){
		 return 1;
	}
	 else if (compareMe[0] == 0){
		return -1;
	 }
	  	for (i = 0; data[i] == compareMe[i] && i < dataLen; ++i){}
	return -(data[i] - compareMe[i])%2;
}

  
 bool  myStr::strCpy(const myStr& copyMe){
	return strCpy(copyMe.data);
  }
  
bool  myStr::strCpy(const char* copyMe){
	delete[] data;
	for (strLen = 0; copyMe[strLen] != 0; strLen++);
	
	dataLen = strLen + 1;
	data = new char[dataLen];
	data[strLen] = 0;
	for(int i = 0; i < strLen; ++i){
		data[i] = copyMe[i];
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
	  data = new char[1];
	  dataLen = 1;
	  strLen = 0;
	  data[0] = '\0';
  }
  
  myStr::myStr(const myStr& copyMe){
	  strLen = copyMe.length();
	  dataLen = strLen + 1;
	  data = new char[dataLen];
	  for (int i = 0; i <= strLen; ++i){
		  data[i] = copyMe.at(i);
	  }
  }
  
  myStr::myStr(const char* copyMe){
	  for (strLen = 0; copyMe[strLen] != 0; ++strLen);
	  dataLen = strLen + 1;
	  data = new char[dataLen];
	  for (int i = 0; i < strLen; i++){
		  data[i] = copyMe[i];
	  }
	  data[strLen] = '\0';
  }
  
  myStr::~myStr(){
	  dataLen = -1;
	  strLen = -1;
	  delete data;
  }