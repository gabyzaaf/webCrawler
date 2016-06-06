#include <iostream>
#include <string>
#include "curl/include/curl/curl.h"


static size_t writeUrlContent(void* content,size_t size,size_t mmemb,void* userp)
{
((std::string*)userp)->append((char*)content,size* mmemb);
	return size*mmemb;
}



std::string readHtmlFile(std::string url){
  std::string readBuffer;
  CURL *curl;
  CURLcode res;
 
  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl,CURLOPT_WRITEFUNCTION,writeUrlContent);
    curl_easy_setopt(curl,CURLOPT_WRITEDATA,&readBuffer);	
    res = curl_easy_perform(curl);
    
}
return  readBuffer;
}

int main(){

std::cout << readHtmlFile("http://www.fnac.com/") << std::endl;


return 0;
}
