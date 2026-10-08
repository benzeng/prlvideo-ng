
xmlNsPtr FUN_1008a661e(xmlDocPtr param_1,long param_2,xmlChar *param_3,xmlChar *param_4,int param_5)

{
  long lVar1;
  xmlNsPtr pxVar2;
  xmlChar local_68 [72];
  xmlChar *local_20;
  uint local_14;
  long *local_10;
  
  local_14 = 0;
  local_20 = param_4;
  while (((*(long *)(param_2 + 0x60) != 0 &&
          (lVar1 = FUN_1008a5d5a(*(undefined8 *)(param_2 + 0x60),local_20), lVar1 != 0)) ||
         ((param_5 != 0 &&
          (((*(long *)(param_2 + 0x28) != 0 &&
            (*(long *)(*(long *)(param_2 + 0x28) + 0x40) != *(long *)(param_2 + 0x28))) &&
           (pxVar2 = _xmlSearchNs(param_1,*(xmlNodePtr *)(param_2 + 0x28),local_20),
           pxVar2 != (xmlNsPtr)0x0))))))) {
    local_14 = local_14 + 1;
    if (1000 < (int)local_14) {
      return (xmlNsPtr)0x0;
    }
    if (param_4 == (xmlChar *)0x0) {
      _snprintf((char *)local_68,0x32,"default%d",(ulong)local_14);
    }
    else {
      _snprintf((char *)local_68,0x32,"%.30s%d",param_4,(ulong)local_14);
    }
    local_20 = local_68;
  }
  pxVar2 = _xmlNewNs((xmlNodePtr)0x0,param_3,local_20);
  if (pxVar2 == (xmlNsPtr)0x0) {
    return (xmlNsPtr)0x0;
  }
  if (*(long *)(param_2 + 0x60) == 0) {
    *(xmlNsPtr *)(param_2 + 0x60) = pxVar2;
    return pxVar2;
  }
  for (local_10 = *(long **)(param_2 + 0x60); *local_10 != 0; local_10 = (long *)*local_10) {
  }
  *local_10 = (long)pxVar2;
  return pxVar2;
}

