
void FUN_1009574bb(long param_1,xmlDocPtr param_2)

{
  xmlDictPtr dict;
  xmlDocPtr pxVar1;
  int iVar2;
  xmlDeregisterNodeFunc *ppxVar3;
  xmlDocPtr local_28;
  
  dict = *(xmlDictPtr *)(*(long *)(param_1 + 0x20) + 0x1c8);
  if (param_2 != (xmlDocPtr)0x0) {
    if (param_2->type == XML_NAMESPACE_DECL) {
      _xmlFreeNsList((xmlNsPtr)param_2);
    }
    else if ((param_2->type == XML_DOCUMENT_NODE) ||
            (pxVar1 = param_2, param_2->type == XML_HTML_DOCUMENT_NODE)) {
      _xmlFreeDoc(param_2);
    }
    else {
      while (local_28 = pxVar1, local_28 != (xmlDocPtr)0x0) {
        pxVar1 = (xmlDocPtr)local_28->next;
        if (local_28->type != XML_DTD_NODE) {
          if ((local_28->children != (_xmlNode *)0x0) && (local_28->type != XML_ENTITY_REF_NODE)) {
            if ((xmlDocPtr)local_28->children->parent == local_28) {
              FUN_1009574bb(param_1,local_28->children);
            }
            local_28->children = (_xmlNode *)0x0;
          }
          if ((___xmlRegisterCallbacks != 0) &&
             (ppxVar3 = ___xmlDeregisterNodeDefaultValue(), *ppxVar3 != (xmlDeregisterNodeFunc)0x0))
          {
            ppxVar3 = ___xmlDeregisterNodeDefaultValue();
            (**ppxVar3)((xmlNodePtr)local_28);
          }
          if ((((local_28->type == XML_ELEMENT_NODE) || (local_28->type == XML_XINCLUDE_START)) ||
              (local_28->type == XML_XINCLUDE_END)) && (local_28->extSubset != (_xmlDtd *)0x0)) {
            FUN_100957478(param_1,local_28->extSubset);
          }
          if (((((local_28->intSubset != (_xmlDtd *)&local_28->extSubset) &&
                (local_28->type != XML_ELEMENT_NODE)) &&
               ((local_28->type != XML_XINCLUDE_START &&
                ((local_28->type != XML_XINCLUDE_END && (local_28->type != XML_ENTITY_REF_NODE))))))
              && (local_28->intSubset != (_xmlDtd *)0x0)) &&
             ((dict == (xmlDictPtr)0x0 ||
              (iVar2 = _xmlDictOwns(dict,(xmlChar *)local_28->intSubset), iVar2 == 0)))) {
            (*(code *)_xmlFree)(local_28->intSubset);
          }
          if ((((local_28->type == XML_ELEMENT_NODE) || (local_28->type == XML_XINCLUDE_START)) ||
              (local_28->type == XML_XINCLUDE_END)) && (local_28->oldNs != (_xmlNs *)0x0)) {
            _xmlFreeNsList(local_28->oldNs);
          }
          if (((local_28->type != XML_TEXT_NODE) && (local_28->type != XML_COMMENT_NODE)) &&
             ((local_28->name != (char *)0x0 &&
              ((dict == (xmlDictPtr)0x0 ||
               (iVar2 = _xmlDictOwns(dict,(xmlChar *)local_28->name), iVar2 == 0)))))) {
            (*(code *)_xmlFree)(local_28->name);
          }
          if ((((local_28->type == XML_ELEMENT_NODE) || (local_28->type == XML_TEXT_NODE)) &&
              (param_1 != 0)) &&
             ((*(long *)(param_1 + 0x20) != 0 && (*(int *)(*(long *)(param_1 + 0x20) + 0x23c) < 100)
              ))) {
            local_28->next = *(_xmlNode **)(*(long *)(param_1 + 0x20) + 0x240);
            *(xmlDocPtr *)(*(long *)(param_1 + 0x20) + 0x240) = local_28;
            *(int *)(*(long *)(param_1 + 0x20) + 0x23c) =
                 *(int *)(*(long *)(param_1 + 0x20) + 0x23c) + 1;
          }
          else {
            (*(code *)_xmlFree)(local_28);
          }
        }
      }
    }
  }
  return;
}

