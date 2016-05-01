#include <iostream>
#include <string>
#include "curl/include/curl/curl.h"


static size_t writeUrlContent(void* content,size_t size,size_t mmemb,void* userp)
{
((std::string*)userp)->append((char*)content,size* mmemb);
	return size*mmemb;
}

int main(){
  std::string readBuffer;
  CURL *curl;
  CURLcode res;
 
  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "http://nn7.free.fr");
    //curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl,CURLOPT_WRITEFUNCTION,writeUrlContent);
    curl_easy_setopt(curl,CURLOPT_WRITEDATA,&readBuffer);	
    res = curl_easy_perform(curl);
   /*
    if(res != CURLE_OK)
      fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
    */
    curl_easy_cleanup(curl);
    
std::cout << "BEGINNE the buffer is "<<readBuffer<<" *********"<<std::endl;   
}
return 0;
}


