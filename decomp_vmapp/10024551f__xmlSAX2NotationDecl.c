
void _xmlSAX2NotationDecl(void *ctx,xmlChar *name,xmlChar *publicId,xmlChar *systemId)

{
  uint uVar1;
  uint uVar2;
  xmlNotationPtr local_20;
  
  if (ctx != (void *)0x0) {
    if ((publicId == (xmlChar *)0x0) && (systemId == (xmlChar *)0x0)) {
      FUN_100244280(ctx,0x69,"SAX.xmlSAX2NotationDecl(%s) externalID or PublicID missing\n",name,0);
    }
    else {
      if (*(int *)((long)ctx + 0x150) == 1) {
        local_20 = _xmlAddNotationDecl((xmlValidCtxtPtr)((long)ctx + 0xa0),
                                       *(xmlDtdPtr *)(*(long *)((long)ctx + 0x10) + 0x50),name,
                                       publicId,systemId);
      }
      else {
        if (*(int *)((long)ctx + 0x150) != 2) {
          FUN_100244280(ctx,0x69,"SAX.xmlSAX2NotationDecl(%s) called while not in subset\n",name,0);
          return;
        }
        local_20 = _xmlAddNotationDecl((xmlValidCtxtPtr)((long)ctx + 0xa0),
                                       *(xmlDtdPtr *)(*(long *)((long)ctx + 0x10) + 0x58),name,
                                       publicId,systemId);
      }
      if (local_20 == (xmlNotationPtr)0x0) {
        *(undefined4 *)((long)ctx + 0x98) = 0;
      }
      if ((((*(int *)((long)ctx + 0x9c) != 0) && (*(int *)((long)ctx + 0x18) != 0)) &&
          (*(long *)((long)ctx + 0x10) != 0)) &&
         (*(long *)(*(long *)((long)ctx + 0x10) + 0x50) != 0)) {
        uVar1 = *(uint *)((long)ctx + 0x98);
        uVar2 = _xmlValidateNotationDecl
                          ((xmlValidCtxtPtr)((long)ctx + 0xa0),*(xmlDocPtr *)((long)ctx + 0x10),
                           local_20);
        *(uint *)((long)ctx + 0x98) = uVar1 & uVar2;
      }
    }
  }
  return;
}

