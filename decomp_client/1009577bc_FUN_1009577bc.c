
void FUN_1009577bc(long param_1,xmlDtdPtr param_2)

{
  xmlDictPtr dict;
  int iVar1;
  xmlDeregisterNodeFunc *ppxVar2;
  
  dict = *(xmlDictPtr *)(*(long *)(param_1 + 0x20) + 0x1c8);
  if (param_2->type == XML_DTD_NODE) {
    _xmlFreeDtd(param_2);
    return;
  }
  if (param_2->type != XML_NAMESPACE_DECL) {
    if (param_2->type != XML_ATTRIBUTE_NODE) {
      if ((param_2->children != (_xmlNode *)0x0) && (param_2->type != XML_ENTITY_REF_NODE)) {
        if ((xmlDtdPtr)param_2->children->parent == param_2) {
          FUN_1009574bb(param_1,param_2->children);
        }
        param_2->children = (_xmlNode *)0x0;
      }
      if ((___xmlRegisterCallbacks != 0) &&
         (ppxVar2 = ___xmlDeregisterNodeDefaultValue(), *ppxVar2 != (xmlDeregisterNodeFunc)0x0)) {
        ppxVar2 = ___xmlDeregisterNodeDefaultValue();
        (**ppxVar2)((xmlNodePtr)param_2);
      }
      if ((((param_2->type == XML_ELEMENT_NODE) || (param_2->type == XML_XINCLUDE_START)) ||
          (param_2->type == XML_XINCLUDE_END)) && (param_2->attributes != (void *)0x0)) {
        FUN_100957478(param_1,param_2->attributes);
      }
      if (((((param_2->elements != &param_2->attributes) && (param_2->type != XML_ELEMENT_NODE)) &&
           ((param_2->type != XML_XINCLUDE_START &&
            ((param_2->type != XML_XINCLUDE_END && (param_2->type != XML_ENTITY_REF_NODE)))))) &&
          (param_2->elements != (void *)0x0)) &&
         ((dict == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(dict,param_2->elements), iVar1 == 0))))
      {
        (*(code *)_xmlFree)(param_2->elements);
      }
      if ((((param_2->type == XML_ELEMENT_NODE) || (param_2->type == XML_XINCLUDE_START)) ||
          (param_2->type == XML_XINCLUDE_END)) && (param_2->entities != (void *)0x0)) {
        _xmlFreeNsList(param_2->entities);
      }
      if (((param_2->type != XML_TEXT_NODE) && (param_2->type != XML_COMMENT_NODE)) &&
         ((param_2->name != (xmlChar *)0x0 &&
          ((dict == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(dict,param_2->name), iVar1 == 0)))))) {
        (*(code *)_xmlFree)(param_2->name);
      }
      if ((((param_2->type == XML_ELEMENT_NODE) || (param_2->type == XML_TEXT_NODE)) &&
          (param_1 != 0)) &&
         ((*(long *)(param_1 + 0x20) != 0 && (*(int *)(*(long *)(param_1 + 0x20) + 0x23c) < 100))))
      {
        param_2->next = *(_xmlNode **)(*(long *)(param_1 + 0x20) + 0x240);
        *(xmlDtdPtr *)(*(long *)(param_1 + 0x20) + 0x240) = param_2;
        *(int *)(*(long *)(param_1 + 0x20) + 0x23c) =
             *(int *)(*(long *)(param_1 + 0x20) + 0x23c) + 1;
      }
      else {
        (*(code *)_xmlFree)(param_2);
      }
      return;
    }
    FUN_1009572cb(param_1,param_2);
    return;
  }
  _xmlFreeNs((xmlNsPtr)param_2);
  return;
}

