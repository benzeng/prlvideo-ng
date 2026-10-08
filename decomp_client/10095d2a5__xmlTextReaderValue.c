
xmlChar * _xmlTextReaderValue(long param_1)

{
  xmlChar *pxVar1;
  ulong uVar2;
  long local_18;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_18 = *(long *)(param_1 + 0x70);
    }
    else {
      local_18 = *(long *)(param_1 + 0x78);
    }
    if (*(uint *)(local_18 + 8) < 0x13) {
      uVar2 = 1L << ((byte)*(uint *)(local_18 + 8) & 0x3f);
      if ((uVar2 & 0x198) == 0) {
        if ((uVar2 & 4) != 0) {
          if (*(long *)(local_18 + 0x28) == 0) {
            pxVar1 = _xmlNodeListGetString((xmlDocPtr)0x0,*(xmlNodePtr *)(local_18 + 0x18),1);
            return pxVar1;
          }
          pxVar1 = _xmlNodeListGetString
                             (*(xmlDocPtr *)(*(long *)(local_18 + 0x28) + 0x40),
                              *(xmlNodePtr *)(local_18 + 0x18),1);
          return pxVar1;
        }
        if ((uVar2 & 0x40000) != 0) {
          pxVar1 = _xmlStrdup(*(xmlChar **)(local_18 + 0x10));
          return pxVar1;
        }
      }
      else if (*(long *)(local_18 + 0x50) != 0) {
        pxVar1 = _xmlStrdup(*(xmlChar **)(local_18 + 0x50));
        return pxVar1;
      }
    }
  }
  return (xmlChar *)0x0;
}

