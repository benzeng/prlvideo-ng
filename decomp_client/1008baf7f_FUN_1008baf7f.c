
void * FUN_1008baf7f(long param_1)

{
  xmlEnumerationPtr pxVar1;
  xmlChar *pxVar2;
  void *local_28;
  
  local_28 = (void *)(*(code *)_xmlMalloc)(0x78);
  if (local_28 == (void *)0x0) {
    FUN_1008b7324(0,"malloc failed");
    local_28 = (void *)0x0;
  }
  else {
    _memset(local_28,0,0x78);
    *(undefined4 *)((long)local_28 + 8) = 0x10;
    *(undefined4 *)((long)local_28 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)((long)local_28 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    pxVar1 = _xmlCopyEnumeration(*(xmlEnumerationPtr *)(param_1 + 0x60));
    *(xmlEnumerationPtr *)((long)local_28 + 0x60) = pxVar1;
    if (*(long *)(param_1 + 0x70) != 0) {
      pxVar2 = _xmlStrdup(*(xmlChar **)(param_1 + 0x70));
      *(xmlChar **)((long)local_28 + 0x70) = pxVar2;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      pxVar2 = _xmlStrdup(*(xmlChar **)(param_1 + 0x10));
      *(xmlChar **)((long)local_28 + 0x10) = pxVar2;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      pxVar2 = _xmlStrdup(*(xmlChar **)(param_1 + 0x68));
      *(xmlChar **)((long)local_28 + 0x68) = pxVar2;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      pxVar2 = _xmlStrdup(*(xmlChar **)(param_1 + 0x58));
      *(xmlChar **)((long)local_28 + 0x58) = pxVar2;
    }
  }
  return local_28;
}

