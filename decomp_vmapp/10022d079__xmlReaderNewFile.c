
/* WARNING: Enum "enum_2039": Some values do not have unique names */

undefined4 _xmlReaderNewFile(long param_1,char *param_2,undefined8 param_3,undefined4 param_4)

{
  xmlParserInputBufferPtr pxVar1;
  undefined4 local_38;
  
  if (param_2 == (char *)0x0) {
    local_38 = 0xffffffff;
  }
  else if (param_1 == 0) {
    local_38 = 0xffffffff;
  }
  else {
    pxVar1 = _xmlParserInputBufferCreateFilename(param_2,XML_CHAR_ENCODING_ERROR);
    if (pxVar1 == (xmlParserInputBufferPtr)0x0) {
      local_38 = 0xffffffff;
    }
    else {
      local_38 = FUN_10022c1df(param_1,pxVar1,param_2,param_3,param_4);
    }
  }
  return local_38;
}

