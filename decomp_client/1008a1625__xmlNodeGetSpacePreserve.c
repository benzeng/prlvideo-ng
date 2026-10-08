
int _xmlNodeGetSpacePreserve(xmlNodePtr cur)

{
  int iVar1;
  xmlChar *str1;
  xmlNodePtr local_20;
  
  local_20 = cur;
  do {
    if (local_20 == (xmlNodePtr)0x0) {
      return -1;
    }
    str1 = _xmlGetNsProp(local_20,(xmlChar *)"space",
                         (xmlChar *)"http://www.w3.org/XML/1998/namespace");
    if (str1 != (xmlChar *)0x0) {
      iVar1 = _xmlStrEqual(str1,(xmlChar *)"preserve");
      if (iVar1 != 0) {
        (*(code *)_xmlFree)(str1);
        return 1;
      }
      iVar1 = _xmlStrEqual(str1,(xmlChar *)"default");
      if (iVar1 != 0) {
        (*(code *)_xmlFree)(str1);
        return 0;
      }
      (*(code *)_xmlFree)(str1);
    }
    local_20 = local_20->parent;
  } while( true );
}

