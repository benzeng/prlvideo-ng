
void _xmlFreeDocElementContent(xmlDocPtr doc,xmlElementContentPtr cur)

{
  _xmlElementContent *p_Var1;
  int iVar2;
  xmlElementContentPtr local_28;
  xmlDictPtr local_10;
  
  local_10 = (xmlDictPtr)0x0;
  local_28 = cur;
  if (doc != (xmlDocPtr)0x0) {
    local_10 = doc->dict;
    local_28 = cur;
  }
  while( true ) {
    if (local_28 == (xmlElementContentPtr)0x0) {
      return;
    }
    p_Var1 = local_28->c2;
    if (3 < local_28->type - XML_ELEMENT_CONTENT_PCDATA) break;
    if (local_28->c1 != (_xmlElementContent *)0x0) {
      _xmlFreeDocElementContent(doc,local_28->c1);
    }
    if (local_10 == (xmlDictPtr)0x0) {
      if (local_28->name != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_28->name);
      }
      if (local_28->prefix != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_28->prefix);
      }
    }
    else {
      if ((local_28->name != (xmlChar *)0x0) &&
         (iVar2 = _xmlDictOwns(local_10,local_28->name), iVar2 == 0)) {
        (*(code *)_xmlFree)(local_28->name);
      }
      if ((local_28->prefix != (xmlChar *)0x0) &&
         (iVar2 = _xmlDictOwns(local_10,local_28->prefix), iVar2 == 0)) {
        (*(code *)_xmlFree)(local_28->prefix);
      }
    }
    (*(code *)_xmlFree)(local_28);
    local_28 = p_Var1;
  }
  FUN_100183b80(0,1,"Internal: ELEMENT content corrupted invalid type\n",0);
  return;
}

