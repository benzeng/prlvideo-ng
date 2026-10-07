
void _xmlSAX2InternalSubset(void *ctx,xmlChar *name,xmlChar *ExternalID,xmlChar *SystemID)

{
  long lVar1;
  xmlDtdPtr pxVar2;
  
  if ((ctx != (void *)0x0) && (*(long *)((long)ctx + 0x10) != 0)) {
    pxVar2 = _xmlGetIntSubset(*(xmlDocPtr *)((long)ctx + 0x10));
    if (pxVar2 != (xmlDtdPtr)0x0) {
      if (*(int *)((long)ctx + 0x34) != 0) {
        return;
      }
      _xmlUnlinkNode((xmlNodePtr)pxVar2);
      _xmlFreeDtd(pxVar2);
      *(undefined8 *)(*(long *)((long)ctx + 0x10) + 0x50) = 0;
    }
    lVar1 = *(long *)((long)ctx + 0x10);
    pxVar2 = _xmlCreateIntSubset(*(xmlDocPtr *)((long)ctx + 0x10),name,ExternalID,SystemID);
    *(xmlDtdPtr *)(lVar1 + 0x50) = pxVar2;
    if (*(long *)(*(long *)((long)ctx + 0x10) + 0x50) == 0) {
      FUN_1002440a9(ctx,"xmlSAX2InternalSubset");
    }
  }
  return;
}

