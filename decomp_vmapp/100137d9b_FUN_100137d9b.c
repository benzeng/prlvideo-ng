
void * FUN_100137d9b(long param_1)

{
  xmlChar *pxVar1;
  void *local_28;
  
  local_28 = (void *)(*(code *)_xmlMalloc)(0x88);
  if (local_28 == (void *)0x0) {
    FUN_100136740("xmlCopyEntity:: malloc failed");
    local_28 = (void *)0x0;
  }
  else {
    _memset(local_28,0,0x88);
    *(undefined4 *)((long)local_28 + 8) = 0x11;
    *(undefined4 *)((long)local_28 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    if (*(long *)(param_1 + 0x10) != 0) {
      pxVar1 = _xmlStrdup(*(xmlChar **)(param_1 + 0x10));
      *(xmlChar **)((long)local_28 + 0x10) = pxVar1;
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      pxVar1 = _xmlStrdup(*(xmlChar **)(param_1 + 0x60));
      *(xmlChar **)((long)local_28 + 0x60) = pxVar1;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      pxVar1 = _xmlStrdup(*(xmlChar **)(param_1 + 0x68));
      *(xmlChar **)((long)local_28 + 0x68) = pxVar1;
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      pxVar1 = _xmlStrdup(*(xmlChar **)(param_1 + 0x50));
      *(xmlChar **)((long)local_28 + 0x50) = pxVar1;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      pxVar1 = _xmlStrdup(*(xmlChar **)(param_1 + 0x48));
      *(xmlChar **)((long)local_28 + 0x48) = pxVar1;
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      pxVar1 = _xmlStrdup(*(xmlChar **)(param_1 + 0x78));
      *(xmlChar **)((long)local_28 + 0x78) = pxVar1;
    }
  }
  return local_28;
}

