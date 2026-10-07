
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void _xmlSAX2EndElementNs(void *ctx,xmlChar *localname,xmlChar *prefix,xmlChar *URI)

{
  uint uVar1;
  uint uVar2;
  xmlParserNodeInfo local_58;
  void *local_28;
  xmlNodePtr local_20;
  
  if (ctx != (void *)0x0) {
    local_20 = *(xmlNodePtr *)((long)ctx + 0x50);
    local_28 = ctx;
    if ((*(int *)((long)ctx + 0x68) != 0) && (local_20 != (xmlNodePtr)0x0)) {
      local_58.end_pos =
           *(long *)(*(long *)((long)ctx + 0x38) + 0x20) -
           *(long *)(*(long *)((long)ctx + 0x38) + 0x18);
      local_58.end_line = (ulong)*(int *)(*(long *)((long)ctx + 0x38) + 0x34);
      local_58.node = local_20;
      _xmlParserAddNodeInfo(ctx,&local_58);
    }
    *(undefined4 *)((long)local_28 + 0x1a0) = 0xffffffff;
    if ((((*(int *)((long)local_28 + 0x9c) != 0) && (*(int *)((long)local_28 + 0x18) != 0)) &&
        (*(long *)((long)local_28 + 0x10) != 0)) &&
       (*(long *)(*(long *)((long)local_28 + 0x10) + 0x50) != 0)) {
      uVar1 = *(uint *)((long)local_28 + 0x98);
      uVar2 = _xmlValidateOneElement
                        ((xmlValidCtxtPtr)((long)local_28 + 0xa0),
                         *(xmlDocPtr *)((long)local_28 + 0x10),local_20);
      *(uint *)((long)local_28 + 0x98) = uVar1 & uVar2;
    }
    _nodePop(local_28);
  }
  return;
}

