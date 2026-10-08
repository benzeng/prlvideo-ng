
void _xmlNodeSetBase(xmlNodePtr cur,xmlChar *uri)

{
  xmlNsPtr ns;
  xmlChar *pxVar1;
  ulong uVar2;
  
  if (cur == (xmlNodePtr)0x0) {
    return;
  }
  if (cur->type < (XML_XINCLUDE_END|XML_ATTRIBUTE_NODE)) {
    uVar2 = 1L << ((byte)cur->type & 0x3f);
    if ((uVar2 & 0x1fddf8) != 0) {
      return;
    }
    if ((uVar2 & 0x202200) != 0) {
      if (cur[1].name != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(cur[1].name);
      }
      if (uri == (xmlChar *)0x0) {
        cur[1].name = (xmlChar *)0x0;
        return;
      }
      pxVar1 = _xmlStrdup(uri);
      cur[1].name = pxVar1;
      return;
    }
  }
  ns = _xmlSearchNsByHref(cur->doc,cur,(xmlChar *)"http://www.w3.org/XML/1998/namespace");
  if (ns != (xmlNsPtr)0x0) {
    _xmlSetNsProp(cur,ns,(xmlChar *)"base",uri);
  }
  return;
}

