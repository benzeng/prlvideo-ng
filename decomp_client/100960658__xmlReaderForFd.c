
/* WARNING: Enum "enum_2039": Some values do not have unique names */

long _xmlReaderForFd(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  xmlParserInputBufferPtr in;
  long local_40;
  
  if (param_1 < 0) {
    local_40 = 0;
  }
  else {
    in = _xmlParserInputBufferCreateFd(param_1,XML_CHAR_ENCODING_ERROR);
    if (in == (xmlParserInputBufferPtr)0x0) {
      local_40 = 0;
    }
    else {
      in->closecallback = (xmlInputCloseCallback)0x0;
      local_40 = _xmlNewTextReader(in,param_2);
      if (local_40 == 0) {
        _xmlFreeParserInputBuffer(in);
        local_40 = 0;
      }
      else {
        *(uint *)(local_40 + 0x14) = *(uint *)(local_40 + 0x14) | 1;
        FUN_10095fb07(local_40,0,param_2,param_3,param_4);
      }
    }
  }
  return local_40;
}

