#include <iostream>
#include "tinyxml2.h"

using namespace tinyxml2;
using namespace std;
int main()
{

char * element = "<html><head><body><a href='gabriel'></a> hello everybody</body></head></html>";
XMLDocument doc;
doc.Parse(element);
cout << doc.FirstChildElement("head")->FirstChildElement("body")->GetText();


/*
    XMLDocument doc;
    doc.LoadFile( "test.xml" );

    const char* title = doc.FirstChildElement( "PLAY" )->FirstChildElement( "TITLE" )->GetText();
    cout<< "Name of play (1):"<<title<<endl;


    XMLText* textNode = doc.FirstChildElement( "PLAY" )->FirstChildElement( "TITLE" )->FirstChild()->ToText();
    title = textNode->Value();
    cout << "Name of play (2):"<< title<<endl;
*/  
  return 0;
}
