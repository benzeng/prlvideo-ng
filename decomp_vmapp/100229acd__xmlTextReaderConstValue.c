
xmlChar * _xmlTextReaderConstValue(long param_1)

{
  xmlGenericErrorFunc pxVar1;
  xmlBufferPtr pxVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  ulong uVar5;
  xmlNodePtr local_28;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_28 = *(xmlNodePtr *)(param_1 + 0x70);
    }
    else {
      local_28 = *(xmlNodePtr *)(param_1 + 0x78);
    }
    if (local_28->type < XML_XINCLUDE_START) {
      uVar5 = 1L << ((byte)local_28->type & 0x3f);
      if ((uVar5 & 0x198) != 0) {
        return local_28->content;
      }
      if ((uVar5 & 4) != 0) {
        if (((local_28->children != (_xmlNode *)0x0) && (local_28->children->type == XML_TEXT_NODE))
           && (local_28->children->next == (_xmlNode *)0x0)) {
          return local_28->children->content;
        }
        if (*(long *)(param_1 + 0x98) == 0) {
          pxVar2 = _xmlBufferCreateSize(100);
          *(xmlBufferPtr *)(param_1 + 0x98) = pxVar2;
        }
        if (*(long *)(param_1 + 0x98) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x98) + 8) = 0;
          _xmlNodeBufGetContent(*(xmlBufferPtr *)(param_1 + 0x98),local_28);
          return (xmlChar *)**(undefined8 **)(param_1 + 0x98);
        }
        ppxVar3 = ___xmlGenericError();
        pxVar1 = *ppxVar3;
        ppvVar4 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar4,"xmlTextReaderSetup : malloc failed\n");
        return (xmlChar *)0x0;
      }
      if ((uVar5 & 0x40000) != 0) {
        return local_28->name;
      }
    }
  }
  return (xmlChar *)0x0;
}

