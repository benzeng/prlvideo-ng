
/* WARNING: Enum "enum_2039": Some values do not have unique names */

long _xmlReaderForMemory(char *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                        undefined4 param_5)

{
  xmlParserInputBufferPtr in;
  undefined8 local_48;
  
  in = _xmlParserInputBufferCreateStatic(param_1,param_2,XML_CHAR_ENCODING_ERROR);
  if (in == (xmlParserInputBufferPtr)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = _xmlNewTextReader(in,param_3);
    if (local_48 == 0) {
      _xmlFreeParserInputBuffer(in);
      local_48 = 0;
    }
    else {
      *(uint *)(local_48 + 0x14) = *(uint *)(local_48 + 0x14) | 1;
      FUN_10022c1df(local_48,0,param_3,param_4,param_5);
    }
  }
  return local_48;
}

