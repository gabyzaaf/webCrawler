#include <iostream>
#include <libxml++/libxml++.h>

using namespace std;
using namespace Glib;
using namespace xmlpp;

int main(int argc, char* argv[])
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

    // Print attribute value
    cout << attributeValue << endl;
   }
}
