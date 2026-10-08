
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

xmlDictPtr _xmlDictCreate(void)

{
  int iVar1;
  xmlDictPtr pxVar2;
  undefined8 uVar3;
  xmlRMutexPtr pxVar4;
  
  if ((DAT_1023136b0 == 0) && (iVar1 = FUN_100975f04(), iVar1 == 0)) {
    return (xmlDictPtr)0x0;
  }
  pxVar2 = (xmlDictPtr)(*(code *)_xmlMalloc)(0x30);
  if (pxVar2 != (xmlDictPtr)0x0) {
    *(undefined4 *)pxVar2 = 1;
    *(undefined4 *)(pxVar2 + 0x18) = 0x80;
    *(undefined4 *)(pxVar2 + 0x1c) = 0;
    uVar3 = (*(code *)_xmlMalloc)(0xc00);
    *(undefined8 *)(pxVar2 + 0x10) = uVar3;
    *(undefined8 *)(pxVar2 + 0x20) = 0;
    *(undefined8 *)(pxVar2 + 0x28) = 0;
    if (*(long *)(pxVar2 + 0x10) != 0) {
      pxVar4 = _xmlNewRMutex();
      *(xmlRMutexPtr *)(pxVar2 + 8) = pxVar4;
      if (*(long *)(pxVar2 + 8) != 0) {
        _memset(*(void **)(pxVar2 + 0x10),0,0xc00);
        return pxVar2;
      }
      (*(code *)_xmlFree)(*(undefined8 *)(pxVar2 + 0x10));
    }
    (*(code *)_xmlFree)(pxVar2);
  }
  return (xmlDictPtr)0x0;
}

