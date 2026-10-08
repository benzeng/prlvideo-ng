
xmlChar * _xmlTextReaderGetAttribute(long param_1,xmlChar *param_2)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlChar *local_40;
  xmlChar *local_28;
  xmlChar *local_20;
  xmlNsPtr local_18;
  xmlChar *local_10;
  
  local_28 = (xmlChar *)0x0;
  local_10 = (xmlChar *)0x0;
  if ((param_1 == 0) || (param_2 == (xmlChar *)0x0)) {
    local_40 = (xmlChar *)0x0;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_40 = (xmlChar *)0x0;
  }
  else if (*(long *)(param_1 + 0x78) == 0) {
    if (*(int *)(*(long *)(param_1 + 0x70) + 8) == 1) {
      local_20 = _xmlSplitQName2(param_2,&local_28);
      if (local_20 == (xmlChar *)0x0) {
        iVar1 = _xmlStrEqual(param_2,(xmlChar *)"xmlns");
        if (iVar1 == 0) {
          local_40 = _xmlGetNoNsProp(*(xmlNodePtr *)(param_1 + 0x70),param_2);
        }
        else {
          for (local_18 = *(xmlNsPtr *)(*(long *)(param_1 + 0x70) + 0x60); local_18 != (xmlNsPtr)0x0
              ; local_18 = local_18->next) {
            if (*(long *)((long)local_18 + 0x18) == 0) {
              pxVar2 = _xmlStrdup(*(xmlChar **)((long)local_18 + 0x10));
              return pxVar2;
            }
          }
          local_40 = (xmlChar *)0x0;
        }
      }
      else {
        iVar1 = _xmlStrEqual(local_28,(xmlChar *)"xmlns");
        if (iVar1 == 0) {
          local_18 = _xmlSearchNs(*(xmlDocPtr *)(*(long *)(param_1 + 0x70) + 0x40),
                                  *(xmlNodePtr *)(param_1 + 0x70),local_28);
          if (local_18 != (xmlNsPtr)0x0) {
            local_10 = _xmlGetNsProp(*(xmlNodePtr *)(param_1 + 0x70),local_20,local_18->href);
          }
        }
        else {
          for (local_18 = *(xmlNsPtr *)(*(long *)(param_1 + 0x70) + 0x60); local_18 != (_xmlNs *)0x0
              ; local_18 = local_18->next) {
            if ((local_18->prefix != (xmlChar *)0x0) &&
               (iVar1 = _xmlStrEqual(local_18->prefix,local_20), iVar1 != 0)) {
              local_10 = _xmlStrdup(local_18->href);
              break;
            }
          }
        }
        (*(code *)_xmlFree)(local_20);
        if (local_28 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_28);
        }
        local_40 = local_10;
      }
    }
    else {
      local_40 = (xmlChar *)0x0;
    }
  }
  else {
    local_40 = (xmlChar *)0x0;
  }
  return local_40;
}

