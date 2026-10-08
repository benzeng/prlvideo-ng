
void _xmlNodeSetName(xmlNodePtr cur,xmlChar *name)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlDictPtr local_10;
  
  if (((cur != (xmlNodePtr)0x0) && (name != (xmlChar *)0x0)) &&
     ((XML_DOCB_DOCUMENT_NODE < cur->type || ((1L << ((byte)cur->type & 0x3f) & 0x3c3d18U) == 0))))
  {
    if (cur->doc == (_xmlDoc *)0x0) {
      local_10 = (xmlDictPtr)0x0;
    }
    else {
      local_10 = cur->doc->dict;
    }
    if (local_10 == (xmlDictPtr)0x0) {
      if (cur->name != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(cur->name);
      }
      pxVar2 = _xmlStrdup(name);
      cur->name = pxVar2;
    }
    else {
      if (cur->name != (xmlChar *)0x0) {
        iVar1 = _xmlDictOwns(local_10,cur->name);
        if (iVar1 == 0) {
          (*(code *)_xmlFree)(cur->name);
        }
      }
      pxVar2 = _xmlDictLookup(local_10,name,-1);
      cur->name = pxVar2;
    }
  }
  return;
}

