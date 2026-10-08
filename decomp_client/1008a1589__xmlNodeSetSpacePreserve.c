
void _xmlNodeSetSpacePreserve(xmlNodePtr cur,int val)

{
  xmlNsPtr ns;
  
  if (((cur != (xmlNodePtr)0x0) && (0x12 < cur->type - XML_TEXT_NODE)) &&
     (ns = _xmlSearchNsByHref(cur->doc,cur,(xmlChar *)"http://www.w3.org/XML/1998/namespace"),
     ns != (xmlNsPtr)0x0)) {
    if (val == 0) {
      _xmlSetNsProp(cur,ns,(xmlChar *)"space",(xmlChar *)"default");
    }
    else if (val == 1) {
      _xmlSetNsProp(cur,ns,(xmlChar *)"space",(xmlChar *)"preserve");
    }
  }
  return;
}

