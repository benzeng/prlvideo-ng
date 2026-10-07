
/* WARNING: Enum "enum_2039": Some values do not have unique names */

undefined4 _xmlSchemaValidateFile(long param_1,char *param_2)

{
  xmlParserInputBufferPtr pxVar1;
  undefined4 local_30;
  
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    local_30 = 0xffffffff;
  }
  else {
    pxVar1 = _xmlParserInputBufferCreateFilename(param_2,XML_CHAR_ENCODING_ERROR);
    if (pxVar1 == (xmlParserInputBufferPtr)0x0) {
      local_30 = 0xffffffff;
    }
    else {
      local_30 = _xmlSchemaValidateStream(param_1,pxVar1,0,0,0);
    }
  }
  return local_30;
}

