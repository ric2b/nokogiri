#ifndef NOKOGIRI_XML_DOCUMENT
#define NOKOGIRI_XML_DOCUMENT

#include <native.h>

void init_xml_document();
VALUE Nokogiri_wrap_xml_document(xmlDocPtr doc);

extern VALUE cNokogiriXmlDocument ;
#endif
