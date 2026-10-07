
void _xmlFreeDoc(xmlDocPtr cur)

{
  xmlDtdPtr cur_00;
  int iVar1;
  xmlDeregisterNodeFunc *ppxVar2;
  xmlDtdPtr local_20;
  xmlDictPtr local_10;
  
  local_10 = (xmlDictPtr)0x0;
  if (cur != (xmlDocPtr)0x0) {
    if (cur != (xmlDocPtr)0x0) {
      local_10 = cur->dict;
    }
    if ((___xmlRegisterCallbacks != 0) &&
       (ppxVar2 = ___xmlDeregisterNodeDefaultValue(), *ppxVar2 != (xmlDeregisterNodeFunc)0x0)) {
      ppxVar2 = ___xmlDeregisterNodeDefaultValue();
      (**ppxVar2)((xmlNodePtr)cur);
    }
    if (cur->ids != (void *)0x0) {
      _xmlFreeIDTable(cur->ids);
    }
    cur->ids = (void *)0x0;
    if (cur->refs != (void *)0x0) {
      _xmlFreeRefTable(cur->refs);
    }
    cur->refs = (void *)0x0;
    local_20 = cur->extSubset;
    cur_00 = cur->intSubset;
    if (cur_00 == local_20) {
      local_20 = (xmlDtdPtr)0x0;
    }
    if (local_20 != (xmlDtdPtr)0x0) {
      _xmlUnlinkNode((xmlNodePtr)cur->extSubset);
      cur->extSubset = (_xmlDtd *)0x0;
      _xmlFreeDtd(local_20);
    }
    if (cur_00 != (xmlDtdPtr)0x0) {
      _xmlUnlinkNode((xmlNodePtr)cur->intSubset);
      cur->intSubset = (_xmlDtd *)0x0;
      _xmlFreeDtd(cur_00);
    }
    if (cur->children != (_xmlNode *)0x0) {
      _xmlFreeNodeList(cur->children);
    }
    if (cur->oldNs != (_xmlNs *)0x0) {
      _xmlFreeNsList(cur->oldNs);
    }
    if ((cur->version != (xmlChar *)0x0) &&
       ((local_10 == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(local_10,cur->version), iVar1 == 0))))
    {
      (*(code *)_xmlFree)(cur->version);
    }
    if ((cur->name != (char *)0x0) &&
       ((local_10 == (xmlDictPtr)0x0 ||
        (iVar1 = _xmlDictOwns(local_10,(xmlChar *)cur->name), iVar1 == 0)))) {
      (*(code *)_xmlFree)(cur->name);
    }
    if ((cur->encoding != (xmlChar *)0x0) &&
       ((local_10 == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(local_10,cur->encoding), iVar1 == 0)))
       ) {
      (*(code *)_xmlFree)(cur->encoding);
    }
    if ((cur->URL != (xmlChar *)0x0) &&
       ((local_10 == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(local_10,cur->URL), iVar1 == 0)))) {
      (*(code *)_xmlFree)(cur->URL);
    }
    (*(code *)_xmlFree)(cur);
    if (local_10 != (xmlDictPtr)0x0) {
      _xmlDictFree(local_10);
    }
    return;
  }
  return;
}

