
xmlChar * _xmlTextReaderReadString(long param_1)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlChar *pxVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  long local_40;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    return (xmlChar *)0x0;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    local_40 = *(long *)(param_1 + 0x70);
  }
  else {
    local_40 = *(long *)(param_1 + 0x78);
  }
  iVar2 = *(int *)(local_40 + 8);
  if (iVar2 != 2) {
    if (iVar2 == 3) {
      if (*(long *)(local_40 + 0x50) == 0) {
        return (xmlChar *)0x0;
      }
      pxVar3 = _xmlStrdup(*(xmlChar **)(local_40 + 0x50));
      return pxVar3;
    }
    if (iVar2 != 1) {
      return (xmlChar *)0x0;
    }
    iVar2 = FUN_100225510(param_1);
    if (iVar2 != -1) {
      pxVar3 = (xmlChar *)FUN_1002255ef(*(undefined8 *)(local_40 + 0x18));
      return pxVar3;
    }
  }
  ppxVar4 = ___xmlGenericError();
  pxVar1 = *ppxVar4;
  ppvVar5 = ___xmlGenericErrorContext();
  (*pxVar1)(*ppvVar5,"Unimplemented block at %s:%d\n","xmlreader.c",0x6c3);
  return (xmlChar *)0x0;
}

