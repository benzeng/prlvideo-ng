
void _xmlFreeDtd(xmlDtdPtr cur)

{
  _xmlNode *p_Var1;
  int iVar2;
  xmlDeregisterNodeFunc *ppxVar3;
  xmlDictPtr local_20;
  xmlNodePtr local_10;
  
  local_20 = (xmlDictPtr)0x0;
  if (cur != (xmlDtdPtr)0x0) {
    if (cur->doc != (_xmlDoc *)0x0) {
      local_20 = cur->doc->dict;
    }
    if ((___xmlRegisterCallbacks != 0) &&
       (ppxVar3 = ___xmlDeregisterNodeDefaultValue(), *ppxVar3 != (xmlDeregisterNodeFunc)0x0)) {
      ppxVar3 = ___xmlDeregisterNodeDefaultValue();
      (**ppxVar3)((xmlNodePtr)cur);
    }
    if (cur->children != (_xmlNode *)0x0) {
      p_Var1 = cur->children;
      while (local_10 = p_Var1, local_10 != (xmlNodePtr)0x0) {
        p_Var1 = local_10->next;
        if ((((local_10->type != XML_NOTATION_NODE) && (local_10->type != XML_ELEMENT_DECL)) &&
            (local_10->type != XML_ATTRIBUTE_DECL)) && (local_10->type != XML_ENTITY_DECL)) {
          _xmlUnlinkNode(local_10);
          _xmlFreeNode(local_10);
        }
      }
    }
    if ((cur->name != (xmlChar *)0x0) &&
       ((local_20 == (xmlDictPtr)0x0 || (iVar2 = _xmlDictOwns(local_20,cur->name), iVar2 == 0)))) {
      (*(code *)_xmlFree)(cur->name);
    }
    if ((cur->SystemID != (xmlChar *)0x0) &&
       ((local_20 == (xmlDictPtr)0x0 || (iVar2 = _xmlDictOwns(local_20,cur->SystemID), iVar2 == 0)))
       ) {
      (*(code *)_xmlFree)(cur->SystemID);
    }
    if ((cur->ExternalID != (xmlChar *)0x0) &&
       ((local_20 == (xmlDictPtr)0x0 || (iVar2 = _xmlDictOwns(local_20,cur->ExternalID), iVar2 == 0)
        ))) {
      (*(code *)_xmlFree)(cur->ExternalID);
    }
    if (cur->notations != (void *)0x0) {
      _xmlFreeNotationTable(cur->notations);
    }
    if (cur->elements != (void *)0x0) {
      _xmlFreeElementTable(cur->elements);
    }
    if (cur->attributes != (void *)0x0) {
      _xmlFreeAttributeTable(cur->attributes);
    }
    if (cur->entities != (void *)0x0) {
      _xmlFreeEntitiesTable(cur->entities);
    }
    if (cur->pentities != (void *)0x0) {
      _xmlFreeEntitiesTable(cur->pentities);
    }
    (*(code *)_xmlFree)(cur);
  }
  return;
}

