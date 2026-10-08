
void _xmlSAX2ElementDecl(void *ctx,xmlChar *name,int type,xmlElementContentPtr content)

{
  uint uVar1;
  uint uVar2;
  xmlElementPtr local_20;
  
  if (ctx != (void *)0x0) {
    if (*(int *)((long)ctx + 0x150) == 1) {
      local_20 = _xmlAddElementDecl((xmlValidCtxtPtr)((long)ctx + 0xa0),
                                    *(xmlDtdPtr *)(*(long *)((long)ctx + 0x10) + 0x50),name,type,
                                    content);
    }
    else {
      if (*(int *)((long)ctx + 0x150) != 2) {
        FUN_100977ba8(ctx,1,"SAX.xmlSAX2ElementDecl(%s) called while not in subset\n",name,0);
        return;
      }
      local_20 = _xmlAddElementDecl((xmlValidCtxtPtr)((long)ctx + 0xa0),
                                    *(xmlDtdPtr *)(*(long *)((long)ctx + 0x10) + 0x58),name,type,
                                    content);
    }
    if (local_20 == (xmlElementPtr)0x0) {
      *(undefined4 *)((long)ctx + 0x98) = 0;
    }
    if ((((*(int *)((long)ctx + 0x9c) != 0) && (*(int *)((long)ctx + 0x18) != 0)) &&
        (*(long *)((long)ctx + 0x10) != 0)) && (*(long *)(*(long *)((long)ctx + 0x10) + 0x50) != 0))
    {
      uVar1 = *(uint *)((long)ctx + 0x98);
      uVar2 = _xmlValidateElementDecl
                        ((xmlValidCtxtPtr)((long)ctx + 0xa0),*(xmlDocPtr *)((long)ctx + 0x10),
                         local_20);
      *(uint *)((long)ctx + 0x98) = uVar1 & uVar2;
    }
  }
  return;
}

