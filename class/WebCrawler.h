#include <iostream>
#include <string>
#include "WebHtml.h"
#include <vector>
class Application{

	std::vector<WebHtml> vector_html;
	
	public:
	Application();
	Application(std::vector<WebHtml> & vector_html);
	void check_vector();

};



