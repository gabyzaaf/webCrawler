#include <iostream>
#include <string>
#include "WebCrawler.h"
#include "WebHtml.h"
#include <vector>
using namespace std;

Application::Application(vector<WebHtml> & vector_html){
	this->vector_html = vector_html;
}

Application::Application(){

}

void Application::check_vector(){
	while(vector_html.size()!=0){
		cout << "Element --> " <<vector_html[0].getContent()<<endl;
		vector_html.erase(vector_html.begin());
	}
}





