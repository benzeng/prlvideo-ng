
void * FUN_10018676a(long param_1)

{
  xmlChar *pxVar1;
  xmlElementContentPtr pxVar2;
  void *local_28;
  
  local_28 = (void *)(*(code *)_xmlMalloc)(0x70);
  if (local_28 == (void *)0x0) {
    FUN_1001839fc(0,"malloc failed");
    local_28 = (void *)0x0;
  }
  else {
    _memset(local_28,0,0x70);
    *(undefined4 *)((long)local_28 + 8) = 0xf;
    *(undefined4 *)((long)local_28 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    if (*(long *)(param_1 + 0x10) == 0) {
      *(undefined8 *)((long)local_28 + 0x10) = 0;
    }
    else {
      pxVar1 = _xmlStrdup(*(xmlChar **)(param_1 + 0x10));
      *(xmlChar **)((long)local_28 + 0x10) = pxVar1;
    }
    if (*(long *)(param_1 + 0x60) == 0) {
      *(undefined8 *)((long)local_28 + 0x60) = 0;
    }
    else {
      pxVar1 = _xmlStrdup(*(xmlChar **)(param_1 + 0x60));
      *(xmlChar **)((long)local_28 + 0x60) = pxVar1;
    }
    pxVar2 = _xmlCopyElementContent(*(xmlElementContentPtr *)(param_1 + 0x50));
    *(xmlElementContentPtr *)((long)local_28 + 0x50) = pxVar2;
    *(undefined8 *)((long)local_28 + 0x58) = 0;
  }
  return local_28;
}

