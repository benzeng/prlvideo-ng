
xmlHashTablePtr _xmlHashCreate(int size)

{
  xmlHashTablePtr pxVar1;
  long lVar2;
  undefined1 *puVar3;
  int local_1c;
  
  local_1c = size;
  if (size < 1) {
    local_1c = 0x100;
  }
  pxVar1 = (xmlHashTablePtr)(*(code *)_xmlMalloc)(0x18);
  if (pxVar1 != (xmlHashTablePtr)0x0) {
    *(long *)(pxVar1 + 0x10) = 0;
    *(int *)(pxVar1 + 8) = local_1c;
    *(undefined4 *)(pxVar1 + 0xc) = 0;
    lVar2 = (*(code *)_xmlMalloc)((long)local_1c * 0x30);
    *(long *)pxVar1 = lVar2;
    if (*(long *)pxVar1 != 0) {
      puVar3 = *(undefined1 **)pxVar1;
      for (lVar2 = (long)local_1c * 0x30; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      return pxVar1;
    }
    (*(code *)_xmlFree)(pxVar1);
  }
  return (xmlHashTablePtr)0x0;
}

