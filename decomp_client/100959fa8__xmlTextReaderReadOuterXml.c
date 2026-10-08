
xmlChar * _xmlTextReaderReadOuterXml(long param_1)

{
  xmlDocPtr doc;
  int iVar1;
  long lVar2;
  xmlNodePtr pxVar3;
  xmlBufferPtr buf;
  xmlChar *local_38;
  
  pxVar3 = *(xmlNodePtr *)(param_1 + 0x70);
  doc = *(xmlDocPtr *)(param_1 + 8);
  lVar2 = _xmlTextReaderExpand(param_1);
  if (lVar2 == 0) {
    local_38 = (xmlChar *)0x0;
  }
  else {
    pxVar3 = _xmlDocCopyNode(pxVar3,doc,1);
    buf = _xmlBufferCreate();
    iVar1 = _xmlNodeDump(buf,doc,pxVar3,0,0);
    if (iVar1 == -1) {
      _xmlFreeNode(pxVar3);
      _xmlBufferFree(buf);
      local_38 = (xmlChar *)0x0;
    }
    else {
      local_38 = buf->content;
      buf->content = (xmlChar *)0x0;
      _xmlFreeNode(pxVar3);
      _xmlBufferFree(buf);
    }
  }
  return local_38;
}

