
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputBufferPtr _xmlParserInputBufferCreateFd(int fd,xmlCharEncoding enc)

{
  xmlParserInputBufferPtr local_28;
  
  if (fd < 0) {
    local_28 = (xmlParserInputBufferPtr)0x0;
  }
  else {
    local_28 = _xmlAllocParserInputBuffer(enc);
    if (local_28 != (xmlParserInputBufferPtr)0x0) {
      local_28->context = (void *)(long)fd;
      local_28->readcallback = FUN_1008abba5;
      local_28->closecallback = FUN_1008abc33;
    }
  }
  return local_28;
}

