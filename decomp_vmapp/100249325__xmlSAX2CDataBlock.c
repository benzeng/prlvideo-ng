
void _xmlSAX2CDataBlock(void *ctx,xmlChar *value,int len)

{
  xmlNodePtr pxVar1;
  
  if (ctx != (void *)0x0) {
    pxVar1 = _xmlGetLastChild(*(xmlNodePtr *)((long)ctx + 0x50));
    if ((pxVar1 == (xmlNodePtr)0x0) || (pxVar1->type != XML_CDATA_SECTION_NODE)) {
      pxVar1 = _xmlNewCDataBlock(*(xmlDocPtr *)((long)ctx + 0x10),value,len);
      _xmlAddChild(*(xmlNodePtr *)((long)ctx + 0x50),pxVar1);
    }
    else {
      _xmlTextConcat(pxVar1,value,len);
    }
  }
  return;
}

