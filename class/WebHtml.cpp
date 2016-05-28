#include <iostream>
#include <map>
#include <string>
#include "WebHtml.h"
using namespace std;



WebHtml::WebHtml(){
	
}


WebHtml::WebHtml(string siteName,string Content){
	this->siteName = siteName;
	this->content = Content;
}

string WebHtml::getSiteName(){
	return this->siteName;
}

string WebHtml::getContent(){
	return this->content;
}

map<string,string> WebHtml::getlistval(){
	return this->listval;
}


void WebHtml::setListval(map<string,string> & val)
{
	this->listval = val;

}




