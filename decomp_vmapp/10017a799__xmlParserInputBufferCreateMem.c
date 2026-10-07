
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputBufferPtr _xmlParserInputBufferCreateMem(char *mem,int size,xmlCharEncoding enc)

{
  int iVar1;
  xmlParserInputBufferPtr local_30;
  
  if (size < 1) {
    local_30 = (xmlParserInputBufferPtr)0x0;
  }
  else if (mem == (char *)0x0) {
    local_30 = (xmlParserInputBufferPtr)0x0;
  }
  else {
    local_30 = _xmlAllocParserInputBuffer(enc);
    if (local_30 != (xmlParserInputBufferPtr)0x0) {
      local_30->context = mem;
      local_30->readcallback = FUN_100178272;
      local_30->closecallback = (xmlInputCloseCallback)0x0;
      iVar1 = _xmlBufferAdd((xmlBufferPtr)local_30->buffer,(xmlChar *)mem,size);
      if (iVar1 != 0) {
        (*(code *)_xmlFree)(local_30);
        local_30 = (xmlParserInputBufferPtr)0x0;
      }
    }
  }
  return local_30;
}

