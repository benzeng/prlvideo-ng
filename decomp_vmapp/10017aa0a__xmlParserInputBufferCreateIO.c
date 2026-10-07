
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputBufferPtr
_xmlParserInputBufferCreateIO
          (xmlInputReadCallback ioread,xmlInputCloseCallback ioclose,void *ioctx,xmlCharEncoding enc
          )

{
  xmlParserInputBufferPtr local_40;
  
  if (ioread == (xmlInputReadCallback)0x0) {
    local_40 = (xmlParserInputBufferPtr)0x0;
  }
  else {
    local_40 = _xmlAllocParserInputBuffer(enc);
    if (local_40 != (xmlParserInputBufferPtr)0x0) {
      local_40->context = ioctx;
      local_40->readcallback = ioread;
      local_40->closecallback = ioclose;
    }
  }
  return local_40;
}

