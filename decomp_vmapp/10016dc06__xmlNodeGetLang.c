
xmlChar * _xmlNodeGetLang(xmlNodePtr cur)

{
  xmlChar *pxVar1;
  xmlNodePtr local_20;
  
  local_20 = cur;
  while( true ) {
    if (local_20 == (xmlNodePtr)0x0) {
      return (xmlChar *)0x0;
    }
    pxVar1 = _xmlGetNsProp(local_20,(xmlChar *)"lang",
                           (xmlChar *)"http://www.w3.org/XML/1998/namespace");
    if (pxVar1 != (xmlChar *)0x0) break;
    local_20 = local_20->parent;
  }
  return pxVar1;
}

