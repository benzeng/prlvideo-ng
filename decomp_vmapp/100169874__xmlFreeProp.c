
void _xmlFreeProp(xmlAttrPtr cur)

{
  int iVar1;
  xmlDeregisterNodeFunc *ppxVar2;
  xmlDictPtr local_10;
  
  local_10 = (xmlDictPtr)0x0;
  if (cur != (xmlAttrPtr)0x0) {
    if (cur->doc != (_xmlDoc *)0x0) {
      local_10 = cur->doc->dict;
    }
    if ((___xmlRegisterCallbacks != 0) &&
       (ppxVar2 = ___xmlDeregisterNodeDefaultValue(), *ppxVar2 != (xmlDeregisterNodeFunc)0x0)) {
      ppxVar2 = ___xmlDeregisterNodeDefaultValue();
      (**ppxVar2)((xmlNodePtr)cur);
    }
    if ((cur->doc != (_xmlDoc *)0x0) && (cur->atype == XML_ATTRIBUTE_ID)) {
      _xmlRemoveID(cur->doc,cur);
    }
    if (cur->children != (_xmlNode *)0x0) {
      _xmlFreeNodeList(cur->children);
    }
    if ((cur->name != (xmlChar *)0x0) &&
       ((local_10 == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(local_10,cur->name), iVar1 == 0)))) {
      (*(code *)_xmlFree)(cur->name);
    }
    (*(code *)_xmlFree)(cur);
    return;
  }
  return;
}

