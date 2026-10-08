
/* WARNING: Enum "enum_2039": Some values do not have unique names */

undefined4
_xmlReaderNewMemory(long param_1,char *param_2,int param_3,undefined8 param_4,undefined8 param_5,
                   undefined4 param_6)

{
  xmlParserInputBufferPtr pxVar1;
  undefined4 local_48;
  
  if (param_1 == 0) {
    local_48 = 0xffffffff;
  }
  else if (param_2 == (char *)0x0) {
    local_48 = 0xffffffff;
  }
  else {
    pxVar1 = _xmlParserInputBufferCreateStatic(param_2,param_3,XML_CHAR_ENCODING_ERROR);
    if (pxVar1 == (xmlParserInputBufferPtr)0x0) {
      local_48 = 0xffffffff;
    }
    else {
      local_48 = FUN_10095fb07(param_1,pxVar1,param_4,param_5,param_6);
    }
  }
  return local_48;
}

