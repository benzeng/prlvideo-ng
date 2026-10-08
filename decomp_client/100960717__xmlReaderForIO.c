
/* WARNING: Enum "enum_2039": Some values do not have unique names */

long _xmlReaderForIO(xmlInputReadCallback param_1,xmlInputCloseCallback param_2,void *param_3,
                    undefined8 param_4,undefined8 param_5,undefined4 param_6)

{
  xmlParserInputBufferPtr in;
  undefined8 local_50;
  
  if (param_1 == (xmlInputReadCallback)0x0) {
    local_50 = 0;
  }
  else {
    in = _xmlParserInputBufferCreateIO(param_1,param_2,param_3,XML_CHAR_ENCODING_ERROR);
    if (in == (xmlParserInputBufferPtr)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = _xmlNewTextReader(in,param_4);
      if (local_50 == 0) {
        _xmlFreeParserInputBuffer(in);
        local_50 = 0;
      }
      else {
        *(uint *)(local_50 + 0x14) = *(uint *)(local_50 + 0x14) | 1;
        FUN_10095fb07(local_50,0,param_4,param_5,param_6);
      }
    }
  }
  return local_50;
}

