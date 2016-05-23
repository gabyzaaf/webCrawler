#include <iostream>
#include "tinyxml2.h"

using namespace tinyxml2;

int main()
{

    XMLDocument doc;
    doc.LoadFile( "test.xml" );

    const char* title = doc.FirstChildElement( "PLAY" )->FirstChildElement( "TITLE" )->GetText();
    printf( "Name of play (1): %s\n", title );


    XMLText* textNode = doc.FirstChildElement( "PLAY" )->FirstChildElement( "TITLE" )->FirstChild()->ToText();
    title = textNode->Value();
    printf( "Name of play (2): %s\n", title );
    return 0;
}
