#include <iostream>
#include <string>
#include "curl/include/curl/curl.h"


static size_t writeUrlContent(void* content,size_t size,size_t mmemb,void* userp)
{
((std::string*)userp)->append((char*)content,size* mmemb);
	return size*mmemb;
}
 static ustring parseBody(size_t content)
 {
 // Parse the file
    DomParser parser;
    //parser.parse_file("file.xml");
    parser.parse_memory("<html><head><a href='http://gabriel.com'> mon site </a><a href='http://free.fr'> mon site 2 </a></head></html>");
    Node* rootNode = parser.get_document()->get_root_node();

    // Xpath query
    NodeSet result = rootNode->find("/html/head/a/@href");

    // Get first node from result
    for(int i = 0;i<result.size();i++){
    Node *firstNodeInResult = result.at(i);
    // Cast to Attribute node (dynamic_cast on reference can throw [fail fast])
    Attribute &attribute = dynamic_cast<Attribute&>(*firstNodeInResult);
    
    // Get value of the attribute
    ustring attributeValue = attribute.get_value();
	}

    return attributeValue;
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


