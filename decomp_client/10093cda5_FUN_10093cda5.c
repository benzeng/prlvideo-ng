
xmlChar * FUN_10093cda5(long param_1,xmlChar *param_2)

{
  long lVar1;
  int iVar2;
  xmlChar *name;
  xmlNsPtr pxVar3;
  xmlChar *local_50;
  int local_30;
  int local_2c;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    if (*(long *)(param_1 + 0x108) == 0) {
      if ((*(long *)(*(long *)(param_1 + 0xb8) + 8) == 0) ||
         (*(long *)(*(long *)(*(long *)(param_1 + 0xb8) + 8) + 0x40) == 0)) {
        FUN_10091c652(param_1,"xmlSchemaLookupNamespace","no node or node\'s doc avaliable");
        local_50 = (xmlChar *)0x0;
      }
      else {
        pxVar3 = _xmlSearchNs(*(xmlDocPtr *)(*(long *)(*(long *)(param_1 + 0xb8) + 8) + 0x40),
                              *(xmlNodePtr *)(*(long *)(param_1 + 0xb8) + 8),param_2);
        if (pxVar3 == (xmlNsPtr)0x0) {
          local_50 = (xmlChar *)0x0;
        }
        else {
          local_50 = pxVar3->href;
        }
      }
    }
    else {
      name = (xmlChar *)_xmlTextReaderLookupNamespace(*(undefined8 *)(param_1 + 0x108),param_2);
      if (name == (xmlChar *)0x0) {
        local_50 = (xmlChar *)0x0;
      }
      else {
        local_50 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x100),name,-1);
        (*(code *)_xmlFree)(name);
      }
    }
  }
  else {
    for (local_30 = *(int *)(param_1 + 0xa4); -1 < local_30; local_30 = local_30 + -1) {
      if (*(int *)(*(long *)(*(long *)(param_1 + 0xa8) + (long)local_30 * 8) + 0x80) != 0) {
        lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + (long)local_30 * 8);
        for (local_2c = 0; local_2c < *(int *)(lVar1 + 0x80) * 2; local_2c = local_2c + 2) {
          if (((param_2 == (xmlChar *)0x0) &&
              (*(long *)(*(long *)(lVar1 + 0x78) + (long)local_2c * 8) == 0)) ||
             ((param_2 != (xmlChar *)0x0 &&
              (iVar2 = _xmlStrEqual(param_2,*(xmlChar **)
                                             (*(long *)(lVar1 + 0x78) + (long)local_2c * 8)),
              iVar2 != 0)))) {
            return *(xmlChar **)(*(long *)(lVar1 + 0x78) + (long)local_2c * 8 + 8);
          }
        }
      }
    }
    local_50 = (xmlChar *)0x0;
  }
  return local_50;
}

