
void _xmlNodeSetLang(xmlNodePtr cur,xmlChar *lang)

{
  xmlNsPtr ns;
  
  if (((cur != (xmlNodePtr)0x0) && (0x12 < cur->type - XML_TEXT_NODE)) &&
     (ns = _xmlSearchNsByHref(cur->doc,cur,(xmlChar *)"http://www.w3.org/XML/1998/namespace"),
     ns != (xmlNsPtr)0x0)) {
    _xmlSetNsProp(cur,ns,(xmlChar *)"lang",lang);
  }
  return;
}

