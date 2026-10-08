
int _xmlTextConcat(xmlNodePtr node,xmlChar *content,int len)

{
  int iVar1;
  xmlChar *pxVar2;
  int local_20;
  
  if (node == (xmlNodePtr)0x0) {
    return -1;
  }
  if ((node->type != XML_TEXT_NODE) && (node->type != XML_CDATA_SECTION_NODE)) {
    return -1;
  }
  if (((_xmlAttr **)node->content == &node->properties) ||
     (((node->doc != (_xmlDoc *)0x0 && (node->doc->dict != (_xmlDict *)0x0)) &&
      (iVar1 = _xmlDictOwns(node->doc->dict,node->content), iVar1 != 0)))) {
    pxVar2 = _xmlStrncatNew(node->content,content,len);
    node->content = pxVar2;
  }
  else {
    pxVar2 = _xmlStrncat(node->content,content,len);
    node->content = pxVar2;
  }
  node->properties = (_xmlAttr *)0x0;
  if (node->content == (xmlChar *)0x0) {
    local_20 = -1;
  }
  else {
    local_20 = 0;
  }
  return local_20;
}

