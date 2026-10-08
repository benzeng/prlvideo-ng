
xmlChar * _xmlTextReaderLookupNamespace(long param_1,xmlChar *param_2)

{
  xmlNsPtr pxVar1;
  xmlChar *local_30;
  
  if (param_1 == 0) {
    local_30 = (xmlChar *)0x0;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_30 = (xmlChar *)0x0;
  }
  else {
    pxVar1 = _xmlSearchNs(*(xmlDocPtr *)(*(long *)(param_1 + 0x70) + 0x40),
                          *(xmlNodePtr *)(param_1 + 0x70),param_2);
    if (pxVar1 == (xmlNsPtr)0x0) {
      local_30 = (xmlChar *)0x0;
    }
    else {
      local_30 = _xmlStrdup(pxVar1->href);
    }
  }
  return local_30;
}

