
/* WARNING: Enum "enum_2039": Some values do not have unique names */

undefined4
_xmlReaderNewFd(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  xmlParserInputBufferPtr pxVar1;
  undefined4 local_40;
  
  if (param_2 < 0) {
    local_40 = 0xffffffff;
  }
  else if (param_1 == 0) {
    local_40 = 0xffffffff;
  }
  else {
    pxVar1 = _xmlParserInputBufferCreateFd(param_2,XML_CHAR_ENCODING_ERROR);
    if (pxVar1 == (xmlParserInputBufferPtr)0x0) {
      local_40 = 0xffffffff;
    }
    else {
      pxVar1->closecallback = (xmlInputCloseCallback)0x0;
      local_40 = FUN_10095fb07(param_1,pxVar1,param_3,param_4,param_5);
    }
  }
  return local_40;
}

