
xmlChar * _xmlTextReaderReadInnerXml(long param_1)

{
  xmlDocPtr doc;
  int iVar1;
  long lVar2;
  xmlBufferPtr buf;
  xmlNodePtr cur;
  xmlBufferPtr buf_00;
  xmlChar *local_48;
  xmlNodePtr local_28;
  
  lVar2 = _xmlTextReaderExpand(param_1);
  if (lVar2 == 0) {
    local_48 = (xmlChar *)0x0;
  }
  else {
    doc = *(xmlDocPtr *)(param_1 + 8);
    buf = _xmlBufferCreate();
    for (local_28 = *(xmlNodePtr *)(*(long *)(param_1 + 0x70) + 0x18); local_28 != (xmlNodePtr)0x0;
        local_28 = local_28->next) {
      cur = _xmlDocCopyNode(local_28,doc,1);
      buf_00 = _xmlBufferCreate();
      iVar1 = _xmlNodeDump(buf_00,doc,cur,0,0);
      if (iVar1 == -1) {
        _xmlFreeNode(cur);
        _xmlBufferFree(buf_00);
        _xmlBufferFree(buf);
        return (xmlChar *)0x0;
      }
      _xmlBufferCat(buf,buf_00->content);
      _xmlFreeNode(cur);
      _xmlBufferFree(buf_00);
    }
    local_48 = buf->content;
  }
  return local_48;
}

