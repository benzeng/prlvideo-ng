
void _xmlSAX2EndDocument(void *ctx)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  xmlChar *pxVar4;
  
  if (ctx != (void *)0x0) {
    if ((((*(int *)((long)ctx + 0x9c) != 0) && (*(int *)((long)ctx + 0x18) != 0)) &&
        (*(long *)((long)ctx + 0x10) != 0)) && (*(long *)(*(long *)((long)ctx + 0x10) + 0x50) != 0))
    {
      uVar1 = *(uint *)((long)ctx + 0x98);
      uVar3 = _xmlValidateDocumentFinal
                        ((xmlValidCtxtPtr)((long)ctx + 0xa0),*(xmlDocPtr *)((long)ctx + 0x10));
      *(uint *)((long)ctx + 0x98) = uVar1 & uVar3;
    }
    if (((*(long *)((long)ctx + 0x28) != 0) && (*(long *)((long)ctx + 0x10) != 0)) &&
       (*(long *)(*(long *)((long)ctx + 0x10) + 0x70) == 0)) {
      *(undefined8 *)(*(long *)((long)ctx + 0x10) + 0x70) = *(undefined8 *)((long)ctx + 0x28);
      *(undefined8 *)((long)ctx + 0x28) = 0;
    }
    if (((*(long *)((long)ctx + 0x48) != 0) && (0 < *(int *)((long)ctx + 0x40))) &&
       ((**(long **)((long)ctx + 0x48) != 0 &&
        (((*(long *)(**(long **)((long)ctx + 0x48) + 0x50) != 0 &&
          (*(long *)((long)ctx + 0x10) != 0)) &&
         (*(long *)(*(long *)((long)ctx + 0x10) + 0x70) == 0)))))) {
      lVar2 = *(long *)((long)ctx + 0x10);
      pxVar4 = _xmlStrdup(*(xmlChar **)(**(long **)((long)ctx + 0x48) + 0x50));
      *(xmlChar **)(lVar2 + 0x70) = pxVar4;
    }
    if (((*(int *)((long)ctx + 0x198) != 0) && (*(long *)((long)ctx + 0x10) != 0)) &&
       (*(int *)(*(long *)((long)ctx + 0x10) + 0x90) == 0)) {
      *(undefined4 *)(*(long *)((long)ctx + 0x10) + 0x90) = *(undefined4 *)((long)ctx + 0x198);
    }
  }
  return;
}

