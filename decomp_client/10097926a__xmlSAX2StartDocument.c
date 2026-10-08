
void _xmlSAX2StartDocument(void *ctx)

{
  long lVar1;
  htmlDocPtr pxVar2;
  xmlDocPtr pxVar3;
  xmlChar *pxVar4;
  undefined8 uVar5;
  
  if (ctx != (void *)0x0) {
    if (*(int *)((long)ctx + 0x34) == 0) {
      pxVar3 = _xmlNewDoc(*(xmlChar **)((long)ctx + 0x20));
      *(xmlDocPtr *)((long)ctx + 0x10) = pxVar3;
      lVar1 = *(long *)((long)ctx + 0x10);
      if (lVar1 == 0) {
        FUN_1009779d1(ctx,"xmlSAX2StartDocument");
        return;
      }
      if (*(long *)((long)ctx + 0x28) == 0) {
        *(undefined8 *)(lVar1 + 0x70) = 0;
      }
      else {
        pxVar4 = _xmlStrdup(*(xmlChar **)((long)ctx + 0x28));
        *(xmlChar **)(lVar1 + 0x70) = pxVar4;
      }
      *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)((long)ctx + 0x30);
      if ((*(int *)((long)ctx + 0x238) != 0) && (lVar1 != 0)) {
        *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)((long)ctx + 0x1c8);
        _xmlDictReference(*(xmlDictPtr *)(lVar1 + 0x98));
      }
    }
    else {
      if (*(long *)((long)ctx + 0x10) == 0) {
        pxVar2 = _htmlNewDocNoDtD((xmlChar *)0x0,(xmlChar *)0x0);
        *(htmlDocPtr *)((long)ctx + 0x10) = pxVar2;
      }
      if (*(long *)((long)ctx + 0x10) == 0) {
        FUN_1009779d1(ctx,"xmlSAX2StartDocument");
        return;
      }
    }
    if ((((*(long *)((long)ctx + 0x10) != 0) && (*(long *)(*(long *)((long)ctx + 0x10) + 0x88) == 0)
         ) && (*(long *)((long)ctx + 0x38) != 0)) &&
       (*(long *)(*(long *)((long)ctx + 0x38) + 8) != 0)) {
      lVar1 = *(long *)((long)ctx + 0x10);
      uVar5 = _xmlCanonicPath(*(undefined8 *)(*(long *)((long)ctx + 0x38) + 8));
      *(undefined8 *)(lVar1 + 0x88) = uVar5;
      if (*(long *)(*(long *)((long)ctx + 0x10) + 0x88) == 0) {
        FUN_1009779d1(ctx,"xmlSAX2StartDocument");
      }
    }
  }
  return;
}

