
/* WARNING: Enum "enum_2039": Some values do not have unique names */

undefined4
_xmlReaderNewIO(long param_1,xmlInputReadCallback param_2,xmlInputCloseCallback param_3,
               void *param_4,undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  xmlParserInputBufferPtr pxVar1;
  undefined4 local_4c;
  
  if (param_2 == (xmlInputReadCallback)0x0) {
    local_4c = 0xffffffff;
  }
  else if (param_1 == 0) {
    local_4c = 0xffffffff;
  }
  else {
    pxVar1 = _xmlParserInputBufferCreateIO(param_2,param_3,param_4,XML_CHAR_ENCODING_ERROR);
    if (pxVar1 == (xmlParserInputBufferPtr)0x0) {
      local_4c = 0xffffffff;
    }
    else {
      local_4c = FUN_10095fb07(param_1,pxVar1,param_5,param_6,param_7);
    }
  }
  return local_4c;
}

