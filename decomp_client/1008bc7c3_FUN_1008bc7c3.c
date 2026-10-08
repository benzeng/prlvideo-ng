
void * FUN_1008bc7c3(long param_1,xmlChar *param_2,int param_3)

{
  xmlChar *pxVar1;
  xmlChar *local_48;
  xmlChar *local_30;
  xmlHashTablePtr local_28;
  void *local_20;
  xmlChar *local_18;
  xmlDictPtr local_10;
  
  local_18 = (xmlChar *)0x0;
  local_30 = (xmlChar *)0x0;
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    local_10 = (xmlDictPtr)0x0;
    if (*(long *)(param_1 + 0x40) != 0) {
      local_10 = *(xmlDictPtr *)(*(long *)(param_1 + 0x40) + 0x98);
    }
    if (param_3 == 0) {
      return (void *)0x0;
    }
    local_28 = *(xmlHashTablePtr *)(param_1 + 0x50);
    if (local_28 == (xmlHashTablePtr)0x0) {
      local_28 = _xmlHashCreateDict(0,local_10);
      *(xmlHashTablePtr *)(param_1 + 0x50) = local_28;
    }
    if (local_28 == (xmlHashTablePtr)0x0) {
      FUN_1008b7324(0,"element table allocation failed");
      return (void *)0x0;
    }
  }
  local_28 = *(xmlHashTablePtr *)(param_1 + 0x50);
  local_18 = _xmlSplitQName2(param_2,&local_30);
  local_48 = param_2;
  if (local_18 != (xmlChar *)0x0) {
    local_48 = local_18;
  }
  local_20 = _xmlHashLookup2(local_28,local_48,local_30);
  if ((local_20 == (void *)0x0) && (param_3 != 0)) {
    local_20 = (void *)(*(code *)_xmlMalloc)(0x70);
    if (local_20 == (void *)0x0) {
      FUN_1008b7324(0,"malloc failed");
      return (void *)0x0;
    }
    _memset(local_20,0,0x70);
    *(undefined4 *)((long)local_20 + 8) = 0xf;
    pxVar1 = _xmlStrdup(local_48);
    *(xmlChar **)((long)local_20 + 0x10) = pxVar1;
    pxVar1 = _xmlStrdup(local_30);
    *(xmlChar **)((long)local_20 + 0x60) = pxVar1;
    *(undefined4 *)((long)local_20 + 0x48) = 0;
    _xmlHashAddEntry2(local_28,local_48,local_30,local_20);
  }
  if (local_30 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_30);
  }
  if (local_18 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_18);
  }
  return local_20;
}

