
/* WARNING: Enum "enum_2039": Some values do not have unique names */

long _xmlNewTextReaderFilename(char *param_1)

{
  long lVar1;
  xmlParserInputBufferPtr in;
  xmlChar *pxVar2;
  long local_48;
  xmlChar *local_20;
  
  local_20 = (xmlChar *)0x0;
  in = _xmlParserInputBufferCreateFilename(param_1,XML_CHAR_ENCODING_ERROR);
  if (in == (xmlParserInputBufferPtr)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = _xmlNewTextReader(in,param_1);
    if (local_48 == 0) {
      _xmlFreeParserInputBuffer(in);
      local_48 = 0;
    }
    else {
      *(uint *)(local_48 + 0x14) = *(uint *)(local_48 + 0x14) | 1;
      if (*(long *)(*(long *)(local_48 + 0x20) + 0x118) == 0) {
        local_20 = (xmlChar *)_xmlParserGetDirectory(param_1);
      }
      if ((*(long *)(*(long *)(local_48 + 0x20) + 0x118) == 0) && (local_20 != (xmlChar *)0x0)) {
        lVar1 = *(long *)(local_48 + 0x20);
        pxVar2 = _xmlStrdup(local_20);
        *(xmlChar **)(lVar1 + 0x118) = pxVar2;
      }
      if (local_20 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_20);
      }
    }
  }
  return local_48;
}

