#include <map>
#include <iostream>
#include <string>
#include "WebHtml.h"
#include <vector>
#include "WebCrawler.h"

using namespace std;


int main(){

vector<WebHtml> listeElement;
WebHtml w("hello","content");
map<string,string> maplist1;



WebHtml x("coucou","the coucou content");
WebHtml y("yahoo","the present yahoo");

listeElement.push_back(w);
listeElement.push_back(x);
listeElement.push_back(y);

Application app(listeElement);
app.check_vector();




return 0;
}
