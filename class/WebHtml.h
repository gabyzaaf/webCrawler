#ifndef WEB_H
#define WEB_H
#include <map>
#include <iostream>
#include <string>

class WebHtml{

	private:
	std::string siteName;
	std::string content;
	std::map<std::string,std::string> listval;
	
	public:
	WebHtml();
	WebHtml(std::string siteName,std::string Content);
	std::string getSiteName();
	std::string getContent();
	std::map<std::string,std::string> getlistval();
	void setListval(std::map<std::string,std::string> & val);
	



};

#endif
